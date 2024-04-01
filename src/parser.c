#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_interface = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_type = 4,
  anon_sym_EQ = 5,
  anon_sym_SEMI = 6,
  anon_sym_bool = 7,
  anon_sym_s8 = 8,
  anon_sym_s16 = 9,
  anon_sym_s32 = 10,
  anon_sym_s64 = 11,
  anon_sym_u8 = 12,
  anon_sym_u16 = 13,
  anon_sym_u32 = 14,
  anon_sym_u64 = 15,
  anon_sym_float32 = 16,
  anon_sym_float64 = 17,
  anon_sym_char = 18,
  anon_sym_string = 19,
  anon_sym_func = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DASH_GT = 23,
  anon_sym_package = 24,
  anon_sym_COLON = 25,
  anon_sym_AT = 26,
  anon_sym_list_LT = 27,
  anon_sym_GT = 28,
  anon_sym_tuple_LT = 29,
  anon_sym_COMMA = 30,
  sym_identifier = 31,
  sym_version = 32,
  anon_sym_world = 33,
  anon_sym_import = 34,
  sym_source_file = 35,
  sym__definition = 36,
  sym_interface = 37,
  sym__interface_content = 38,
  sym_type_definition = 39,
  sym_type = 40,
  sym_function_declaration = 41,
  sym_package = 42,
  sym_list = 43,
  sym_tuple = 44,
  sym_world = 45,
  sym_import = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_interface_repeat1 = 48,
  aux_sym_world_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_bool] = "bool",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_s64] = "s64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char] = "char",
  [anon_sym_string] = "string",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_package] = "package",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_list_LT] = "list<",
  [anon_sym_GT] = ">",
  [anon_sym_tuple_LT] = "tuple<",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_version] = "version",
  [anon_sym_world] = "world",
  [anon_sym_import] = "import",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_interface] = "interface",
  [sym__interface_content] = "_interface_content",
  [sym_type_definition] = "type_definition",
  [sym_type] = "type",
  [sym_function_declaration] = "function_declaration",
  [sym_package] = "package",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_world] = "world",
  [sym_import] = "import",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interface_repeat1] = "interface_repeat1",
  [aux_sym_world_repeat1] = "world_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_s8] = anon_sym_s8,
  [anon_sym_s16] = anon_sym_s16,
  [anon_sym_s32] = anon_sym_s32,
  [anon_sym_s64] = anon_sym_s64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_list_LT] = anon_sym_list_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_tuple_LT] = anon_sym_tuple_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_version] = sym_version,
  [anon_sym_world] = anon_sym_world,
  [anon_sym_import] = anon_sym_import,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_interface] = sym_interface,
  [sym__interface_content] = sym__interface_content,
  [sym_type_definition] = sym_type_definition,
  [sym_type] = sym_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_package] = sym_package,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_world] = sym_world,
  [sym_import] = sym_import,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_interface_repeat1] = aux_sym_interface_repeat1,
  [aux_sym_world_repeat1] = aux_sym_world_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_world] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_content] = {
    .visible = false,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_world] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_world_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_element_type = 1,
  field_first_type = 2,
  field_function_name = 3,
  field_import = 4,
  field_import_name = 5,
  field_name = 6,
  field_namespace = 7,
  field_return_type = 8,
  field_second_type = 9,
  field_type = 10,
  field_type_name = 11,
  field_version = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_element_type] = "element_type",
  [field_first_type] = "first_type",
  [field_function_name] = "function_name",
  [field_import] = "import",
  [field_import_name] = "import_name",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_return_type] = "return_type",
  [field_second_type] = "second_type",
  [field_type] = "type",
  [field_type_name] = "type_name",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_import, 0},
  [2] =
    {field_name, 3},
    {field_namespace, 1},
  [4] =
    {field_import, 3, .inherited = true},
    {field_name, 1},
  [6] =
    {field_import, 0, .inherited = true},
    {field_import, 1, .inherited = true},
  [8] =
    {field_import_name, 1},
  [9] =
    {field_name, 3},
    {field_namespace, 1},
    {field_version, 5},
  [12] =
    {field_type, 3},
    {field_type_name, 1},
  [14] =
    {field_element_type, 1},
  [15] =
    {field_function_name, 1},
    {field_return_type, 5},
  [17] =
    {field_first_type, 1},
    {field_second_type, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_s64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_list_LT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_tuple_LT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '3') ADVANCE(114);
      if (lookahead == '6') ADVANCE(118);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == '6') ADVANCE(119);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '6') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_world);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 65},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 65},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_s64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_list_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_tuple_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_world] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__definition] = STATE(7),
    [sym_interface] = STATE(7),
    [sym_package] = STATE(7),
    [sym_world] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_world] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_list_LT,
    ACTIONS(15), 1,
      anon_sym_tuple_LT,
    STATE(49), 1,
      sym_type,
    STATE(25), 2,
      sym_list,
      sym_tuple,
    ACTIONS(11), 14,
      anon_sym_bool,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_string,
      sym_identifier,
  [30] = 5,
    ACTIONS(13), 1,
      anon_sym_list_LT,
    ACTIONS(15), 1,
      anon_sym_tuple_LT,
    STATE(48), 1,
      sym_type,
    STATE(25), 2,
      sym_list,
      sym_tuple,
    ACTIONS(11), 14,
      anon_sym_bool,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_string,
      sym_identifier,
  [60] = 5,
    ACTIONS(13), 1,
      anon_sym_list_LT,
    ACTIONS(15), 1,
      anon_sym_tuple_LT,
    STATE(43), 1,
      sym_type,
    STATE(25), 2,
      sym_list,
      sym_tuple,
    ACTIONS(11), 14,
      anon_sym_bool,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_string,
      sym_identifier,
  [90] = 5,
    ACTIONS(13), 1,
      anon_sym_list_LT,
    ACTIONS(15), 1,
      anon_sym_tuple_LT,
    STATE(42), 1,
      sym_type,
    STATE(25), 2,
      sym_list,
      sym_tuple,
    ACTIONS(11), 14,
      anon_sym_bool,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_string,
      sym_identifier,
  [120] = 5,
    ACTIONS(13), 1,
      anon_sym_list_LT,
    ACTIONS(15), 1,
      anon_sym_tuple_LT,
    STATE(39), 1,
      sym_type,
    STATE(25), 2,
      sym_list,
      sym_tuple,
    ACTIONS(11), 14,
      anon_sym_bool,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_string,
      sym_identifier,
  [150] = 5,
    ACTIONS(5), 1,
      anon_sym_interface,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_world,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(8), 5,
      sym__definition,
      sym_interface,
      sym_package,
      sym_world,
      aux_sym_source_file_repeat1,
  [170] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_interface,
    ACTIONS(24), 1,
      anon_sym_package,
    ACTIONS(27), 1,
      anon_sym_world,
    STATE(8), 5,
      sym__definition,
      sym_interface,
      sym_package,
      sym_world,
      aux_sym_source_file_repeat1,
  [190] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_type,
    ACTIONS(34), 1,
      anon_sym_func,
    STATE(10), 4,
      sym__interface_content,
      sym_type_definition,
      sym_function_declaration,
      aux_sym_interface_repeat1,
  [206] = 4,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_func,
    STATE(10), 4,
      sym__interface_content,
      sym_type_definition,
      sym_function_declaration,
      aux_sym_interface_repeat1,
  [222] = 4,
    ACTIONS(32), 1,
      anon_sym_type,
    ACTIONS(34), 1,
      anon_sym_func,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(9), 4,
      sym__interface_content,
      sym_type_definition,
      sym_function_declaration,
      aux_sym_interface_repeat1,
  [238] = 1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [245] = 4,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_import,
    STATE(13), 1,
      aux_sym_world_repeat1,
    STATE(28), 1,
      sym_import,
  [258] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_import,
    STATE(20), 1,
      aux_sym_world_repeat1,
    STATE(28), 1,
      sym_import,
  [271] = 1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [278] = 1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [285] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [292] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [299] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_world,
  [306] = 4,
    ACTIONS(55), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_world_repeat1,
    STATE(28), 1,
      sym_import,
  [319] = 1,
    ACTIONS(69), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COMMA,
  [325] = 1,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_func,
  [331] = 1,
    ACTIONS(73), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COMMA,
  [337] = 1,
    ACTIONS(75), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_func,
  [343] = 1,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_COMMA,
  [349] = 1,
    ACTIONS(79), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [354] = 2,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_AT,
  [361] = 1,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [366] = 1,
    ACTIONS(87), 1,
      sym_version,
  [370] = 1,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
  [374] = 1,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [378] = 1,
    ACTIONS(93), 1,
      sym_identifier,
  [382] = 1,
    ACTIONS(95), 1,
      sym_identifier,
  [386] = 1,
    ACTIONS(97), 1,
      anon_sym_COLON,
  [390] = 1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [394] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [398] = 1,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
  [402] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [406] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [410] = 1,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
  [414] = 1,
    ACTIONS(111), 1,
      sym_identifier,
  [418] = 1,
    ACTIONS(113), 1,
      anon_sym_GT,
  [422] = 1,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [426] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [430] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [434] = 1,
    ACTIONS(121), 1,
      sym_identifier,
  [438] = 1,
    ACTIONS(123), 1,
      sym_identifier,
  [442] = 1,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [446] = 1,
    ACTIONS(127), 1,
      anon_sym_GT,
  [450] = 1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
  [454] = 1,
    ACTIONS(131), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 325,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 337,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 349,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 370,
  [SMALL_STATE(31)] = 374,
  [SMALL_STATE(32)] = 378,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 398,
  [SMALL_STATE(38)] = 402,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 410,
  [SMALL_STATE(41)] = 414,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 422,
  [SMALL_STATE(44)] = 426,
  [SMALL_STATE(45)] = 430,
  [SMALL_STATE(46)] = 434,
  [SMALL_STATE(47)] = 438,
  [SMALL_STATE(48)] = 442,
  [SMALL_STATE(49)] = 446,
  [SMALL_STATE(50)] = 450,
  [SMALL_STATE(51)] = 454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(41),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 5, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_world_repeat1, 2, .production_id = 5),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_repeat1, 2, .production_id = 5), SHIFT_REPEAT(44),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 4, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world, 5, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world, 4, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5, .production_id = 11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_world_repeat1, 1, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wit() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
