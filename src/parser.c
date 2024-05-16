#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  aux_sym_clear_statement_token1 = 2,
  aux_sym_write_statement_token1 = 3,
  aux_sym_add_statement_token1 = 4,
  aux_sym_add_statement_token2 = 5,
  aux_sym_assert_statement_token1 = 6,
  aux_sym_assert_statement_token2 = 7,
  aux_sym_assert_statement_token3 = 8,
  aux_sym_assert_statement_token4 = 9,
  aux_sym_data_statement_token1 = 10,
  aux_sym_class_definition_token1 = 11,
  aux_sym_class_definition_token2 = 12,
  aux_sym_class_definition_token3 = 13,
  aux_sym_class_definition_token4 = 14,
  aux_sym_class_definition_token5 = 15,
  aux_sym_class_definition_token6 = 16,
  sym_class_name = 17,
  aux_sym_type_declaration_token1 = 18,
  aux_sym_type_declaration_token2 = 19,
  aux_sym_abap_type_token1 = 20,
  aux_sym_abap_type_token2 = 21,
  aux_sym_abap_type_token3 = 22,
  aux_sym_abap_type_token4 = 23,
  aux_sym_abap_type_token5 = 24,
  aux_sym_abap_type_token6 = 25,
  aux_sym_abap_type_token7 = 26,
  aux_sym_abap_type_token8 = 27,
  aux_sym_abap_type_token9 = 28,
  aux_sym_abap_type_token10 = 29,
  aux_sym_abap_type_token11 = 30,
  aux_sym_abap_type_token12 = 31,
  aux_sym_abap_type_token13 = 32,
  aux_sym_abap_type_token14 = 33,
  aux_sym_abap_type_token15 = 34,
  aux_sym_abap_type_token16 = 35,
  anon_sym_EQ = 36,
  anon_sym_EQ2 = 37,
  anon_sym_LT_GT = 38,
  anon_sym_NE = 39,
  anon_sym_GT = 40,
  anon_sym_GT2 = 41,
  anon_sym_LT = 42,
  anon_sym_LT2 = 43,
  anon_sym_GT_EQ = 44,
  anon_sym_GE = 45,
  anon_sym_LT_EQ = 46,
  anon_sym_LE = 47,
  sym_identifier = 48,
  anon_sym_PLUS = 49,
  anon_sym_DASH = 50,
  anon_sym_STAR = 51,
  anon_sym_SQUOTE = 52,
  aux_sym_character_literal_token1 = 53,
  sym_numeric_literal = 54,
  sym_source_file = 55,
  sym__statement = 56,
  sym__compound_statement = 57,
  sym_clear_statement = 58,
  sym_write_statement = 59,
  sym_add_statement = 60,
  sym_assert_statement = 61,
  sym_checkpoint_group = 62,
  sym_data_statement = 63,
  sym_class_definition = 64,
  sym_class_components = 65,
  sym_variable = 66,
  sym_type_declaration = 67,
  sym_abap_type = 68,
  sym__logical_expression = 69,
  sym_comparison_expression = 70,
  sym__general_expression_position = 71,
  sym__data_object = 72,
  sym__literal = 73,
  sym_assignment = 74,
  sym__expression = 75,
  sym_binary_expression = 76,
  sym_character_literal = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_character_literal_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_clear_statement_token1] = "clear_statement_token1",
  [aux_sym_write_statement_token1] = "write_statement_token1",
  [aux_sym_add_statement_token1] = "add_statement_token1",
  [aux_sym_add_statement_token2] = "add_statement_token2",
  [aux_sym_assert_statement_token1] = "assert_statement_token1",
  [aux_sym_assert_statement_token2] = "assert_statement_token2",
  [aux_sym_assert_statement_token3] = "assert_statement_token3",
  [aux_sym_assert_statement_token4] = "assert_statement_token4",
  [aux_sym_data_statement_token1] = "data_statement_token1",
  [aux_sym_class_definition_token1] = "class_definition_token1",
  [aux_sym_class_definition_token2] = "class_definition_token2",
  [aux_sym_class_definition_token3] = "class_definition_token3",
  [aux_sym_class_definition_token4] = "class_definition_token4",
  [aux_sym_class_definition_token5] = "class_definition_token5",
  [aux_sym_class_definition_token6] = "class_definition_token6",
  [sym_class_name] = "class_name",
  [aux_sym_type_declaration_token1] = "type_declaration_token1",
  [aux_sym_type_declaration_token2] = "type_declaration_token2",
  [aux_sym_abap_type_token1] = "abap_type_token1",
  [aux_sym_abap_type_token2] = "abap_type_token2",
  [aux_sym_abap_type_token3] = "abap_type_token3",
  [aux_sym_abap_type_token4] = "abap_type_token4",
  [aux_sym_abap_type_token5] = "abap_type_token5",
  [aux_sym_abap_type_token6] = "abap_type_token6",
  [aux_sym_abap_type_token7] = "abap_type_token7",
  [aux_sym_abap_type_token8] = "abap_type_token8",
  [aux_sym_abap_type_token9] = "abap_type_token9",
  [aux_sym_abap_type_token10] = "abap_type_token10",
  [aux_sym_abap_type_token11] = "abap_type_token11",
  [aux_sym_abap_type_token12] = "abap_type_token12",
  [aux_sym_abap_type_token13] = "abap_type_token13",
  [aux_sym_abap_type_token14] = "abap_type_token14",
  [aux_sym_abap_type_token15] = "abap_type_token15",
  [aux_sym_abap_type_token16] = "abap_type_token16",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = "EQ",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_NE] = "NE",
  [anon_sym_GT] = ">",
  [anon_sym_GT2] = "GT",
  [anon_sym_LT] = "<",
  [anon_sym_LT2] = "LT",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GE] = "GE",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LE] = "LE",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_literal_token1] = "character_literal_token1",
  [sym_numeric_literal] = "numeric_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_clear_statement] = "clear_statement",
  [sym_write_statement] = "write_statement",
  [sym_add_statement] = "add_statement",
  [sym_assert_statement] = "assert_statement",
  [sym_checkpoint_group] = "checkpoint_group",
  [sym_data_statement] = "data_statement",
  [sym_class_definition] = "class_definition",
  [sym_class_components] = "class_components",
  [sym_variable] = "variable",
  [sym_type_declaration] = "type_declaration",
  [sym_abap_type] = "abap_type",
  [sym__logical_expression] = "_logical_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym__general_expression_position] = "_general_expression_position",
  [sym__data_object] = "_data_object",
  [sym__literal] = "_literal",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_character_literal] = "character_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_clear_statement_token1] = aux_sym_clear_statement_token1,
  [aux_sym_write_statement_token1] = aux_sym_write_statement_token1,
  [aux_sym_add_statement_token1] = aux_sym_add_statement_token1,
  [aux_sym_add_statement_token2] = aux_sym_add_statement_token2,
  [aux_sym_assert_statement_token1] = aux_sym_assert_statement_token1,
  [aux_sym_assert_statement_token2] = aux_sym_assert_statement_token2,
  [aux_sym_assert_statement_token3] = aux_sym_assert_statement_token3,
  [aux_sym_assert_statement_token4] = aux_sym_assert_statement_token4,
  [aux_sym_data_statement_token1] = aux_sym_data_statement_token1,
  [aux_sym_class_definition_token1] = aux_sym_class_definition_token1,
  [aux_sym_class_definition_token2] = aux_sym_class_definition_token2,
  [aux_sym_class_definition_token3] = aux_sym_class_definition_token3,
  [aux_sym_class_definition_token4] = aux_sym_class_definition_token4,
  [aux_sym_class_definition_token5] = aux_sym_class_definition_token5,
  [aux_sym_class_definition_token6] = aux_sym_class_definition_token6,
  [sym_class_name] = sym_class_name,
  [aux_sym_type_declaration_token1] = aux_sym_type_declaration_token1,
  [aux_sym_type_declaration_token2] = aux_sym_type_declaration_token2,
  [aux_sym_abap_type_token1] = aux_sym_abap_type_token1,
  [aux_sym_abap_type_token2] = aux_sym_abap_type_token2,
  [aux_sym_abap_type_token3] = aux_sym_abap_type_token3,
  [aux_sym_abap_type_token4] = aux_sym_abap_type_token4,
  [aux_sym_abap_type_token5] = aux_sym_abap_type_token5,
  [aux_sym_abap_type_token6] = aux_sym_abap_type_token6,
  [aux_sym_abap_type_token7] = aux_sym_abap_type_token7,
  [aux_sym_abap_type_token8] = aux_sym_abap_type_token8,
  [aux_sym_abap_type_token9] = aux_sym_abap_type_token9,
  [aux_sym_abap_type_token10] = aux_sym_abap_type_token10,
  [aux_sym_abap_type_token11] = aux_sym_abap_type_token11,
  [aux_sym_abap_type_token12] = aux_sym_abap_type_token12,
  [aux_sym_abap_type_token13] = aux_sym_abap_type_token13,
  [aux_sym_abap_type_token14] = aux_sym_abap_type_token14,
  [aux_sym_abap_type_token15] = aux_sym_abap_type_token15,
  [aux_sym_abap_type_token16] = aux_sym_abap_type_token16,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_NE] = anon_sym_NE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT2] = anon_sym_GT2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT2] = anon_sym_LT2,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GE] = anon_sym_GE,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LE] = anon_sym_LE,
  [sym_identifier] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_character_literal_token1] = aux_sym_character_literal_token1,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_clear_statement] = sym_clear_statement,
  [sym_write_statement] = sym_write_statement,
  [sym_add_statement] = sym_add_statement,
  [sym_assert_statement] = sym_assert_statement,
  [sym_checkpoint_group] = sym_checkpoint_group,
  [sym_data_statement] = sym_data_statement,
  [sym_class_definition] = sym_class_definition,
  [sym_class_components] = sym_class_components,
  [sym_variable] = sym_variable,
  [sym_type_declaration] = sym_type_declaration,
  [sym_abap_type] = sym_abap_type,
  [sym__logical_expression] = sym__logical_expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym__general_expression_position] = sym__general_expression_position,
  [sym__data_object] = sym__data_object,
  [sym__literal] = sym__literal,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_character_literal] = sym_character_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_character_literal_repeat1] = aux_sym_character_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_clear_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_write_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token6] = {
    .visible = false,
    .named = false,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_type_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abap_type_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_clear_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_write_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_add_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_checkpoint_group] = {
    .visible = true,
    .named = true,
  },
  [sym_data_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_components] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_abap_type] = {
    .visible = true,
    .named = true,
  },
  [sym__logical_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__general_expression_position] = {
    .visible = false,
    .named = true,
  },
  [sym__data_object] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_dobj1 = 1,
  field_dobj2 = 2,
  field_left = 3,
  field_name = 4,
  field_operand1 = 5,
  field_operand2 = 6,
  field_operator = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dobj1] = "dobj1",
  [field_dobj2] = "dobj2",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand1] = "operand1",
  [field_operand2] = "operand2",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_dobj1, 1},
    {field_dobj2, 3},
  [7] =
    {field_operand1, 0},
    {field_operand2, 2},
  [9] =
    {field_name, 1},
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\'', 244,
        '*', 243,
        '+', 241,
        '-', 242,
        '.', 132,
        '<', 214,
        '=', 208,
        '>', 212,
        'E', 15,
        'G', 12,
        'L', 13,
        'e', 75,
        'l', 55,
        'A', 35,
        'a', 35,
        'B', 190,
        'b', 190,
        'C', 187,
        'c', 187,
        'D', 203,
        'd', 203,
        'F', 200,
        'f', 200,
        'I', 193,
        'i', 193,
        'N', 188,
        'n', 188,
        'P', 197,
        'p', 197,
        'S', 192,
        's', 192,
        'T', 206,
        't', 206,
        'U', 113,
        'u', 113,
        'W', 98,
        'w', 98,
        'X', 201,
        'x', 201,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(245);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 243,
        '+', 241,
        '-', 242,
        '.', 132,
        '<', 214,
        '=', 208,
        '>', 212,
        'E', 15,
        'G', 12,
        'L', 13,
        'N', 14,
        'e', 75,
        'l', 55,
        'C', 93,
        'c', 93,
        'D', 17,
        'd', 17,
        'P', 96,
        'p', 96,
        'S', 125,
        's', 125,
        'T', 86,
        't', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(199);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(217);
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == 'Q') ADVANCE(209);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        'B', 190,
        'b', 190,
        'C', 186,
        'c', 186,
        'D', 204,
        'd', 204,
        'F', 200,
        'f', 200,
        'I', 194,
        'i', 194,
        'N', 188,
        'n', 188,
        'P', 196,
        'p', 196,
        'S', 191,
        's', 191,
        'T', 205,
        't', 205,
        'U', 113,
        'u', 113,
        'X', 201,
        'x', 201,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 53:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 103:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 110:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 111:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 126:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 127:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 128:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        'A', 224,
        'a', 224,
        'C', 230,
        'c', 230,
        'D', 220,
        'd', 220,
        'W', 231,
        'w', 231,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_clear_statement_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_clear_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_write_statement_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_write_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_add_statement_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_add_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_add_statement_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_assert_statement_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_assert_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_assert_statement_token2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_assert_statement_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_assert_statement_token3);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_assert_statement_token4);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_data_statement_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_data_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_class_definition_token3);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_class_definition_token4);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_class_definition_token5);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_class_definition_token6);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class_name);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_type_declaration_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_type_declaration_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_abap_type_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_abap_type_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_abap_type_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_abap_type_token3);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_abap_type_token4);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_abap_type_token5);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_abap_type_token5);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_abap_type_token6);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_abap_type_token6);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_abap_type_token7);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_abap_type_token8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_abap_type_token8);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_abap_type_token9);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_abap_type_token10);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_abap_type_token11);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_abap_type_token12);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_abap_type_token13);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_abap_type_token14);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_abap_type_token14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_abap_type_token15);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_abap_type_token15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_abap_type_token16);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_NE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_GT2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(210);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(244);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 130},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 130},
  [5] = {.lex_state = 130},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 130},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 130},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 128},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_clear_statement_token1] = ACTIONS(1),
    [aux_sym_write_statement_token1] = ACTIONS(1),
    [aux_sym_add_statement_token1] = ACTIONS(1),
    [aux_sym_add_statement_token2] = ACTIONS(1),
    [aux_sym_assert_statement_token1] = ACTIONS(1),
    [aux_sym_assert_statement_token2] = ACTIONS(1),
    [aux_sym_assert_statement_token3] = ACTIONS(1),
    [aux_sym_assert_statement_token4] = ACTIONS(1),
    [aux_sym_data_statement_token1] = ACTIONS(1),
    [aux_sym_class_definition_token1] = ACTIONS(1),
    [aux_sym_class_definition_token3] = ACTIONS(1),
    [aux_sym_class_definition_token4] = ACTIONS(1),
    [aux_sym_class_definition_token5] = ACTIONS(1),
    [aux_sym_class_definition_token6] = ACTIONS(1),
    [aux_sym_type_declaration_token1] = ACTIONS(1),
    [aux_sym_type_declaration_token2] = ACTIONS(1),
    [aux_sym_abap_type_token1] = ACTIONS(1),
    [aux_sym_abap_type_token2] = ACTIONS(1),
    [aux_sym_abap_type_token3] = ACTIONS(1),
    [aux_sym_abap_type_token4] = ACTIONS(1),
    [aux_sym_abap_type_token5] = ACTIONS(1),
    [aux_sym_abap_type_token6] = ACTIONS(1),
    [aux_sym_abap_type_token7] = ACTIONS(1),
    [aux_sym_abap_type_token8] = ACTIONS(1),
    [aux_sym_abap_type_token9] = ACTIONS(1),
    [aux_sym_abap_type_token10] = ACTIONS(1),
    [aux_sym_abap_type_token11] = ACTIONS(1),
    [aux_sym_abap_type_token12] = ACTIONS(1),
    [aux_sym_abap_type_token13] = ACTIONS(1),
    [aux_sym_abap_type_token14] = ACTIONS(1),
    [aux_sym_abap_type_token15] = ACTIONS(1),
    [aux_sym_abap_type_token16] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GE] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__statement] = STATE(4),
    [sym__compound_statement] = STATE(4),
    [sym_clear_statement] = STATE(54),
    [sym_write_statement] = STATE(54),
    [sym_add_statement] = STATE(54),
    [sym_assert_statement] = STATE(54),
    [sym_data_statement] = STATE(54),
    [sym_class_definition] = STATE(4),
    [sym_assignment] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_clear_statement_token1] = ACTIONS(5),
    [aux_sym_write_statement_token1] = ACTIONS(7),
    [aux_sym_add_statement_token1] = ACTIONS(9),
    [aux_sym_assert_statement_token1] = ACTIONS(11),
    [aux_sym_data_statement_token1] = ACTIONS(13),
    [aux_sym_class_definition_token1] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 18,
      anon_sym_DOT,
      aux_sym_assert_statement_token4,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
      anon_sym_EQ,
      anon_sym_EQ2,
      anon_sym_LT_GT,
      anon_sym_NE,
      anon_sym_GT2,
      anon_sym_LT2,
      anon_sym_GT_EQ,
      anon_sym_GE,
      anon_sym_LT_EQ,
      anon_sym_LE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [25] = 2,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(23), 18,
      anon_sym_DOT,
      aux_sym_assert_statement_token4,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
      anon_sym_EQ,
      anon_sym_EQ2,
      anon_sym_LT_GT,
      anon_sym_NE,
      anon_sym_GT2,
      anon_sym_LT2,
      anon_sym_GT_EQ,
      anon_sym_GE,
      anon_sym_LT_EQ,
      anon_sym_LE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [50] = 10,
    ACTIONS(5), 1,
      aux_sym_clear_statement_token1,
    ACTIONS(7), 1,
      aux_sym_write_statement_token1,
    ACTIONS(9), 1,
      aux_sym_add_statement_token1,
    ACTIONS(11), 1,
      aux_sym_assert_statement_token1,
    ACTIONS(13), 1,
      aux_sym_data_statement_token1,
    ACTIONS(15), 1,
      aux_sym_class_definition_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym__statement,
      sym__compound_statement,
      sym_class_definition,
      aux_sym_source_file_repeat1,
    STATE(54), 6,
      sym_clear_statement,
      sym_write_statement,
      sym_add_statement,
      sym_assert_statement,
      sym_data_statement,
      sym_assignment,
  [89] = 10,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_clear_statement_token1,
    ACTIONS(34), 1,
      aux_sym_write_statement_token1,
    ACTIONS(37), 1,
      aux_sym_add_statement_token1,
    ACTIONS(40), 1,
      aux_sym_assert_statement_token1,
    ACTIONS(43), 1,
      aux_sym_data_statement_token1,
    ACTIONS(46), 1,
      aux_sym_class_definition_token1,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(5), 4,
      sym__statement,
      sym__compound_statement,
      sym_class_definition,
      aux_sym_source_file_repeat1,
    STATE(54), 6,
      sym_clear_statement,
      sym_write_statement,
      sym_add_statement,
      sym_assert_statement,
      sym_data_statement,
      sym_assignment,
  [128] = 3,
    STATE(28), 1,
      sym_abap_type,
    ACTIONS(54), 4,
      aux_sym_abap_type_token5,
      aux_sym_abap_type_token6,
      aux_sym_abap_type_token12,
      aux_sym_abap_type_token14,
    ACTIONS(52), 12,
      aux_sym_abap_type_token1,
      aux_sym_abap_type_token2,
      aux_sym_abap_type_token3,
      aux_sym_abap_type_token4,
      aux_sym_abap_type_token7,
      aux_sym_abap_type_token8,
      aux_sym_abap_type_token9,
      aux_sym_abap_type_token10,
      aux_sym_abap_type_token11,
      aux_sym_abap_type_token13,
      aux_sym_abap_type_token15,
      aux_sym_abap_type_token16,
  [152] = 2,
    ACTIONS(58), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(56), 10,
      anon_sym_EQ,
      anon_sym_EQ2,
      anon_sym_LT_GT,
      anon_sym_NE,
      anon_sym_GT2,
      anon_sym_LT2,
      anon_sym_GT_EQ,
      anon_sym_GE,
      anon_sym_LT_EQ,
      anon_sym_LE,
  [169] = 6,
    ACTIONS(60), 1,
      aux_sym_assert_statement_token2,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_numeric_literal,
    STATE(52), 2,
      sym__logical_expression,
      sym_comparison_expression,
    STATE(7), 4,
      sym__general_expression_position,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [192] = 4,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 2,
      sym_identifier,
      sym_numeric_literal,
    STATE(51), 2,
      sym__logical_expression,
      sym_comparison_expression,
    STATE(7), 4,
      sym__general_expression_position,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [210] = 4,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 2,
      sym_identifier,
      sym_numeric_literal,
    STATE(50), 2,
      sym__logical_expression,
      sym_comparison_expression,
    STATE(7), 4,
      sym__general_expression_position,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [228] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 7,
      aux_sym_clear_statement_token1,
      aux_sym_write_statement_token1,
      aux_sym_add_statement_token1,
      aux_sym_assert_statement_token1,
      aux_sym_data_statement_token1,
      aux_sym_class_definition_token1,
      sym_identifier,
  [241] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 7,
      aux_sym_clear_statement_token1,
      aux_sym_write_statement_token1,
      aux_sym_add_statement_token1,
      aux_sym_assert_statement_token1,
      aux_sym_data_statement_token1,
      aux_sym_class_definition_token1,
      sym_identifier,
  [254] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 7,
      aux_sym_clear_statement_token1,
      aux_sym_write_statement_token1,
      aux_sym_add_statement_token1,
      aux_sym_assert_statement_token1,
      aux_sym_data_statement_token1,
      aux_sym_class_definition_token1,
      sym_identifier,
  [267] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 7,
      aux_sym_clear_statement_token1,
      aux_sym_write_statement_token1,
      aux_sym_add_statement_token1,
      aux_sym_assert_statement_token1,
      aux_sym_data_statement_token1,
      aux_sym_class_definition_token1,
      sym_identifier,
  [280] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 7,
      aux_sym_clear_statement_token1,
      aux_sym_write_statement_token1,
      aux_sym_add_statement_token1,
      aux_sym_assert_statement_token1,
      aux_sym_data_statement_token1,
      aux_sym_class_definition_token1,
      sym_identifier,
  [293] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 2,
      sym_identifier,
      sym_numeric_literal,
    STATE(58), 4,
      sym__general_expression_position,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [307] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 2,
      sym_identifier,
      sym_numeric_literal,
    STATE(61), 4,
      sym__general_expression_position,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [321] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 2,
      sym_identifier,
      sym_numeric_literal,
    STATE(28), 3,
      sym__data_object,
      sym__literal,
      sym_character_literal,
  [334] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(26), 3,
      sym__expression,
      sym_binary_expression,
      sym_character_literal,
  [346] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(25), 3,
      sym__expression,
      sym_binary_expression,
      sym_character_literal,
  [358] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(24), 3,
      sym__expression,
      sym_binary_expression,
      sym_character_literal,
  [370] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(23), 3,
      sym__expression,
      sym_binary_expression,
      sym_character_literal,
  [382] = 1,
    ACTIONS(102), 4,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [389] = 2,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(102), 3,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [398] = 3,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [409] = 3,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [420] = 1,
    ACTIONS(112), 4,
      anon_sym_DOT,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
  [427] = 1,
    ACTIONS(114), 4,
      anon_sym_DOT,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
  [434] = 4,
    ACTIONS(116), 1,
      aux_sym_class_definition_token3,
    ACTIONS(118), 1,
      aux_sym_class_definition_token4,
    ACTIONS(120), 1,
      aux_sym_class_definition_token5,
    ACTIONS(122), 1,
      aux_sym_class_definition_token6,
  [447] = 1,
    ACTIONS(124), 4,
      anon_sym_DOT,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
  [454] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(37), 1,
      sym_data_statement,
    STATE(59), 1,
      sym_class_components,
  [464] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(37), 1,
      sym_data_statement,
    STATE(46), 1,
      sym_class_components,
  [474] = 3,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      aux_sym_character_literal_token1,
    STATE(39), 1,
      aux_sym_character_literal_repeat1,
  [484] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(37), 1,
      sym_data_statement,
    STATE(70), 1,
      sym_class_components,
  [494] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(37), 1,
      sym_data_statement,
    STATE(66), 1,
      sym_class_components,
  [504] = 3,
    ACTIONS(132), 1,
      aux_sym_class_definition_token4,
    ACTIONS(134), 1,
      aux_sym_class_definition_token5,
    ACTIONS(136), 1,
      aux_sym_class_definition_token6,
  [514] = 1,
    ACTIONS(138), 3,
      aux_sym_class_definition_token4,
      aux_sym_class_definition_token5,
      aux_sym_class_definition_token6,
  [520] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(37), 1,
      sym_data_statement,
    STATE(48), 1,
      sym_class_components,
  [530] = 3,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_character_literal_token1,
    STATE(39), 1,
      aux_sym_character_literal_repeat1,
  [540] = 3,
    ACTIONS(145), 1,
      aux_sym_type_declaration_token1,
    ACTIONS(147), 1,
      aux_sym_type_declaration_token2,
    STATE(30), 1,
      sym_type_declaration,
  [550] = 3,
    ACTIONS(126), 1,
      aux_sym_data_statement_token1,
    STATE(36), 1,
      sym_class_components,
    STATE(37), 1,
      sym_data_statement,
  [560] = 3,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_character_literal_token1,
    STATE(33), 1,
      aux_sym_character_literal_repeat1,
  [570] = 2,
    ACTIONS(153), 1,
      aux_sym_assert_statement_token3,
    ACTIONS(155), 1,
      aux_sym_assert_statement_token4,
  [577] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(43), 1,
      sym_checkpoint_group,
  [584] = 2,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(40), 1,
      sym_variable,
  [591] = 2,
    ACTIONS(161), 1,
      aux_sym_class_definition_token5,
    ACTIONS(163), 1,
      aux_sym_class_definition_token6,
  [598] = 1,
    ACTIONS(165), 2,
      aux_sym_assert_statement_token3,
      aux_sym_assert_statement_token4,
  [603] = 2,
    ACTIONS(134), 1,
      aux_sym_class_definition_token5,
    ACTIONS(136), 1,
      aux_sym_class_definition_token6,
  [610] = 1,
    ACTIONS(167), 2,
      aux_sym_type_declaration_token1,
      aux_sym_type_declaration_token2,
  [615] = 1,
    ACTIONS(169), 1,
      anon_sym_DOT,
  [619] = 1,
    ACTIONS(171), 1,
      anon_sym_DOT,
  [623] = 1,
    ACTIONS(173), 1,
      anon_sym_DOT,
  [627] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [631] = 1,
    ACTIONS(177), 1,
      anon_sym_DOT,
  [635] = 1,
    ACTIONS(179), 1,
      anon_sym_DOT,
  [639] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [643] = 1,
    ACTIONS(183), 1,
      anon_sym_DOT,
  [647] = 1,
    ACTIONS(185), 1,
      anon_sym_DOT,
  [651] = 1,
    ACTIONS(136), 1,
      aux_sym_class_definition_token6,
  [655] = 1,
    ACTIONS(187), 1,
      anon_sym_EQ,
  [659] = 1,
    ACTIONS(189), 1,
      aux_sym_assert_statement_token4,
  [663] = 1,
    ACTIONS(191), 1,
      aux_sym_class_definition_token2,
  [667] = 1,
    ACTIONS(193), 1,
      anon_sym_DOT,
  [671] = 1,
    ACTIONS(195), 1,
      anon_sym_DOT,
  [675] = 1,
    ACTIONS(197), 1,
      anon_sym_DOT,
  [679] = 1,
    ACTIONS(163), 1,
      aux_sym_class_definition_token6,
  [683] = 1,
    ACTIONS(199), 1,
      sym_class_name,
  [687] = 1,
    ACTIONS(201), 1,
      sym_identifier,
  [691] = 1,
    ACTIONS(203), 1,
      anon_sym_DOT,
  [695] = 1,
    ACTIONS(205), 1,
      aux_sym_class_definition_token6,
  [699] = 1,
    ACTIONS(207), 1,
      aux_sym_add_statement_token2,
  [703] = 1,
    ACTIONS(209), 1,
      anon_sym_DOT,
  [707] = 1,
    ACTIONS(211), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 241,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 293,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 321,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 346,
  [SMALL_STATE(21)] = 358,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 382,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 427,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 447,
  [SMALL_STATE(31)] = 454,
  [SMALL_STATE(32)] = 464,
  [SMALL_STATE(33)] = 474,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 504,
  [SMALL_STATE(37)] = 514,
  [SMALL_STATE(38)] = 520,
  [SMALL_STATE(39)] = 530,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 550,
  [SMALL_STATE(42)] = 560,
  [SMALL_STATE(43)] = 570,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 591,
  [SMALL_STATE(47)] = 598,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 610,
  [SMALL_STATE(50)] = 615,
  [SMALL_STATE(51)] = 619,
  [SMALL_STATE(52)] = 623,
  [SMALL_STATE(53)] = 627,
  [SMALL_STATE(54)] = 631,
  [SMALL_STATE(55)] = 635,
  [SMALL_STATE(56)] = 639,
  [SMALL_STATE(57)] = 643,
  [SMALL_STATE(58)] = 647,
  [SMALL_STATE(59)] = 651,
  [SMALL_STATE(60)] = 655,
  [SMALL_STATE(61)] = 659,
  [SMALL_STATE(62)] = 663,
  [SMALL_STATE(63)] = 667,
  [SMALL_STATE(64)] = 671,
  [SMALL_STATE(65)] = 675,
  [SMALL_STATE(66)] = 679,
  [SMALL_STATE(67)] = 683,
  [SMALL_STATE(68)] = 687,
  [SMALL_STATE(69)] = 691,
  [SMALL_STATE(70)] = 695,
  [SMALL_STATE(71)] = 699,
  [SMALL_STATE(72)] = 703,
  [SMALL_STATE(73)] = 707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 12, 0, 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 12, 0, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 10, 0, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 10, 0, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 8, 0, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 8, 0, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, 0, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, 0, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write_statement, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abap_type, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_statement, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_components, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_literal_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkpoint_group, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 7, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3, 0, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clear_statement, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, 0, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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

TS_PUBLIC const TSLanguage *tree_sitter_abap(void) {
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
