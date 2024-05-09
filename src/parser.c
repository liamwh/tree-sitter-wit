#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 44

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_COLON = 2,
  anon_sym_SLASH = 3,
  anon_sym_AT = 4,
  anon_sym_SEMI = 5,
  anon_sym_use = 6,
  anon_sym_as = 7,
  sym_id = 8,
  sym_valid_semver = 9,
  anon_sym_world = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_export = 13,
  anon_sym_import = 14,
  anon_sym_interface = 15,
  anon_sym_include = 16,
  anon_sym_with = 17,
  anon_sym_COMMA = 18,
  anon_sym_func = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_DOT = 23,
  anon_sym_type = 24,
  anon_sym_EQ = 25,
  anon_sym_record = 26,
  anon_sym_flags = 27,
  anon_sym_variant = 28,
  anon_sym_enum = 29,
  anon_sym_resource = 30,
  anon_sym_static = 31,
  anon_sym_constructor = 32,
  anon_sym_u8 = 33,
  anon_sym_u16 = 34,
  anon_sym_u32 = 35,
  anon_sym_u64 = 36,
  anon_sym_s8 = 37,
  anon_sym_s16 = 38,
  anon_sym_s32 = 39,
  anon_sym_s64 = 40,
  anon_sym_f32 = 41,
  anon_sym_f64 = 42,
  anon_sym_float32 = 43,
  anon_sym_float64 = 44,
  anon_sym_char = 45,
  anon_sym_bool = 46,
  anon_sym_string = 47,
  anon_sym_tuple = 48,
  anon_sym_LT = 49,
  anon_sym_GT = 50,
  anon_sym_list = 51,
  anon_sym_option = 52,
  anon_sym_result = 53,
  anon_sym__ = 54,
  anon_sym_borrow = 55,
  anon_sym_own = 56,
  sym_comment = 57,
  sym_source_file = 58,
  sym_package_decl = 59,
  sym_toplevel_use_item = 60,
  sym_use_path = 61,
  sym_world_item = 62,
  sym_world_body = 63,
  sym_world_items = 64,
  sym_export_item = 65,
  sym_import_item = 66,
  sym_extern_type = 67,
  sym_include_item = 68,
  sym_include_names_body = 69,
  sym_include_names_list = 70,
  sym_include_names_item = 71,
  sym_interface_item = 72,
  sym_interface_body = 73,
  sym_interface_items = 74,
  sym_typedef_item = 75,
  sym_func_item = 76,
  sym_func_type = 77,
  sym_param_list = 78,
  sym_result_list = 79,
  sym_named_type_list = 80,
  sym_named_type = 81,
  sym_use_item = 82,
  sym_use_names_list = 83,
  sym_use_names_item = 84,
  sym_type_item = 85,
  sym_record_item = 86,
  sym_record_body = 87,
  sym_record_field = 88,
  sym_flags_items = 89,
  sym_flags_body = 90,
  sym_variant_items = 91,
  sym_variant_body = 92,
  sym_variant_case = 93,
  sym_enum_items = 94,
  sym_enum_body = 95,
  sym_resource_item = 96,
  sym_resource_body = 97,
  sym_resource_method = 98,
  sym_ty = 99,
  sym_tuple = 100,
  sym_tuple_list = 101,
  sym_list = 102,
  sym_option = 103,
  sym_result = 104,
  sym_handle = 105,
  sym__borrow_handle = 106,
  sym__owned_handle = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_package_decl_repeat1 = 109,
  aux_sym_package_decl_repeat2 = 110,
  aux_sym_world_body_repeat1 = 111,
  aux_sym_include_names_list_repeat1 = 112,
  aux_sym_interface_body_repeat1 = 113,
  aux_sym_named_type_list_repeat1 = 114,
  aux_sym_use_names_list_repeat1 = 115,
  aux_sym_record_body_repeat1 = 116,
  aux_sym_flags_body_repeat1 = 117,
  aux_sym_variant_body_repeat1 = 118,
  aux_sym_resource_body_repeat1 = 119,
  aux_sym_tuple_list_repeat1 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_AT] = "@",
  [anon_sym_SEMI] = ";",
  [anon_sym_use] = "use",
  [anon_sym_as] = "as",
  [sym_id] = "id",
  [sym_valid_semver] = "valid_semver",
  [anon_sym_world] = "world",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_export] = "export",
  [anon_sym_import] = "import",
  [anon_sym_interface] = "interface",
  [anon_sym_include] = "include",
  [anon_sym_with] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_record] = "record",
  [anon_sym_flags] = "flags",
  [anon_sym_variant] = "variant",
  [anon_sym_enum] = "enum",
  [anon_sym_resource] = "resource",
  [anon_sym_static] = "static",
  [anon_sym_constructor] = "constructor",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_s64] = "s64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_tuple] = "tuple",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_list] = "list",
  [anon_sym_option] = "option",
  [anon_sym_result] = "result",
  [anon_sym__] = "_",
  [anon_sym_borrow] = "borrow",
  [anon_sym_own] = "own",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_decl] = "package_decl",
  [sym_toplevel_use_item] = "toplevel_use_item",
  [sym_use_path] = "use_path",
  [sym_world_item] = "world_item",
  [sym_world_body] = "world_body",
  [sym_world_items] = "world_items",
  [sym_export_item] = "export_item",
  [sym_import_item] = "import_item",
  [sym_extern_type] = "extern_type",
  [sym_include_item] = "include_item",
  [sym_include_names_body] = "include_names_body",
  [sym_include_names_list] = "include_names_list",
  [sym_include_names_item] = "include_names_item",
  [sym_interface_item] = "interface_item",
  [sym_interface_body] = "interface_body",
  [sym_interface_items] = "interface_items",
  [sym_typedef_item] = "typedef_item",
  [sym_func_item] = "func_item",
  [sym_func_type] = "func_type",
  [sym_param_list] = "param_list",
  [sym_result_list] = "result_list",
  [sym_named_type_list] = "named_type_list",
  [sym_named_type] = "named_type",
  [sym_use_item] = "use_item",
  [sym_use_names_list] = "use_names_list",
  [sym_use_names_item] = "use_names_item",
  [sym_type_item] = "type_item",
  [sym_record_item] = "record_item",
  [sym_record_body] = "record_body",
  [sym_record_field] = "record_field",
  [sym_flags_items] = "flags_items",
  [sym_flags_body] = "flags_body",
  [sym_variant_items] = "variant_items",
  [sym_variant_body] = "variant_body",
  [sym_variant_case] = "variant_case",
  [sym_enum_items] = "enum_items",
  [sym_enum_body] = "enum_body",
  [sym_resource_item] = "resource_item",
  [sym_resource_body] = "resource_body",
  [sym_resource_method] = "resource_method",
  [sym_ty] = "ty",
  [sym_tuple] = "tuple",
  [sym_tuple_list] = "tuple_list",
  [sym_list] = "list",
  [sym_option] = "option",
  [sym_result] = "result",
  [sym_handle] = "handle",
  [sym__borrow_handle] = "_borrow_handle",
  [sym__owned_handle] = "_owned_handle",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_package_decl_repeat1] = "package_decl_repeat1",
  [aux_sym_package_decl_repeat2] = "package_decl_repeat2",
  [aux_sym_world_body_repeat1] = "world_body_repeat1",
  [aux_sym_include_names_list_repeat1] = "include_names_list_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_named_type_list_repeat1] = "named_type_list_repeat1",
  [aux_sym_use_names_list_repeat1] = "use_names_list_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_flags_body_repeat1] = "flags_body_repeat1",
  [aux_sym_variant_body_repeat1] = "variant_body_repeat1",
  [aux_sym_resource_body_repeat1] = "resource_body_repeat1",
  [aux_sym_tuple_list_repeat1] = "tuple_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_as] = anon_sym_as,
  [sym_id] = sym_id,
  [sym_valid_semver] = sym_valid_semver,
  [anon_sym_world] = anon_sym_world,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_s8] = anon_sym_s8,
  [anon_sym_s16] = anon_sym_s16,
  [anon_sym_s32] = anon_sym_s32,
  [anon_sym_s64] = anon_sym_s64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_result] = anon_sym_result,
  [anon_sym__] = anon_sym__,
  [anon_sym_borrow] = anon_sym_borrow,
  [anon_sym_own] = anon_sym_own,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_decl] = sym_package_decl,
  [sym_toplevel_use_item] = sym_toplevel_use_item,
  [sym_use_path] = sym_use_path,
  [sym_world_item] = sym_world_item,
  [sym_world_body] = sym_world_body,
  [sym_world_items] = sym_world_items,
  [sym_export_item] = sym_export_item,
  [sym_import_item] = sym_import_item,
  [sym_extern_type] = sym_extern_type,
  [sym_include_item] = sym_include_item,
  [sym_include_names_body] = sym_include_names_body,
  [sym_include_names_list] = sym_include_names_list,
  [sym_include_names_item] = sym_include_names_item,
  [sym_interface_item] = sym_interface_item,
  [sym_interface_body] = sym_interface_body,
  [sym_interface_items] = sym_interface_items,
  [sym_typedef_item] = sym_typedef_item,
  [sym_func_item] = sym_func_item,
  [sym_func_type] = sym_func_type,
  [sym_param_list] = sym_param_list,
  [sym_result_list] = sym_result_list,
  [sym_named_type_list] = sym_named_type_list,
  [sym_named_type] = sym_named_type,
  [sym_use_item] = sym_use_item,
  [sym_use_names_list] = sym_use_names_list,
  [sym_use_names_item] = sym_use_names_item,
  [sym_type_item] = sym_type_item,
  [sym_record_item] = sym_record_item,
  [sym_record_body] = sym_record_body,
  [sym_record_field] = sym_record_field,
  [sym_flags_items] = sym_flags_items,
  [sym_flags_body] = sym_flags_body,
  [sym_variant_items] = sym_variant_items,
  [sym_variant_body] = sym_variant_body,
  [sym_variant_case] = sym_variant_case,
  [sym_enum_items] = sym_enum_items,
  [sym_enum_body] = sym_enum_body,
  [sym_resource_item] = sym_resource_item,
  [sym_resource_body] = sym_resource_body,
  [sym_resource_method] = sym_resource_method,
  [sym_ty] = sym_ty,
  [sym_tuple] = sym_tuple,
  [sym_tuple_list] = sym_tuple_list,
  [sym_list] = sym_list,
  [sym_option] = sym_option,
  [sym_result] = sym_result,
  [sym_handle] = sym_handle,
  [sym__borrow_handle] = sym__borrow_handle,
  [sym__owned_handle] = sym__owned_handle,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_package_decl_repeat1] = aux_sym_package_decl_repeat1,
  [aux_sym_package_decl_repeat2] = aux_sym_package_decl_repeat2,
  [aux_sym_world_body_repeat1] = aux_sym_world_body_repeat1,
  [aux_sym_include_names_list_repeat1] = aux_sym_include_names_list_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym_named_type_list_repeat1] = aux_sym_named_type_list_repeat1,
  [aux_sym_use_names_list_repeat1] = aux_sym_use_names_list_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
  [aux_sym_flags_body_repeat1] = aux_sym_flags_body_repeat1,
  [aux_sym_variant_body_repeat1] = aux_sym_variant_body_repeat1,
  [aux_sym_resource_body_repeat1] = aux_sym_resource_body_repeat1,
  [aux_sym_tuple_list_repeat1] = aux_sym_tuple_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_valid_semver] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_world] = {
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
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
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
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_borrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_own] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_use_item] = {
    .visible = true,
    .named = true,
  },
  [sym_use_path] = {
    .visible = true,
    .named = true,
  },
  [sym_world_item] = {
    .visible = true,
    .named = true,
  },
  [sym_world_body] = {
    .visible = true,
    .named = true,
  },
  [sym_world_items] = {
    .visible = true,
    .named = true,
  },
  [sym_export_item] = {
    .visible = true,
    .named = true,
  },
  [sym_import_item] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_type] = {
    .visible = true,
    .named = true,
  },
  [sym_include_item] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_body] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_list] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_item] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_item] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_items] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_item] = {
    .visible = true,
    .named = true,
  },
  [sym_func_item] = {
    .visible = true,
    .named = true,
  },
  [sym_func_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_result_list] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_use_item] = {
    .visible = true,
    .named = true,
  },
  [sym_use_names_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_names_item] = {
    .visible = true,
    .named = true,
  },
  [sym_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_flags_items] = {
    .visible = true,
    .named = true,
  },
  [sym_flags_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_items] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_case] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_items] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_item] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_body] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_method] = {
    .visible = true,
    .named = true,
  },
  [sym_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_handle] = {
    .visible = true,
    .named = true,
  },
  [sym__borrow_handle] = {
    .visible = false,
    .named = true,
  },
  [sym__owned_handle] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_world_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_names_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_names_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flags_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_enum_cases = 3,
  field_export_item = 4,
  field_flags_fields = 5,
  field_func = 6,
  field_import_item = 7,
  field_include_item = 8,
  field_include_names_body = 9,
  field_include_names_item = 10,
  field_include_names_list = 11,
  field_interface_items = 12,
  field_name = 13,
  field_param_list = 14,
  field_path = 15,
  field_record_fields = 16,
  field_resource_body = 17,
  field_result_list = 18,
  field_type = 19,
  field_typedef = 20,
  field_typedef_item = 21,
  field_use = 22,
  field_use_item = 23,
  field_use_names_item = 24,
  field_use_path = 25,
  field_variant_cases = 26,
  field_world_items = 27,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_enum_cases] = "enum_cases",
  [field_export_item] = "export_item",
  [field_flags_fields] = "flags_fields",
  [field_func] = "func",
  [field_import_item] = "import_item",
  [field_include_item] = "include_item",
  [field_include_names_body] = "include_names_body",
  [field_include_names_item] = "include_names_item",
  [field_include_names_list] = "include_names_list",
  [field_interface_items] = "interface_items",
  [field_name] = "name",
  [field_param_list] = "param_list",
  [field_path] = "path",
  [field_record_fields] = "record_fields",
  [field_resource_body] = "resource_body",
  [field_result_list] = "result_list",
  [field_type] = "type",
  [field_typedef] = "typedef",
  [field_typedef_item] = "typedef_item",
  [field_use] = "use",
  [field_use_item] = "use_item",
  [field_use_names_item] = "use_names_item",
  [field_use_path] = "use_path",
  [field_variant_cases] = "variant_cases",
  [field_world_items] = "world_items",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 1},
  [19] = {.index = 22, .length = 1},
  [20] = {.index = 23, .length = 1},
  [21] = {.index = 24, .length = 2},
  [22] = {.index = 26, .length = 2},
  [23] = {.index = 28, .length = 1},
  [24] = {.index = 29, .length = 1},
  [25] = {.index = 30, .length = 1},
  [26] = {.index = 31, .length = 1},
  [27] = {.index = 32, .length = 2},
  [28] = {.index = 34, .length = 2},
  [29] = {.index = 36, .length = 1},
  [30] = {.index = 37, .length = 2},
  [31] = {.index = 39, .length = 2},
  [32] = {.index = 41, .length = 2},
  [33] = {.index = 43, .length = 2},
  [34] = {.index = 45, .length = 2},
  [35] = {.index = 47, .length = 2},
  [36] = {.index = 49, .length = 1},
  [37] = {.index = 50, .length = 2},
  [38] = {.index = 52, .length = 1},
  [39] = {.index = 53, .length = 2},
  [40] = {.index = 55, .length = 3},
  [41] = {.index = 58, .length = 3},
  [42] = {.index = 61, .length = 3},
  [43] = {.index = 64, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_export_item, 0},
  [4] =
    {field_import_item, 0},
  [5] =
    {field_include_item, 0},
  [6] =
    {field_typedef_item, 0},
  [7] =
    {field_use_item, 0},
  [8] =
    {field_typedef, 0},
  [9] =
    {field_func, 0},
  [10] =
    {field_use, 0},
  [11] =
    {field_alias, 2},
    {field_alias, 3},
    {field_path, 1},
  [14] =
    {field_name, 1},
  [15] =
    {field_world_items, 1},
  [16] =
    {field_interface_items, 1},
  [17] =
    {field_use_path, 1},
  [18] =
    {field_name, 1},
    {field_resource_body, 2},
  [20] =
    {field_name, 0},
  [21] =
    {field_param_list, 1},
  [22] =
    {field_use_names_item, 0},
  [23] =
    {field_include_names_item, 0},
  [24] =
    {field_include_names_body, 3},
    {field_use_path, 1},
  [26] =
    {field_alias, 1},
    {field_type, 3},
  [28] =
    {field_record_fields, 1},
  [29] =
    {field_flags_fields, 1},
  [30] =
    {field_variant_cases, 1},
  [31] =
    {field_enum_cases, 1},
  [32] =
    {field_param_list, 1},
    {field_result_list, 2},
  [34] =
    {field_use_names_item, 0},
    {field_use_names_item, 1, .inherited = true},
  [36] =
    {field_include_names_list, 1},
  [37] =
    {field_include_names_item, 0},
    {field_include_names_item, 1, .inherited = true},
  [39] =
    {field_name, 0},
    {field_type, 2},
  [41] =
    {field_record_fields, 1},
    {field_record_fields, 2},
  [43] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
  [45] =
    {field_variant_cases, 1},
    {field_variant_cases, 2},
  [47] =
    {field_enum_cases, 1},
    {field_enum_cases, 2},
  [49] =
    {field_use_names_item, 1},
  [50] =
    {field_use_names_item, 0, .inherited = true},
    {field_use_names_item, 1, .inherited = true},
  [52] =
    {field_include_names_item, 1},
  [53] =
    {field_include_names_item, 0, .inherited = true},
    {field_include_names_item, 1, .inherited = true},
  [55] =
    {field_record_fields, 1},
    {field_record_fields, 2},
    {field_record_fields, 3},
  [58] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
    {field_flags_fields, 3},
  [61] =
    {field_variant_cases, 1},
    {field_variant_cases, 2},
    {field_variant_cases, 3},
  [64] =
    {field_enum_cases, 1},
    {field_enum_cases, 2},
    {field_enum_cases, 3},
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
  [12] = 7,
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
  [25] = 23,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 51,
  [67] = 57,
  [68] = 39,
  [69] = 69,
  [70] = 38,
  [71] = 27,
  [72] = 62,
  [73] = 37,
  [74] = 36,
  [75] = 35,
  [76] = 63,
  [77] = 30,
  [78] = 43,
  [79] = 31,
  [80] = 32,
  [81] = 33,
  [82] = 34,
  [83] = 26,
  [84] = 58,
  [85] = 50,
  [86] = 48,
  [87] = 47,
  [88] = 46,
  [89] = 40,
  [90] = 45,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 49,
  [95] = 44,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 103,
  [107] = 107,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 140,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 160,
  [163] = 161,
  [164] = 153,
  [165] = 159,
  [166] = 147,
  [167] = 155,
  [168] = 158,
  [169] = 156,
  [170] = 170,
  [171] = 171,
  [172] = 154,
  [173] = 173,
  [174] = 143,
  [175] = 69,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 149,
  [196] = 196,
  [197] = 171,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 145,
  [202] = 170,
  [203] = 151,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 213,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 211,
  [222] = 212,
  [223] = 223,
  [224] = 224,
  [225] = 216,
  [226] = 208,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 229,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 206,
  [238] = 238,
  [239] = 236,
  [240] = 240,
  [241] = 241,
  [242] = 240,
  [243] = 243,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 272,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 308,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 292,
  [323] = 307,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 276,
  [328] = 275,
  [329] = 274,
  [330] = 262,
  [331] = 331,
  [332] = 332,
  [333] = 300,
  [334] = 334,
  [335] = 277,
  [336] = 303,
  [337] = 267,
  [338] = 332,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      ADVANCE_MAP(
        '(', 269,
        ')', 270,
        ',', 266,
        '-', 36,
        '.', 272,
        '/', 149,
        ':', 148,
        ';', 151,
        '<', 321,
        '=', 275,
        '>', 322,
        '@', 150,
      );
      if (lookahead == '\\') SKIP(145);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(13);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == '}') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(173);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '}') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(336);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(289);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(305);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(301);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(293);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(309);
      END_STATE();
    case 28:
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(307);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(303);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(295);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(311);
      END_STATE();
    case 34:
      if (lookahead == '6') ADVANCE(299);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(291);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(271);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(317);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 141:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 144:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(336);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '1') ADVANCE(167);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '6') ADVANCE(164);
      if (lookahead == '8') ADVANCE(298);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '3') ADVANCE(159);
      if (lookahead == '6') ADVANCE(165);
      if (lookahead == '8') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '2') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '2') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '2') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '2') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '3') ADVANCE(160);
      if (lookahead == '6') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '4') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '4') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '4') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '4') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '6') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '6') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_world);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_variant);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_resource);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_s64);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_f32);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_f64);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_result);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_borrow);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_borrow);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_own);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_own);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 13},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 13},
  [257] = {.lex_state = 13},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 13},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 13},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 13},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_valid_semver] = ACTIONS(1),
    [anon_sym_world] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_s64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_borrow] = ACTIONS(1),
    [anon_sym_own] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(296),
    [sym_package_decl] = STATE(98),
    [sym_toplevel_use_item] = STATE(96),
    [sym_world_item] = STATE(96),
    [sym_interface_item] = STATE(96),
    [aux_sym_source_file_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(192), 1,
      sym_ty,
    STATE(326), 1,
      sym_tuple_list,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [62] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [121] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    ACTIONS(35), 1,
      anon_sym_GT,
    STATE(259), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [180] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    ACTIONS(37), 1,
      anon_sym_GT,
    STATE(259), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [239] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    ACTIONS(39), 1,
      anon_sym__,
    STATE(214), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [298] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(317), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(217), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [410] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(305), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [466] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(325), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [522] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(251), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [578] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(308), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [634] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(264), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [690] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(259), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [746] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_own,
    STATE(324), 1,
      sym_ty,
    STATE(111), 2,
      sym__borrow_handle,
      sym__owned_handle,
    STATE(110), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(17), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [802] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_use,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_export,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(52), 1,
      anon_sym_include,
    ACTIONS(55), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_record,
    ACTIONS(61), 1,
      anon_sym_flags,
    ACTIONS(64), 1,
      anon_sym_variant,
    ACTIONS(67), 1,
      anon_sym_enum,
    ACTIONS(70), 1,
      anon_sym_resource,
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [866] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_use,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_export,
    ACTIONS(79), 1,
      anon_sym_import,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_type,
    ACTIONS(85), 1,
      anon_sym_record,
    ACTIONS(87), 1,
      anon_sym_flags,
    ACTIONS(89), 1,
      anon_sym_variant,
    ACTIONS(91), 1,
      anon_sym_enum,
    ACTIONS(93), 1,
      anon_sym_resource,
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [930] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_use,
    ACTIONS(77), 1,
      anon_sym_export,
    ACTIONS(79), 1,
      anon_sym_import,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_type,
    ACTIONS(85), 1,
      anon_sym_record,
    ACTIONS(87), 1,
      anon_sym_flags,
    ACTIONS(89), 1,
      anon_sym_variant,
    ACTIONS(91), 1,
      anon_sym_enum,
    ACTIONS(93), 1,
      anon_sym_resource,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(17), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [994] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_use,
    ACTIONS(99), 1,
      sym_id,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_type,
    ACTIONS(105), 1,
      anon_sym_record,
    ACTIONS(107), 1,
      anon_sym_flags,
    ACTIONS(109), 1,
      anon_sym_variant,
    ACTIONS(111), 1,
      anon_sym_enum,
    ACTIONS(113), 1,
      anon_sym_resource,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(93), 1,
      sym_typedef_item,
    STATE(21), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(67), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [1046] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_use,
    ACTIONS(118), 1,
      sym_id,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_type,
    ACTIONS(126), 1,
      anon_sym_record,
    ACTIONS(129), 1,
      anon_sym_flags,
    ACTIONS(132), 1,
      anon_sym_variant,
    ACTIONS(135), 1,
      anon_sym_enum,
    ACTIONS(138), 1,
      anon_sym_resource,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(93), 1,
      sym_typedef_item,
    STATE(20), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(67), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [1098] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_use,
    ACTIONS(99), 1,
      sym_id,
    ACTIONS(103), 1,
      anon_sym_type,
    ACTIONS(105), 1,
      anon_sym_record,
    ACTIONS(107), 1,
      anon_sym_flags,
    ACTIONS(109), 1,
      anon_sym_variant,
    ACTIONS(111), 1,
      anon_sym_enum,
    ACTIONS(113), 1,
      anon_sym_resource,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(93), 1,
      sym_typedef_item,
    STATE(20), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(67), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 14,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_resource_body,
    ACTIONS(147), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_resource_body,
    ACTIONS(155), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(313), 1,
      anon_sym_AT,
    STATE(101), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(315), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(99), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 1,
      anon_sym_use,
    ACTIONS(324), 1,
      anon_sym_world,
    ACTIONS(327), 1,
      anon_sym_interface,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(330), 1,
      anon_sym_AT,
    STATE(102), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(332), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_constructor,
    STATE(152), 1,
      sym_func_item,
    STATE(108), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(343), 1,
      anon_sym_constructor,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_func_item,
    STATE(109), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LT,
    ACTIONS(347), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(343), 1,
      anon_sym_constructor,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_func_item,
    STATE(104), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SLASH,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(343), 1,
      anon_sym_constructor,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_func_item,
    STATE(109), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_id,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_constructor,
    STATE(152), 1,
      sym_func_item,
    STATE(109), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(371), 1,
      anon_sym_AT,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      aux_sym_package_decl_repeat2,
  [2758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_id,
    ACTIONS(377), 1,
      anon_sym_interface,
    ACTIONS(379), 1,
      anon_sym_func,
    STATE(42), 1,
      sym_extern_type,
    STATE(278), 1,
      sym_func_type,
  [2777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_id,
    ACTIONS(377), 1,
      anon_sym_interface,
    ACTIONS(379), 1,
      anon_sym_func,
    STATE(41), 1,
      sym_extern_type,
    STATE(278), 1,
      sym_func_type,
  [2796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(389), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_AT,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_package_decl_repeat2,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_named_type,
    STATE(290), 1,
      sym_named_type_list,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [3009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_named_type,
    STATE(279), 1,
      sym_named_type_list,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [3065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_variant_case,
  [3078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_named_type,
  [3091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_DASH_GT,
    STATE(265), 1,
      sym_result_list,
  [3104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
    STATE(337), 1,
      sym_use_path,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_id,
    STATE(146), 1,
      sym_use_names_item,
    STATE(332), 1,
      sym_use_names_list,
  [3141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_use_names_list_repeat1,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_variant_body_repeat1,
  [3167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(250), 1,
      sym_use_path,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
  [3180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_variant_case,
  [3193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_include_names_list_repeat1,
  [3206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_record_field,
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 2,
      sym_id,
      anon_sym_constructor,
  [3230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_flags_body_repeat1,
  [3243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_flags_body_repeat1,
  [3256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_flags_body_repeat1,
  [3269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_variant_body_repeat1,
  [3282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_variant_case,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_record_body_repeat1,
  [3308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_flags_body_repeat1,
  [3321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_record_body_repeat1,
  [3334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_record_field,
  [3347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_record_body_repeat1,
  [3360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_record_field,
  [3373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_flags_body_repeat1,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_flags_body_repeat1,
  [3399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_variant_body_repeat1,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_flags_body_repeat1,
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_record_body_repeat1,
  [3438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_variant_body_repeat1,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_variant_case,
  [3464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_record_field,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_flags_body_repeat1,
  [3490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_func,
    ACTIONS(535), 1,
      anon_sym_static,
    STATE(307), 1,
      sym_func_type,
  [3503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
    STATE(267), 1,
      sym_use_path,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 2,
      sym_id,
      anon_sym_constructor,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_id,
    STATE(150), 1,
      sym_include_names_item,
    STATE(331), 1,
      sym_include_names_list,
  [3540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_id,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
    STATE(288), 1,
      sym_use_path,
  [3553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_id,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
    STATE(298), 1,
      sym_use_path,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(244), 1,
      sym_use_path,
    STATE(253), 1,
      aux_sym_package_decl_repeat1,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_named_type_list_repeat1,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 2,
      sym_id,
      anon_sym_constructor,
  [3603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_GT,
    STATE(182), 1,
      aux_sym_tuple_list_repeat1,
  [3616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_named_type_list_repeat1,
  [3629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_named_type,
  [3642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_id,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_use_names_item,
  [3655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_use_names_list_repeat1,
  [3668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_named_type_list_repeat1,
  [3681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_flags_body_repeat1,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_id,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_include_names_item,
  [3707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_include_names_list_repeat1,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_GT,
    STATE(193), 1,
      aux_sym_tuple_list_repeat1,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_tuple_list_repeat1,
  [3757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_id,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_include_names_item,
  [3770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_variant_case,
  [3783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_variant_body_repeat1,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_record_field,
  [3809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_include_names_list_repeat1,
  [3822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_id,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_use_names_item,
  [3835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 2,
      sym_id,
      anon_sym_constructor,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_id,
    STATE(146), 1,
      sym_use_names_item,
    STATE(338), 1,
      sym_use_names_list,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_variant_case,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_record_field,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_record_body_repeat1,
  [3898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_use_names_list_repeat1,
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_variant_body,
  [3921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    STATE(252), 1,
      sym_named_type,
  [3931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_id,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [3941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_interface_body,
  [3951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym_param_list,
  [3961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_id,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [3971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      sym_id,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      sym_id,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_GT,
  [4001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      sym_id,
  [4011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_id,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_id,
    STATE(247), 1,
      aux_sym_package_decl_repeat1,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_id,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
  [4065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      sym_id,
  [4075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_param_list,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_id,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
  [4103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_id,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_func,
    STATE(294), 1,
      sym_func_type,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_id,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [4141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_id,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    STATE(282), 1,
      sym_include_names_body,
  [4193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_enum_body,
  [4203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_variant_body,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_func,
    STATE(323), 1,
      sym_func_type,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_enum_body,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_flags_body,
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_record_body,
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_flags_body,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    STATE(218), 1,
      sym_record_field,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_with,
  [4283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_record_body,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_id,
    STATE(256), 1,
      aux_sym_package_decl_repeat1,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    STATE(224), 1,
      sym_variant_case,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(702), 1,
      anon_sym_COLON,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    ACTIONS(706), 1,
      anon_sym_as,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_id,
    STATE(256), 1,
      aux_sym_package_decl_repeat1,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_world_body,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_interface_body,
  [4387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_id,
    STATE(256), 1,
      aux_sym_package_decl_repeat1,
  [4397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_id,
    STATE(232), 1,
      sym_use_names_item,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_id,
    STATE(234), 1,
      sym_include_names_item,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(719), 1,
      anon_sym_COLON,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_id,
  [4450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_GT,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SEMI,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOT,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_valid_semver,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_valid_semver,
  [4499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [4506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_COLON,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_id,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_id,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_id,
  [4534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_id,
  [4541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_id,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_id,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [4562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
  [4569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SEMI,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COLON,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SEMI,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_valid_semver,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SEMI,
  [4604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_valid_semver,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_id,
  [4618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_id,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SEMI,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym_id,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [4660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COLON,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_SEMI,
  [4674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_id,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_SEMI,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_id,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_EQ,
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_id,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [4730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_SEMI,
  [4744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_id,
  [4758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SEMI,
  [4765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [4772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LT,
  [4779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LT,
  [4786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LT,
  [4793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LT,
  [4800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_id,
  [4807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_GT,
  [4814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LT,
  [4821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_GT,
  [4828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [4835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COLON,
  [4842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_id,
  [4849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
  [4856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_id,
  [4863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [4870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SEMI,
  [4877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_GT,
  [4884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_GT,
  [4891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_GT,
  [4898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_id,
  [4905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_id,
  [4912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_id,
  [4919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_id,
  [4926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [4933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [4940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
  [4947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_as,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_id,
  [4961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
  [4968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_DOT,
  [4975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 121,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 239,
  [SMALL_STATE(7)] = 298,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 410,
  [SMALL_STATE(10)] = 466,
  [SMALL_STATE(11)] = 522,
  [SMALL_STATE(12)] = 578,
  [SMALL_STATE(13)] = 634,
  [SMALL_STATE(14)] = 690,
  [SMALL_STATE(15)] = 746,
  [SMALL_STATE(16)] = 802,
  [SMALL_STATE(17)] = 866,
  [SMALL_STATE(18)] = 930,
  [SMALL_STATE(19)] = 994,
  [SMALL_STATE(20)] = 1046,
  [SMALL_STATE(21)] = 1098,
  [SMALL_STATE(22)] = 1150,
  [SMALL_STATE(23)] = 1170,
  [SMALL_STATE(24)] = 1196,
  [SMALL_STATE(25)] = 1216,
  [SMALL_STATE(26)] = 1242,
  [SMALL_STATE(27)] = 1259,
  [SMALL_STATE(28)] = 1276,
  [SMALL_STATE(29)] = 1293,
  [SMALL_STATE(30)] = 1310,
  [SMALL_STATE(31)] = 1327,
  [SMALL_STATE(32)] = 1344,
  [SMALL_STATE(33)] = 1361,
  [SMALL_STATE(34)] = 1378,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1412,
  [SMALL_STATE(37)] = 1429,
  [SMALL_STATE(38)] = 1446,
  [SMALL_STATE(39)] = 1463,
  [SMALL_STATE(40)] = 1480,
  [SMALL_STATE(41)] = 1497,
  [SMALL_STATE(42)] = 1514,
  [SMALL_STATE(43)] = 1531,
  [SMALL_STATE(44)] = 1548,
  [SMALL_STATE(45)] = 1565,
  [SMALL_STATE(46)] = 1582,
  [SMALL_STATE(47)] = 1599,
  [SMALL_STATE(48)] = 1616,
  [SMALL_STATE(49)] = 1633,
  [SMALL_STATE(50)] = 1650,
  [SMALL_STATE(51)] = 1667,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1701,
  [SMALL_STATE(54)] = 1718,
  [SMALL_STATE(55)] = 1735,
  [SMALL_STATE(56)] = 1752,
  [SMALL_STATE(57)] = 1769,
  [SMALL_STATE(58)] = 1786,
  [SMALL_STATE(59)] = 1803,
  [SMALL_STATE(60)] = 1820,
  [SMALL_STATE(61)] = 1837,
  [SMALL_STATE(62)] = 1854,
  [SMALL_STATE(63)] = 1871,
  [SMALL_STATE(64)] = 1888,
  [SMALL_STATE(65)] = 1905,
  [SMALL_STATE(66)] = 1922,
  [SMALL_STATE(67)] = 1939,
  [SMALL_STATE(68)] = 1956,
  [SMALL_STATE(69)] = 1973,
  [SMALL_STATE(70)] = 1990,
  [SMALL_STATE(71)] = 2007,
  [SMALL_STATE(72)] = 2024,
  [SMALL_STATE(73)] = 2041,
  [SMALL_STATE(74)] = 2058,
  [SMALL_STATE(75)] = 2075,
  [SMALL_STATE(76)] = 2092,
  [SMALL_STATE(77)] = 2109,
  [SMALL_STATE(78)] = 2126,
  [SMALL_STATE(79)] = 2143,
  [SMALL_STATE(80)] = 2160,
  [SMALL_STATE(81)] = 2177,
  [SMALL_STATE(82)] = 2194,
  [SMALL_STATE(83)] = 2211,
  [SMALL_STATE(84)] = 2228,
  [SMALL_STATE(85)] = 2245,
  [SMALL_STATE(86)] = 2262,
  [SMALL_STATE(87)] = 2279,
  [SMALL_STATE(88)] = 2296,
  [SMALL_STATE(89)] = 2313,
  [SMALL_STATE(90)] = 2330,
  [SMALL_STATE(91)] = 2347,
  [SMALL_STATE(92)] = 2364,
  [SMALL_STATE(93)] = 2381,
  [SMALL_STATE(94)] = 2398,
  [SMALL_STATE(95)] = 2415,
  [SMALL_STATE(96)] = 2432,
  [SMALL_STATE(97)] = 2454,
  [SMALL_STATE(98)] = 2476,
  [SMALL_STATE(99)] = 2498,
  [SMALL_STATE(100)] = 2520,
  [SMALL_STATE(101)] = 2542,
  [SMALL_STATE(102)] = 2561,
  [SMALL_STATE(103)] = 2578,
  [SMALL_STATE(104)] = 2598,
  [SMALL_STATE(105)] = 2618,
  [SMALL_STATE(106)] = 2632,
  [SMALL_STATE(107)] = 2652,
  [SMALL_STATE(108)] = 2666,
  [SMALL_STATE(109)] = 2686,
  [SMALL_STATE(110)] = 2706,
  [SMALL_STATE(111)] = 2717,
  [SMALL_STATE(112)] = 2728,
  [SMALL_STATE(113)] = 2739,
  [SMALL_STATE(114)] = 2758,
  [SMALL_STATE(115)] = 2777,
  [SMALL_STATE(116)] = 2796,
  [SMALL_STATE(117)] = 2807,
  [SMALL_STATE(118)] = 2818,
  [SMALL_STATE(119)] = 2829,
  [SMALL_STATE(120)] = 2840,
  [SMALL_STATE(121)] = 2851,
  [SMALL_STATE(122)] = 2864,
  [SMALL_STATE(123)] = 2875,
  [SMALL_STATE(124)] = 2886,
  [SMALL_STATE(125)] = 2897,
  [SMALL_STATE(126)] = 2907,
  [SMALL_STATE(127)] = 2917,
  [SMALL_STATE(128)] = 2927,
  [SMALL_STATE(129)] = 2943,
  [SMALL_STATE(130)] = 2953,
  [SMALL_STATE(131)] = 2963,
  [SMALL_STATE(132)] = 2973,
  [SMALL_STATE(133)] = 2983,
  [SMALL_STATE(134)] = 2999,
  [SMALL_STATE(135)] = 3009,
  [SMALL_STATE(136)] = 3025,
  [SMALL_STATE(137)] = 3035,
  [SMALL_STATE(138)] = 3045,
  [SMALL_STATE(139)] = 3055,
  [SMALL_STATE(140)] = 3065,
  [SMALL_STATE(141)] = 3078,
  [SMALL_STATE(142)] = 3091,
  [SMALL_STATE(143)] = 3104,
  [SMALL_STATE(144)] = 3117,
  [SMALL_STATE(145)] = 3128,
  [SMALL_STATE(146)] = 3141,
  [SMALL_STATE(147)] = 3154,
  [SMALL_STATE(148)] = 3167,
  [SMALL_STATE(149)] = 3180,
  [SMALL_STATE(150)] = 3193,
  [SMALL_STATE(151)] = 3206,
  [SMALL_STATE(152)] = 3219,
  [SMALL_STATE(153)] = 3230,
  [SMALL_STATE(154)] = 3243,
  [SMALL_STATE(155)] = 3256,
  [SMALL_STATE(156)] = 3269,
  [SMALL_STATE(157)] = 3282,
  [SMALL_STATE(158)] = 3295,
  [SMALL_STATE(159)] = 3308,
  [SMALL_STATE(160)] = 3321,
  [SMALL_STATE(161)] = 3334,
  [SMALL_STATE(162)] = 3347,
  [SMALL_STATE(163)] = 3360,
  [SMALL_STATE(164)] = 3373,
  [SMALL_STATE(165)] = 3386,
  [SMALL_STATE(166)] = 3399,
  [SMALL_STATE(167)] = 3412,
  [SMALL_STATE(168)] = 3425,
  [SMALL_STATE(169)] = 3438,
  [SMALL_STATE(170)] = 3451,
  [SMALL_STATE(171)] = 3464,
  [SMALL_STATE(172)] = 3477,
  [SMALL_STATE(173)] = 3490,
  [SMALL_STATE(174)] = 3503,
  [SMALL_STATE(175)] = 3516,
  [SMALL_STATE(176)] = 3527,
  [SMALL_STATE(177)] = 3540,
  [SMALL_STATE(178)] = 3553,
  [SMALL_STATE(179)] = 3566,
  [SMALL_STATE(180)] = 3579,
  [SMALL_STATE(181)] = 3592,
  [SMALL_STATE(182)] = 3603,
  [SMALL_STATE(183)] = 3616,
  [SMALL_STATE(184)] = 3629,
  [SMALL_STATE(185)] = 3642,
  [SMALL_STATE(186)] = 3655,
  [SMALL_STATE(187)] = 3668,
  [SMALL_STATE(188)] = 3681,
  [SMALL_STATE(189)] = 3694,
  [SMALL_STATE(190)] = 3707,
  [SMALL_STATE(191)] = 3720,
  [SMALL_STATE(192)] = 3731,
  [SMALL_STATE(193)] = 3744,
  [SMALL_STATE(194)] = 3757,
  [SMALL_STATE(195)] = 3770,
  [SMALL_STATE(196)] = 3783,
  [SMALL_STATE(197)] = 3796,
  [SMALL_STATE(198)] = 3809,
  [SMALL_STATE(199)] = 3822,
  [SMALL_STATE(200)] = 3835,
  [SMALL_STATE(201)] = 3846,
  [SMALL_STATE(202)] = 3859,
  [SMALL_STATE(203)] = 3872,
  [SMALL_STATE(204)] = 3885,
  [SMALL_STATE(205)] = 3898,
  [SMALL_STATE(206)] = 3911,
  [SMALL_STATE(207)] = 3921,
  [SMALL_STATE(208)] = 3931,
  [SMALL_STATE(209)] = 3941,
  [SMALL_STATE(210)] = 3951,
  [SMALL_STATE(211)] = 3961,
  [SMALL_STATE(212)] = 3971,
  [SMALL_STATE(213)] = 3981,
  [SMALL_STATE(214)] = 3991,
  [SMALL_STATE(215)] = 4001,
  [SMALL_STATE(216)] = 4011,
  [SMALL_STATE(217)] = 4021,
  [SMALL_STATE(218)] = 4029,
  [SMALL_STATE(219)] = 4037,
  [SMALL_STATE(220)] = 4045,
  [SMALL_STATE(221)] = 4055,
  [SMALL_STATE(222)] = 4065,
  [SMALL_STATE(223)] = 4075,
  [SMALL_STATE(224)] = 4085,
  [SMALL_STATE(225)] = 4093,
  [SMALL_STATE(226)] = 4103,
  [SMALL_STATE(227)] = 4113,
  [SMALL_STATE(228)] = 4123,
  [SMALL_STATE(229)] = 4131,
  [SMALL_STATE(230)] = 4141,
  [SMALL_STATE(231)] = 4151,
  [SMALL_STATE(232)] = 4159,
  [SMALL_STATE(233)] = 4167,
  [SMALL_STATE(234)] = 4175,
  [SMALL_STATE(235)] = 4183,
  [SMALL_STATE(236)] = 4193,
  [SMALL_STATE(237)] = 4203,
  [SMALL_STATE(238)] = 4213,
  [SMALL_STATE(239)] = 4223,
  [SMALL_STATE(240)] = 4233,
  [SMALL_STATE(241)] = 4243,
  [SMALL_STATE(242)] = 4253,
  [SMALL_STATE(243)] = 4263,
  [SMALL_STATE(244)] = 4273,
  [SMALL_STATE(245)] = 4283,
  [SMALL_STATE(246)] = 4293,
  [SMALL_STATE(247)] = 4301,
  [SMALL_STATE(248)] = 4311,
  [SMALL_STATE(249)] = 4321,
  [SMALL_STATE(250)] = 4331,
  [SMALL_STATE(251)] = 4341,
  [SMALL_STATE(252)] = 4349,
  [SMALL_STATE(253)] = 4357,
  [SMALL_STATE(254)] = 4367,
  [SMALL_STATE(255)] = 4377,
  [SMALL_STATE(256)] = 4387,
  [SMALL_STATE(257)] = 4397,
  [SMALL_STATE(258)] = 4407,
  [SMALL_STATE(259)] = 4417,
  [SMALL_STATE(260)] = 4425,
  [SMALL_STATE(261)] = 4433,
  [SMALL_STATE(262)] = 4443,
  [SMALL_STATE(263)] = 4450,
  [SMALL_STATE(264)] = 4457,
  [SMALL_STATE(265)] = 4464,
  [SMALL_STATE(266)] = 4471,
  [SMALL_STATE(267)] = 4478,
  [SMALL_STATE(268)] = 4485,
  [SMALL_STATE(269)] = 4492,
  [SMALL_STATE(270)] = 4499,
  [SMALL_STATE(271)] = 4506,
  [SMALL_STATE(272)] = 4513,
  [SMALL_STATE(273)] = 4520,
  [SMALL_STATE(274)] = 4527,
  [SMALL_STATE(275)] = 4534,
  [SMALL_STATE(276)] = 4541,
  [SMALL_STATE(277)] = 4548,
  [SMALL_STATE(278)] = 4555,
  [SMALL_STATE(279)] = 4562,
  [SMALL_STATE(280)] = 4569,
  [SMALL_STATE(281)] = 4576,
  [SMALL_STATE(282)] = 4583,
  [SMALL_STATE(283)] = 4590,
  [SMALL_STATE(284)] = 4597,
  [SMALL_STATE(285)] = 4604,
  [SMALL_STATE(286)] = 4611,
  [SMALL_STATE(287)] = 4618,
  [SMALL_STATE(288)] = 4625,
  [SMALL_STATE(289)] = 4632,
  [SMALL_STATE(290)] = 4639,
  [SMALL_STATE(291)] = 4646,
  [SMALL_STATE(292)] = 4653,
  [SMALL_STATE(293)] = 4660,
  [SMALL_STATE(294)] = 4667,
  [SMALL_STATE(295)] = 4674,
  [SMALL_STATE(296)] = 4681,
  [SMALL_STATE(297)] = 4688,
  [SMALL_STATE(298)] = 4695,
  [SMALL_STATE(299)] = 4702,
  [SMALL_STATE(300)] = 4709,
  [SMALL_STATE(301)] = 4716,
  [SMALL_STATE(302)] = 4723,
  [SMALL_STATE(303)] = 4730,
  [SMALL_STATE(304)] = 4737,
  [SMALL_STATE(305)] = 4744,
  [SMALL_STATE(306)] = 4751,
  [SMALL_STATE(307)] = 4758,
  [SMALL_STATE(308)] = 4765,
  [SMALL_STATE(309)] = 4772,
  [SMALL_STATE(310)] = 4779,
  [SMALL_STATE(311)] = 4786,
  [SMALL_STATE(312)] = 4793,
  [SMALL_STATE(313)] = 4800,
  [SMALL_STATE(314)] = 4807,
  [SMALL_STATE(315)] = 4814,
  [SMALL_STATE(316)] = 4821,
  [SMALL_STATE(317)] = 4828,
  [SMALL_STATE(318)] = 4835,
  [SMALL_STATE(319)] = 4842,
  [SMALL_STATE(320)] = 4849,
  [SMALL_STATE(321)] = 4856,
  [SMALL_STATE(322)] = 4863,
  [SMALL_STATE(323)] = 4870,
  [SMALL_STATE(324)] = 4877,
  [SMALL_STATE(325)] = 4884,
  [SMALL_STATE(326)] = 4891,
  [SMALL_STATE(327)] = 4898,
  [SMALL_STATE(328)] = 4905,
  [SMALL_STATE(329)] = 4912,
  [SMALL_STATE(330)] = 4919,
  [SMALL_STATE(331)] = 4926,
  [SMALL_STATE(332)] = 4933,
  [SMALL_STATE(333)] = 4940,
  [SMALL_STATE(334)] = 4947,
  [SMALL_STATE(335)] = 4954,
  [SMALL_STATE(336)] = 4961,
  [SMALL_STATE(337)] = 4968,
  [SMALL_STATE(338)] = 4975,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3, 0, 14),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 2, 0, 12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 2, 0, 12),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 4, 0, 33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 5, 0, 43),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 5, 0, 21),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_type, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 5, 0, 22),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 3, 0, 23),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 3, 0, 24),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 3, 0, 25),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 26),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 4, 0, 12),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 4, 0, 12),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 4, 0, 32),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, 0, 16),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, 0, 12),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_items, 3, 0, 12),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 4, 0, 34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_items, 3, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4, 0, 35),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_items, 3, 0, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, 0, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, 0, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, 0, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, 0, 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_item, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_item, 7, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 15),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 5, 0, 42),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 5, 0, 41),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 5, 0, 40),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 5, 0, 40),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef_item, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 26),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_item, 4, 0, 17),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_item, 4, 0, 17),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 3, 0, 25),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 5, 0, 43),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 5, 0, 42),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 3, 0, 24),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 3, 0, 23),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 5, 0, 22),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 5, 0, 41),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 4, 0, 32),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 4, 0, 33),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_item, 7, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_items, 3, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_items, 3, 0, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 4, 0, 34),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_items, 3, 0, 12),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, 0, 12),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, 0, 10),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, 0, 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, 0, 9),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, 0, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, 0, 8),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 4, 0, 35),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, 0, 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 3, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(286),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat2, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_body_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handle, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 6, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__owned_handle, 4, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__borrow_handle, 4, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 7, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 5, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 6, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_item, 3, 0, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_item, 3, 0, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 3, 0, 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 5, 0, 11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 3, 0, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 5, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 2, 0, 18),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 1, 0, 19),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 1, 0, 20),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 5, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 5, 0, 0),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2, 0, 0),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, 0, 19),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, 0, 28),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, 0, 20),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, 0, 30),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 1, 0, 17),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 3, 0, 30),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_body_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_body_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, 0, 39),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, 0, 39), SHIFT_REPEAT(258),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 3, 0, 28),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 3, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, 0, 37),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, 0, 37), SHIFT_REPEAT(257),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, 0, 31),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, 0, 36),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_item, 3, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, 0, 38),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 4, 0, 31),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 3, 0, 31),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 3, 0, 27),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 4, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_body, 3, 0, 29),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 3, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [787] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
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

TS_PUBLIC const TSLanguage *tree_sitter_wit(void) {
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
