(comment) @comment

(ty
  (id)) @type

(package_decl
  (id)) @module

(valid_semver) @property

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

(handle
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
  (id) @property)

(variant_items
  name: (id) @type)

(variant_case
  name: (id) @type)

(enum_items
  name: (id) @type)

(enum_body
  enum_cases: (id) @property)

(resource_item
  name: (id) @type)

(resource_method
  "constructor" @constructor)

(toplevel_use_item
  "use" @keyword.import)

(use_item
  "use" @keyword.import)

(use_path
  (id) @module)

[
  "type"
  "interface"
  "world"
  "package"
] @keyword

"func" @keyword.function

[
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

(result
  "result" @keyword.return)

(result
  "_" @variable.parameter.builtin)

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
] @type.builtin

[
  "tuple"
  "list"
  "option"
  "result"
  "borrow"
] @type.definition

[
  "@"
  "->"
] @punctuation.special

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
