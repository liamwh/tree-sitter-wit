module.exports = grammar({
    name: 'wit',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.package,
            $.world,
            $.interface,
        ),

        interface: $ => seq(
            'interface',
            field('name', $.identifier),
            '{',
            repeat($._interface_content),
            '}'
        ),

        _interface_content: $ => choice(
            $.type_definition,
            $.function_declaration,
        ),

        type_definition: $ => seq(
            'type',
            field('type_name', $.identifier),
            '=',
            field('type', $.type),
            ';'
        ),

        type: $ => choice(
            'bool',
            's8', 's16', 's32', 's64',
            'u8', 'u16', 'u32', 'u64',
            'float32', 'float64',
            'char', 'string',
            $.identifier,
            $.list,
            $.tuple
        ),

        function_declaration: $ => seq(
            'func',
            field('function_name', $.identifier),
            '(', /* parameters */ ')',
            '->',
            field('return_type', $.type),
            ';'
        ),

        package: $ => seq(
            'package',
            field('namespace', $.identifier),
            ':',
            field('name', $.identifier),
            optional(seq('@', field('version', $.version))),
            ';'
        ),

        list: $ => seq(
            'list<',
            field('element_type', $.type),
            '>'
        ),

        tuple: $ => seq(
            'tuple<',
            field('first_type', $.type),
            ',',
            field('second_type', $.type),
            '>'
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

        version: $ => /\d+\.\d+\.\d+/,

        world: $ => seq(
            'world',
            field('name', $.identifier),
            '{',
            repeat(field('import', $.import)),
            '}'
        ),

        import: $ => seq(
            'import',
            field('import_name', $.identifier),
            ';'
        ),

        _world_content: $ => choice(
            $.import,
            // Add other world content rules here as needed
        ),
    }
});
