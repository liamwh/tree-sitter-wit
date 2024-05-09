/**
 * @file WIT grammar for tree-sitter
 * @author Liam Woodleigh-Hardinge <liam.woodleigh@gmail.com>
 * @license MIT
 */

/* eslint-disable no-undef */
/* eslint-disable no-unused-vars */

const optionalCommaSeparatedList = rule => optional(commaSeparatedList(rule));

const commaSeparatedList = rule => seq(
  rule,
  repeat(seq(",", rule)),
  optional(","),
);


module.exports = grammar({
  name: 'wit',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => seq(
      optional($.package_decl),
      repeat(
        choice(
          $.toplevel_use_item,
          $.world_item,
          $.interface_item,
        ),
      ),
    ),

    package_decl: $ => seq(
      field('attributes', repeat($.attribute)),
      'package',
      $.package_name,
      ';',
    ),

    package_name: $ => seq(
      repeat1(seq($.id, ':')),
      $.id,
      repeat(seq('/', $.id)),
      optional(seq('@', $.valid_semver)),
    ),

    toplevel_use_item: $ => seq(
      'use',
      field('path', $.use_path),
      optional(field('alias', seq('as', $.id))),
      ';',
    ),
    use_path: $ => choice(
      $.id,
      seq(repeat1(seq($.id, ':')), $.id, repeat(seq('/', $.id)), optional(seq('@', $.valid_semver))),
    ),

    id: $ => /%?(([a-z][a-z0-9]*|[A-Z][A-Z0-9]*))(-([a-z][a-z0-9]*|[A-Z][A-Z0-9]*))*/,

    // As per https://semver.org/, this regex allows for trailing metadata after MAJOR.MINOR.PATCH
    valid_semver: $ => /(\d+)\.(\d+)\.(\d+)(?:-([0-9A-Za-z-]+(?:\.[0-9A-Za-z-]+)*))?(?:\+([0-9A-Za-z-]+(?:\.[0-9A-Za-z-]+)*))?/,

    world_item: $ => seq(
      field("attributes", repeat($.attribute)),
      'world',
      field('name', $.id),
      field('body', $.world_body),
    ),

    world_body: $ => seq("{", field('world_items', repeat($.world_items)), "}"),

    world_items: $ => choice(
      field('export_item', $.export_item),
      field('import_item', $.import_item),
      field('use_item', $.use_item),
      field('typedef_item', $.typedef_item),
      field('include_item', $.include_item),
    ),

    export_item: $ => choice(
      seq('export', field('name', $.id), ':', $.extern_type),
      seq('export', $.use_path, ';'),
    ),

    import_item: $ => choice(
      seq('import', field('name', $.id), ':', $.extern_type),
      seq('import', $.use_path, ';'),
    ),

    extern_type: $ => choice(
      seq($.func_type, ';'),
      seq('interface', $.interface_body),
    ),

    include_item: $ => choice(
      seq(
        'include',
        field('use_path', $.use_path),
        ';'
      ),
      seq(
        'include',
        field('use_path', $.use_path),
        'with',
        field('include_names_body', $.include_names_body),
        ';',
      ),
    ),

    include_names_body: $ => seq('{', field('include_names_list', $.include_names_list), '}'),

    include_names_list: $ => commaSeparatedList(field('include_names_item', $.include_names_item)),

    include_names_item: $ => seq(field('name', $.id), 'as', field('alias', $.id)),

    interface_item: $ => seq(
      field('attributes', repeat($.attribute)),
      'interface',
      field('name', $.id),
      field('body', $.interface_body),
    ),

    interface_body: $ => seq(
      "{",
      field('interface_items', repeat($.interface_items)),
      "}"
    ),

    interface_items: $ => choice(
      field('typedef', $.typedef_item),
      field('use', $.use_item),
      field('func', $.func_item),
    ),

    typedef_item: $ => choice(
      $.resource_item,
      $.variant_items,
      $.record_item,
      $.flags_items,
      $.enum_items,
      $.type_item,
    ),

    func_item: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
      ':',
      $.func_type,
      ';',
    ),

    func_type: $ => seq(
      'func',
      field('param_list', $.param_list),
      optional(field('result_list', $.result_list))
    ),

    param_list: $ => seq('(', optional($.named_type_list), ')'),

    result_list: $ => choice(
      seq('->', $.ty),
      seq('->', '(', optional($.named_type_list), ')'),
    ),

    named_type_list: $ => commaSeparatedList($.named_type),

    named_type: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
      ':',
      field('type', $.ty),
    ),

    use_item: $ => seq('use', $.use_path, '.', '{', $.use_names_list, '}', ';'),

    use_names_list: $ => commaSeparatedList(field('use_names_item', $.use_names_item)),

    use_names_item: $ => choice(
      field('name', $.id),
      seq(
        field('name', $.id),
        'as',
        field('alias', $.id),
      ),
    ),

    type_item: $ => seq(
      field('attributes', repeat($.attribute)),
      'type',
      field('alias', $.id),
      '=',
      field('type', $.ty),
      ';',
    ),

    record_item: $ => seq(
      field('attributes', repeat($.attribute)),
      'record',
      field('name', $.id),
      field('body', $.record_body),
    ),

    record_body: $ => seq('{', field('record_fields', optionalCommaSeparatedList($.record_field)), '}'),

    record_field: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
      ':',
      field('type', $.ty),
    ),

    flags_items: $ => seq(
      field('attributes', repeat($.attribute)),
      'flags',
      field('name', $.id),
      field('body', $.flags_body),
    ),

    flags_body: $ => seq('{', field('flags_fields', optionalCommaSeparatedList($.flags_case)), '}'),
    flags_case: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
    ),

    variant_items: $ => seq(
      field('attributes', repeat($.attribute)),
      'variant',
      field('name', $.id),
      field('body', $.variant_body),
    ),

    variant_body: $ => seq('{', field('variant_cases', optionalCommaSeparatedList($.variant_case)), '}'),

    variant_case: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
      optional(seq('(', field('type', $.ty), ')')),
    ),

    enum_items: $ => seq(
      field('attributes', repeat($.attribute)),
      'enum',
      field('name', $.id),
      $.enum_body,
    ),

    enum_body: $ => seq('{', field('enum_cases', optionalCommaSeparatedList($.enum_case)), '}'),
    enum_case: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
    ),

    resource_item: $ => seq(
      field('attributes', repeat($.attribute)),
      'resource',
      field('name', $.id),
      choice(
        ';',
        optional(field('resource_body', $.resource_body)),
      ),
    ),

    resource_body: $ => seq('{', repeat($.resource_method), '}'),

    resource_method: $ => choice(
      $.func_item,
      $.static_resource_method,
      $.resource_constructor,
    ),
    static_resource_method: $ => seq(
      field('attributes', repeat($.attribute)),
      field('name', $.id),
      ':',
      'static',
      $.func_type,
      ';',

    ),
    resource_constructor: $ => seq(
      field('attributes', repeat($.attribute)),
      'constructor',
      $.param_list,
      ';',
    ),

    ty: $ => prec(1, choice(
      $.builtin,
      $.tuple,
      $.list,
      $.option,
      $.result,
      $.id,
      $.handle,
    )),

    builtin: _ => choice(
      "u8",
      "u16",
      "u32",
      "u64",
      "s8",
      "s16",
      "s32",
      "s64",
      "f32",
      "f64",
      "float32", // deprecated
      "float64", // deprecated
      "char",
      "bool",
      "string",
    ),

    tuple: $ => seq('tuple', '<', optional($.tuple_list), '>'),

    tuple_list: $ => commaSeparatedList($.ty),

    list: $ => seq('list', '<', $.ty, '>'),

    option: $ => seq('option', '<', $.ty, '>'),

    result: $ => seq(
      'result',
      optional(
        choice(
          seq('<', field('ok', $.ty), ',', field('err', $.ty), '>'),
          seq('<', '_', ',', field('err', $.ty), '>'),
          seq('<', field('ok', $.ty), '>'),
        ),
      ),
    ),

    handle: $ => prec(0, choice($.borrowed_handle, $.owned_handle)),
    borrowed_handle: $ => seq('borrow', '<', $.id, '>'),
    owned_handle: $ => seq('own', '<', $.id, '>'),

    attribute: $ => $.doc_comment,

    doc_comment: $ => seq("///", optional(' '), $.docs),
    docs: _ => /[^\n]*/,
    comment: _ => token(choice(
      seq("//", /[^/\n][^\n]*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});
