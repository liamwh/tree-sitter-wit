(comment) @comment

(ty (id)) @type

(valid_semver) @property

(world_item
  name: (id) @property)

(interface_item
  name: (id) @property)

(type_item
  alias: (id) @property)

(func_item
  name: (id) @function)

(handle
  (id) @type)

(named_type
  name: (id) @variable.parameter)

(record_item
  name: (id) @variable)

(record_field
  name: (id) @variable)

(flags_items
  name: (id) @variable)

(flags_body
  (id) @property)

(variant_items
  name: (id) @variable)

(variant_case
    name: (id) @variable)

(enum_items
  name: (id) @variable)

(enum_body
  enum_cases: (id) @property)

(resource_method
  "constructor" @constructor)

[
  "type"
  "resource"
  "func"
  "record"
  "enum"
  "flags"
  "variant"
  "static"
  "interface"
  "world"
  "import"
  "export"
  "package"
  "include"
] @keyword

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
] @type

; Punctuation
[
  "->"
] @punctuation.special

; Delimiters
[
  "/"
  ";"
  ":"
  ","
] @punctuation.delimiter

; Brackets
[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket
