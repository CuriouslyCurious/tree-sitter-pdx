#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_AT = 1,
  anon_sym_EQ = 2,
  anon_sym_GT = 3,
  anon_sym_GT_EQ = 4,
  anon_sym_LT = 5,
  anon_sym_LT_EQ = 6,
  anon_sym_BANG_EQ = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_ROOT = 9,
  anon_sym_FROM = 10,
  anon_sym_PREV = 11,
  anon_sym_THIS = 12,
  anon_sym_NOT = 13,
  anon_sym_NOR = 14,
  anon_sym_NAND = 15,
  anon_sym_AND = 16,
  anon_sym_OR = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__string_content_token1 = 19,
  sym_string_escape = 20,
  sym_integer_literal = 21,
  sym_date_literal = 22,
  anon_sym_yes = 23,
  anon_sym_no = 24,
  sym_plain = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym__pair = 31,
  sym_variable = 32,
  sym__operator = 33,
  sym__scalar = 34,
  sym__scope = 35,
  sym_dynamic_scope = 36,
  sym_logic_scope = 37,
  sym_string_literal = 38,
  aux_sym__string_content = 39,
  sym_bool_literal = 40,
  sym__block = 41,
  sym_object = 42,
  sym_array = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_object_repeat1 = 45,
  aux_sym_array_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_ROOT] = "ROOT",
  [anon_sym_FROM] = "FROM",
  [anon_sym_PREV] = "PREV",
  [anon_sym_THIS] = "THIS",
  [anon_sym_NOT] = "NOT",
  [anon_sym_NOR] = "NOR",
  [anon_sym_NAND] = "NAND",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_string_escape] = "string_escape",
  [sym_integer_literal] = "integer_literal",
  [sym_date_literal] = "date_literal",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym_plain] = "plain",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__pair] = "_pair",
  [sym_variable] = "variable",
  [sym__operator] = "_operator",
  [sym__scalar] = "_scalar",
  [sym__scope] = "_scope",
  [sym_dynamic_scope] = "dynamic_scope",
  [sym_logic_scope] = "logic_scope",
  [sym_string_literal] = "string_literal",
  [aux_sym__string_content] = "_string_content",
  [sym_bool_literal] = "bool_literal",
  [sym__block] = "_block",
  [sym_object] = "object",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_ROOT] = anon_sym_ROOT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_PREV] = anon_sym_PREV,
  [anon_sym_THIS] = anon_sym_THIS,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_NOR] = anon_sym_NOR,
  [anon_sym_NAND] = anon_sym_NAND,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_string_escape] = sym_string_escape,
  [sym_integer_literal] = sym_integer_literal,
  [sym_date_literal] = sym_date_literal,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym_plain] = sym_plain,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__pair] = sym__pair,
  [sym_variable] = sym_variable,
  [sym__operator] = sym__operator,
  [sym__scalar] = sym__scalar,
  [sym__scope] = sym__scope,
  [sym_dynamic_scope] = sym_dynamic_scope,
  [sym_logic_scope] = sym_logic_scope,
  [sym_string_literal] = sym_string_literal,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_bool_literal] = sym_bool_literal,
  [sym__block] = sym__block,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_plain] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__pair] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__scalar] = {
    .visible = false,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [sym_dynamic_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_logic_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_assign = 1,
  field_equals = 2,
  field_false = 3,
  field_greater_than = 4,
  field_greater_than_or_equals = 5,
  field_key = 6,
  field_less_than = 7,
  field_less_than_or_equals = 8,
  field_not_equals = 9,
  field_operator = 10,
  field_true = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assign] = "assign",
  [field_equals] = "equals",
  [field_false] = "false",
  [field_greater_than] = "greater_than",
  [field_greater_than_or_equals] = "greater_than_or_equals",
  [field_key] = "key",
  [field_less_than] = "less_than",
  [field_less_than_or_equals] = "less_than_or_equals",
  [field_not_equals] = "not_equals",
  [field_operator] = "operator",
  [field_true] = "true",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 10},
  [4] = {.index = 12, .length = 1},
  [5] = {.index = 13, .length = 1},
  [6] = {.index = 14, .length = 1},
  [7] = {.index = 15, .length = 1},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 20},
  [13] = {.index = 41, .length = 10},
  [14] = {.index = 51, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_true, 0},
  [1] =
    {field_false, 0},
  [2] =
    {field_assign, 0, .inherited = true},
    {field_equals, 0, .inherited = true},
    {field_greater_than, 0, .inherited = true},
    {field_greater_than_or_equals, 0, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_less_than, 0, .inherited = true},
    {field_less_than_or_equals, 0, .inherited = true},
    {field_not_equals, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [12] =
    {field_assign, 0},
  [13] =
    {field_greater_than, 0},
  [14] =
    {field_greater_than_or_equals, 0},
  [15] =
    {field_less_than, 0},
  [16] =
    {field_less_than_or_equals, 0},
  [17] =
    {field_not_equals, 0},
  [18] =
    {field_equals, 0},
  [19] =
    {field_key, 0},
    {field_value, 1},
  [21] =
    {field_assign, 0, .inherited = true},
    {field_assign, 1, .inherited = true},
    {field_equals, 0, .inherited = true},
    {field_equals, 1, .inherited = true},
    {field_greater_than, 0, .inherited = true},
    {field_greater_than, 1, .inherited = true},
    {field_greater_than_or_equals, 0, .inherited = true},
    {field_greater_than_or_equals, 1, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_less_than, 0, .inherited = true},
    {field_less_than, 1, .inherited = true},
    {field_less_than_or_equals, 0, .inherited = true},
    {field_less_than_or_equals, 1, .inherited = true},
    {field_not_equals, 0, .inherited = true},
    {field_not_equals, 1, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_operator, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [41] =
    {field_assign, 1, .inherited = true},
    {field_equals, 1, .inherited = true},
    {field_greater_than, 1, .inherited = true},
    {field_greater_than_or_equals, 1, .inherited = true},
    {field_key, 0},
    {field_less_than, 1, .inherited = true},
    {field_less_than_or_equals, 1, .inherited = true},
    {field_not_equals, 1, .inherited = true},
    {field_operator, 1},
    {field_value, 2},
  [51] =
    {field_assign, 1, .inherited = true},
    {field_equals, 1, .inherited = true},
    {field_greater_than, 1, .inherited = true},
    {field_greater_than_or_equals, 1, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_less_than, 1, .inherited = true},
    {field_less_than_or_equals, 1, .inherited = true},
    {field_not_equals, 1, .inherited = true},
    {field_operator, 1, .inherited = true},
    {field_value, 1, .inherited = true},
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
};

static inline bool sym_plain_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '#')))
    : (c <= '\'' || (c < '{'
      ? (c < '@'
        ? (c >= '<' && c <= '>')
        : c <= '@')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_ROOT);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PREV);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_THIS);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_NOR);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_NAND);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AND);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_OR);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_escape);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_date_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_yes);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_no);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(28);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(52);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'D') ADVANCE(21);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'D') ADVANCE(20);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'E') ADVANCE(56);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'H') ADVANCE(43);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'I') ADVANCE(54);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'M') ADVANCE(15);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'N') ADVANCE(39);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'N') ADVANCE(40);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'O') ADVANCE(44);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'O') ADVANCE(55);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'O') ADVANCE(48);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'R') ADVANCE(22);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'R') ADVANCE(41);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(18);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'R') ADVANCE(47);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'S') ADVANCE(17);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'T') ADVANCE(14);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'V') ADVANCE(16);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'e') ADVANCE(59);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 'o') ADVANCE(35);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_plain);
      if (lookahead == 's') ADVANCE(34);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_plain);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_plain);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_plain);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_plain);
      if (!sym_plain_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_ROOT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_PREV] = ACTIONS(1),
    [anon_sym_THIS] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_NOR] = ACTIONS(1),
    [anon_sym_NAND] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_date_literal] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [sym_plain] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__statement] = STATE(27),
    [sym__pair] = STATE(26),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(37),
    [sym__scope] = STATE(37),
    [sym_dynamic_scope] = STATE(37),
    [sym_logic_scope] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(15),
    [sym_date_literal] = ACTIONS(15),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__operator] = STATE(14),
    [sym__block] = STATE(21),
    [sym_object] = STATE(21),
    [sym_array] = STATE(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_ROOT] = ACTIONS(35),
    [anon_sym_FROM] = ACTIONS(35),
    [anon_sym_PREV] = ACTIONS(35),
    [anon_sym_THIS] = ACTIONS(35),
    [anon_sym_NOT] = ACTIONS(35),
    [anon_sym_NOR] = ACTIONS(35),
    [anon_sym_NAND] = ACTIONS(35),
    [anon_sym_AND] = ACTIONS(35),
    [anon_sym_OR] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(35),
    [sym_date_literal] = ACTIONS(35),
    [anon_sym_yes] = ACTIONS(35),
    [anon_sym_no] = ACTIONS(35),
    [sym_plain] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(27),
    [sym__pair] = STATE(26),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(37),
    [sym__scope] = STATE(37),
    [sym_dynamic_scope] = STATE(37),
    [sym_logic_scope] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(15),
    [sym_date_literal] = ACTIONS(15),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(27),
    [sym__pair] = STATE(26),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(37),
    [sym__scope] = STATE(37),
    [sym_dynamic_scope] = STATE(37),
    [sym_logic_scope] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_ROOT] = ACTIONS(48),
    [anon_sym_FROM] = ACTIONS(48),
    [anon_sym_PREV] = ACTIONS(48),
    [anon_sym_THIS] = ACTIONS(48),
    [anon_sym_NOT] = ACTIONS(51),
    [anon_sym_NOR] = ACTIONS(51),
    [anon_sym_NAND] = ACTIONS(51),
    [anon_sym_AND] = ACTIONS(51),
    [anon_sym_OR] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym_integer_literal] = ACTIONS(57),
    [sym_date_literal] = ACTIONS(57),
    [anon_sym_yes] = ACTIONS(60),
    [anon_sym_no] = ACTIONS(63),
    [sym_plain] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__pair] = STATE(25),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(2),
    [sym__scope] = STATE(2),
    [sym_dynamic_scope] = STATE(2),
    [sym_logic_scope] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [aux_sym_object_repeat1] = STATE(10),
    [aux_sym_array_repeat1] = STATE(16),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(66),
    [sym_date_literal] = ACTIONS(66),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_GT_EQ] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_LT_EQ] = ACTIONS(70),
    [anon_sym_BANG_EQ] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(70),
    [anon_sym_ROOT] = ACTIONS(72),
    [anon_sym_FROM] = ACTIONS(72),
    [anon_sym_PREV] = ACTIONS(72),
    [anon_sym_THIS] = ACTIONS(72),
    [anon_sym_NOT] = ACTIONS(72),
    [anon_sym_NOR] = ACTIONS(72),
    [anon_sym_NAND] = ACTIONS(72),
    [anon_sym_AND] = ACTIONS(72),
    [anon_sym_OR] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym_integer_literal] = ACTIONS(72),
    [sym_date_literal] = ACTIONS(72),
    [anon_sym_yes] = ACTIONS(72),
    [anon_sym_no] = ACTIONS(72),
    [sym_plain] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_GT_EQ] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_LT_EQ] = ACTIONS(74),
    [anon_sym_BANG_EQ] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(74),
    [anon_sym_ROOT] = ACTIONS(76),
    [anon_sym_FROM] = ACTIONS(76),
    [anon_sym_PREV] = ACTIONS(76),
    [anon_sym_THIS] = ACTIONS(76),
    [anon_sym_NOT] = ACTIONS(76),
    [anon_sym_NOR] = ACTIONS(76),
    [anon_sym_NAND] = ACTIONS(76),
    [anon_sym_AND] = ACTIONS(76),
    [anon_sym_OR] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [sym_integer_literal] = ACTIONS(76),
    [sym_date_literal] = ACTIONS(76),
    [anon_sym_yes] = ACTIONS(76),
    [anon_sym_no] = ACTIONS(76),
    [sym_plain] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__pair] = STATE(25),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(37),
    [sym__scope] = STATE(37),
    [sym_dynamic_scope] = STATE(37),
    [sym_logic_scope] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [aux_sym_object_repeat1] = STATE(8),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_ROOT] = ACTIONS(81),
    [anon_sym_FROM] = ACTIONS(81),
    [anon_sym_PREV] = ACTIONS(81),
    [anon_sym_THIS] = ACTIONS(81),
    [anon_sym_NOT] = ACTIONS(84),
    [anon_sym_NOR] = ACTIONS(84),
    [anon_sym_NAND] = ACTIONS(84),
    [anon_sym_AND] = ACTIONS(84),
    [anon_sym_OR] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_integer_literal] = ACTIONS(90),
    [sym_date_literal] = ACTIONS(90),
    [anon_sym_yes] = ACTIONS(93),
    [anon_sym_no] = ACTIONS(96),
    [sym_plain] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [anon_sym_ROOT] = ACTIONS(103),
    [anon_sym_FROM] = ACTIONS(103),
    [anon_sym_PREV] = ACTIONS(103),
    [anon_sym_THIS] = ACTIONS(103),
    [anon_sym_NOT] = ACTIONS(103),
    [anon_sym_NOR] = ACTIONS(103),
    [anon_sym_NAND] = ACTIONS(103),
    [anon_sym_AND] = ACTIONS(103),
    [anon_sym_OR] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_integer_literal] = ACTIONS(103),
    [sym_date_literal] = ACTIONS(103),
    [anon_sym_yes] = ACTIONS(103),
    [anon_sym_no] = ACTIONS(103),
    [sym_plain] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__pair] = STATE(25),
    [sym_variable] = STATE(37),
    [sym__scalar] = STATE(37),
    [sym__scope] = STATE(37),
    [sym_dynamic_scope] = STATE(37),
    [sym_logic_scope] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [aux_sym_object_repeat1] = STATE(8),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(15),
    [sym_date_literal] = ACTIONS(15),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_ROOT] = ACTIONS(109),
    [anon_sym_FROM] = ACTIONS(109),
    [anon_sym_PREV] = ACTIONS(109),
    [anon_sym_THIS] = ACTIONS(109),
    [anon_sym_NOT] = ACTIONS(109),
    [anon_sym_NOR] = ACTIONS(109),
    [anon_sym_NAND] = ACTIONS(109),
    [anon_sym_AND] = ACTIONS(109),
    [anon_sym_OR] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(109),
    [sym_date_literal] = ACTIONS(109),
    [anon_sym_yes] = ACTIONS(109),
    [anon_sym_no] = ACTIONS(109),
    [sym_plain] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_ROOT] = ACTIONS(113),
    [anon_sym_FROM] = ACTIONS(113),
    [anon_sym_PREV] = ACTIONS(113),
    [anon_sym_THIS] = ACTIONS(113),
    [anon_sym_NOT] = ACTIONS(113),
    [anon_sym_NOR] = ACTIONS(113),
    [anon_sym_NAND] = ACTIONS(113),
    [anon_sym_AND] = ACTIONS(113),
    [anon_sym_OR] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_integer_literal] = ACTIONS(113),
    [sym_date_literal] = ACTIONS(113),
    [anon_sym_yes] = ACTIONS(113),
    [anon_sym_no] = ACTIONS(113),
    [sym_plain] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_ROOT] = ACTIONS(117),
    [anon_sym_FROM] = ACTIONS(117),
    [anon_sym_PREV] = ACTIONS(117),
    [anon_sym_THIS] = ACTIONS(117),
    [anon_sym_NOT] = ACTIONS(117),
    [anon_sym_NOR] = ACTIONS(117),
    [anon_sym_NAND] = ACTIONS(117),
    [anon_sym_AND] = ACTIONS(117),
    [anon_sym_OR] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_integer_literal] = ACTIONS(117),
    [sym_date_literal] = ACTIONS(117),
    [anon_sym_yes] = ACTIONS(117),
    [anon_sym_no] = ACTIONS(117),
    [sym_plain] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__scalar] = STATE(28),
    [sym__scope] = STATE(28),
    [sym_dynamic_scope] = STATE(28),
    [sym_logic_scope] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym__block] = STATE(29),
    [sym_object] = STATE(29),
    [sym_array] = STATE(29),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(119),
    [sym_date_literal] = ACTIONS(119),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__scalar] = STATE(23),
    [sym__scope] = STATE(23),
    [sym_dynamic_scope] = STATE(23),
    [sym_logic_scope] = STATE(23),
    [sym_string_literal] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym__block] = STATE(22),
    [sym_object] = STATE(22),
    [sym_array] = STATE(22),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(121),
    [sym_date_literal] = ACTIONS(121),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__scalar] = STATE(17),
    [sym__scope] = STATE(17),
    [sym_dynamic_scope] = STATE(17),
    [sym_logic_scope] = STATE(17),
    [sym_string_literal] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [aux_sym_array_repeat1] = STATE(17),
    [anon_sym_ROOT] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PREV] = ACTIONS(9),
    [anon_sym_THIS] = ACTIONS(9),
    [anon_sym_NOT] = ACTIONS(11),
    [anon_sym_NOR] = ACTIONS(11),
    [anon_sym_NAND] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(123),
    [sym_date_literal] = ACTIONS(123),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(19),
    [sym_plain] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__scalar] = STATE(17),
    [sym__scope] = STATE(17),
    [sym_dynamic_scope] = STATE(17),
    [sym_logic_scope] = STATE(17),
    [sym_string_literal] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [aux_sym_array_repeat1] = STATE(17),
    [anon_sym_ROOT] = ACTIONS(127),
    [anon_sym_FROM] = ACTIONS(127),
    [anon_sym_PREV] = ACTIONS(127),
    [anon_sym_THIS] = ACTIONS(127),
    [anon_sym_NOT] = ACTIONS(130),
    [anon_sym_NOR] = ACTIONS(130),
    [anon_sym_NAND] = ACTIONS(130),
    [anon_sym_AND] = ACTIONS(130),
    [anon_sym_OR] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_integer_literal] = ACTIONS(136),
    [sym_date_literal] = ACTIONS(136),
    [anon_sym_yes] = ACTIONS(139),
    [anon_sym_no] = ACTIONS(142),
    [sym_plain] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_yes,
    ACTIONS(19), 1,
      anon_sym_no,
    ACTIONS(147), 3,
      sym_integer_literal,
      sym_date_literal,
      sym_plain,
    ACTIONS(9), 4,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
    ACTIONS(11), 5,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
    STATE(38), 6,
      sym__scalar,
      sym__scope,
      sym_dynamic_scope,
      sym_logic_scope,
      sym_string_literal,
      sym_bool_literal,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(151), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(155), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [91] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(159), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(163), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(163), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(167), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(171), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
    ACTIONS(175), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DQUOTE,
    ACTIONS(179), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(163), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_AT,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(163), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(181), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(185), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(189), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(193), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(197), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(201), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(205), 14,
      anon_sym_ROOT,
      anon_sym_FROM,
      anon_sym_PREV,
      anon_sym_THIS,
      anon_sym_NOT,
      anon_sym_NOR,
      anon_sym_NAND,
      anon_sym_AND,
      anon_sym_OR,
      sym_integer_literal,
      sym_date_literal,
      anon_sym_yes,
      anon_sym_no,
      sym_plain,
  [488] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      anon_sym_GT,
    ACTIONS(25), 1,
      anon_sym_GT_EQ,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_BANG_EQ,
    ACTIONS(33), 1,
      anon_sym_EQ_EQ,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__operator,
    STATE(21), 3,
      sym__block,
      sym_object,
      sym_array,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 5,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
  [540] = 4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__string_content,
    ACTIONS(215), 2,
      aux_sym__string_content_token1,
      sym_string_escape,
  [554] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym__string_content,
    ACTIONS(221), 2,
      aux_sym__string_content_token1,
      sym_string_escape,
  [568] = 4,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym__string_content,
    ACTIONS(226), 2,
      aux_sym__string_content_token1,
      sym_string_escape,
  [582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 39,
  [SMALL_STATE(20)] = 65,
  [SMALL_STATE(21)] = 91,
  [SMALL_STATE(22)] = 117,
  [SMALL_STATE(23)] = 143,
  [SMALL_STATE(24)] = 169,
  [SMALL_STATE(25)] = 195,
  [SMALL_STATE(26)] = 220,
  [SMALL_STATE(27)] = 245,
  [SMALL_STATE(28)] = 270,
  [SMALL_STATE(29)] = 295,
  [SMALL_STATE(30)] = 320,
  [SMALL_STATE(31)] = 344,
  [SMALL_STATE(32)] = 368,
  [SMALL_STATE(33)] = 392,
  [SMALL_STATE(34)] = 416,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 464,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 524,
  [SMALL_STATE(39)] = 540,
  [SMALL_STATE(40)] = 554,
  [SMALL_STATE(41)] = 568,
  [SMALL_STATE(42)] = 582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(11),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(37),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, .production_id = 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(39),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(37),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(13),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12), SHIFT_REPEAT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_scope, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic_scope, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_scope, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_scope, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(39),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(17),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 14),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 14),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 2, .production_id = 11),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 2, .production_id = 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 3, .production_id = 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator, 1, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(40),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pdx(void) {
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
