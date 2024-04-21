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



; ; Primitive Types
; ; [
; ;   "bool"
; ;   "s8"
; ;   "s16"
; ;   "s32"
; ;   "s64"
; ;   "u8"
; ;   "u16"
; ;   "u32"
; ;   "u64"
; ;   "f32"
; ;   "f64"
; ;   "float32"
; ;   "float64"
; ;   "char"
; ;   "string"
; ;   ; Container Types
; ;   "list"
; ;   "tuple"
; ;   "option"
; ;   "result"
; ; ] @type.builtin
;
; ; "func" @keyword.function
;
; ; "interface" @keyword
;
; ; Keywords for file structure and components
; ; [
; ;   "record"
; ;   "enum"
; ;   "variant"
; ;   "flags"
; ;   "resource"
; ; ] @keyword.type
;
; ; Keywords for importing and exporting
; ; [
; ;   "package"
; ;   "world"
; ;   "use"
; ;   "import"
; ;   "export"
; ; ] @keyword.import
;
; ; Resource Keywords
; ; "static" @keyword.modifier
;
; ; Named Types (Capitalized identifiers)
; ; ((id) @type
; ;   (#match? @type "^[A-Z]"))
; ;
; ; ((id) @variable
; ;   (#match? @variable "^[a-z_][a-zA-Z0-9_]*$"))
; ;
; ; ; Constants (UPPER_CASE names and Enums)
; ; ((id) @constant
; ;   (#match? @constant "^[A-Z][A-Z0-9_]+$"))
; ;
; ; ; Functions and Methods (lowercase names followed by parentheses)
; ; ((id) @function
; ;   (#match? @function "^[a-z_][a-zA-Z0-9_]*\\("))
; ;

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
