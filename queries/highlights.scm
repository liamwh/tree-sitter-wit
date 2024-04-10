; Comments
(line_comment) @comment

(block_comment) @comment

; Primitive Types
[
  "bool"
  "s8"
  "s16"
  "s32"
  "s64"
  "u8"
  "u16"
  "u32"
  "u64"
  "float32"
  "float64"
  "char"
  "string"
] @type.builtin

; Container Types
[
  "list"
  "tuple"
  "option"
  "result"
] @type.builtin

"func" @keyword.function

; Keywords for file structure and components
[
  "record"
  "enum"
  "variant"
  "flags"
  "resource"
] @keyword

; Keywords for importing and exporting
[
  "package"
  "world"
  "use"
  "import"
] @keyword.import

; Resource Keywords
"static" @keyword.modifier

; Named Types (Capitalized identifiers)
((identifier) @type
  (#lua-match? @type "^[A-Z]"))

; Identifiers (variable names, function names, type names, etc.)
((identifier) @variable
  (#lua-match? @variable "^[a-z_][a-zA-Z0-9_]*$"))

; Constants (UPPER_CASE names and Enums)
((identifier) @constant
  (#lua-match? @constant "^[A-Z][A-Z0-9_]+$"))

; Functions and Methods (lowercase names followed by parentheses)
((identifier) @function
  (#lua-match? @function "^[a-z_][a-zA-Z0-9_]*%(")))

; Punctuation
[
  ";"
  ":"
  "->"
] @punctuation

; Delimiters
"," @punctuation.delimiter

; Brackets
[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket
