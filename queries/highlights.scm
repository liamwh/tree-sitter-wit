(comment) @comment @spell

(ty
  (id)) @type

(package_decl
  (package_name)) @module

(valid_semver) @string.special

(world_item
  name: (id) @module)

(interface_item
  name: (id) @module)

(import_item
  name: (id) @module
  (extern_type
    (interface_body)))

(import_item
  name: (id) @function
  (extern_type
    (func_type)))

(export_item
  name: (id) @module
  (extern_type
    (interface_body)))

(export_item
  name: (id) @function
  (extern_type
    (func_type)))

(type_item
  alias: (id) @type.definition)

(func_item
  name: (id) @function)

(borrowed_handle
  (id) @type)

(owned_handle
  (id) @type)

(named_type
  name: (id) @variable.parameter)

(record_item
  name: (id) @type)

(record_field
  name: (id) @variable.member)

(flags_items
  name: (id) @type)

(flags_body
  (flags_case
    (id) @variable.member))

(variant_items
  name: (id) @type)

(variant_case
  name: (id) @type)

(enum_items
  name: (id) @type)

(enum_body
  (enum_case
    (id) @constant))

(resource_item
  name: (id) @type)

(resource_constructor) @constructor

(toplevel_use_item
  "use" @keyword.import)

(use_item
  "use" @keyword.import)

(use_path
  (id) @module)

"func" @keyword.function

[
  "type"
  "interface"
  "world"
  "package"
  "resource"
  "record"
  "enum"
  "flags"
  "variant"
] @keyword.type

"static" @keyword.modifier

[
  "include"
  "import"
  "export"
] @keyword.import

[
  "u8"
  "u16"
  "u32"
  "u64"
  "s8"
  "s16"
  "s32"
  "s64"
  "f32"
  "f64"
  "char"
  "bool"
  "string"
  "tuple"
  "list"
  "option"
  "result"
  "borrow"
] @type.builtin

[
  "@"
  "->"
] @punctuation.special

(result
  "_" @variable.parameter.builtin)

[
  "/"
  ";"
  ":"
  ","
] @punctuation.delimiter

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

"=" @operator
