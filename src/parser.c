#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_pattern_token1 = 1,
  aux_sym_pattern_token2 = 2,
  anon_sym_CARET = 3,
  sym_end_assertion = 4,
  sym_zero_or_more = 5,
  sym_one_or_more = 6,
  sym_lazy = 7,
  sym_optional = 8,
  aux_sym_literal_character_token1 = 9,
  anon_sym_DOT = 10,
  anon_sym_PERCENT = 11,
  aux_sym_character_class_token1 = 12,
  anon_sym_DASH = 13,
  aux_sym_escaped_character_token1 = 14,
  aux_sym_escape_sequence_token1 = 15,
  sym_set_character = 16,
  aux_sym_set_escaped_token1 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_pattern = 22,
  sym_start_assertion = 23,
  sym_literal_character = 24,
  sym_any_character = 25,
  sym_character_class = 26,
  sym_character_range = 27,
  sym_escaped_character = 28,
  sym_escape_sequence = 29,
  sym_set_sequence = 30,
  sym_set_class = 31,
  sym_set_escaped = 32,
  sym_set_any = 33,
  sym_character_set_content = 34,
  sym_character_set = 35,
  sym_capture_group = 36,
  aux_sym_pattern_repeat1 = 37,
  aux_sym_character_set_content_repeat1 = 38,
  aux_sym_capture_group_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_pattern_token1] = "pattern_token1",
  [aux_sym_pattern_token2] = "pattern_token2",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_lazy] = "lazy",
  [sym_optional] = "optional",
  [aux_sym_literal_character_token1] = "literal_character_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [aux_sym_character_class_token1] = "character_class_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_escaped_character_token1] = "escaped_character_token1",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_set_character] = "literal_character",
  [aux_sym_set_escaped_token1] = "set_escaped_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_pattern] = "pattern",
  [sym_start_assertion] = "start_assertion",
  [sym_literal_character] = "literal_character",
  [sym_any_character] = "any_character",
  [sym_character_class] = "character_class",
  [sym_character_range] = "character_range",
  [sym_escaped_character] = "escaped_character",
  [sym_escape_sequence] = "escape_sequence",
  [sym_set_sequence] = "escape_sequence",
  [sym_set_class] = "character_class",
  [sym_set_escaped] = "escaped_character",
  [sym_set_any] = "any_character",
  [sym_character_set_content] = "character_set_content",
  [sym_character_set] = "character_set",
  [sym_capture_group] = "capture_group",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_character_set_content_repeat1] = "character_set_content_repeat1",
  [aux_sym_capture_group_repeat1] = "capture_group_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_pattern_token1] = aux_sym_pattern_token1,
  [aux_sym_pattern_token2] = aux_sym_pattern_token2,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_end_assertion] = sym_end_assertion,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_lazy] = sym_lazy,
  [sym_optional] = sym_optional,
  [aux_sym_literal_character_token1] = aux_sym_literal_character_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_character_class_token1] = aux_sym_character_class_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_escaped_character_token1] = aux_sym_escaped_character_token1,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_set_character] = sym_literal_character,
  [aux_sym_set_escaped_token1] = aux_sym_set_escaped_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_pattern] = sym_pattern,
  [sym_start_assertion] = sym_start_assertion,
  [sym_literal_character] = sym_literal_character,
  [sym_any_character] = sym_any_character,
  [sym_character_class] = sym_character_class,
  [sym_character_range] = sym_character_range,
  [sym_escaped_character] = sym_escaped_character,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_set_sequence] = sym_escape_sequence,
  [sym_set_class] = sym_character_class,
  [sym_set_escaped] = sym_escaped_character,
  [sym_set_any] = sym_any_character,
  [sym_character_set_content] = sym_character_set_content,
  [sym_character_set] = sym_character_set,
  [sym_capture_group] = sym_capture_group,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_character_set_content_repeat1] = aux_sym_character_set_content_repeat1,
  [aux_sym_capture_group_repeat1] = aux_sym_capture_group_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_end_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_lazy] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literal_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_class_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escaped_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_set_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_set_escaped_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_start_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_character] = {
    .visible = true,
    .named = true,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_set_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_set_class] = {
    .visible = true,
    .named = true,
  },
  [sym_set_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_set_any] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set_content] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
    .visible = true,
    .named = true,
  },
  [sym_capture_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_set_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_group_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 11,
  [30] = 12,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 28,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 48,
};

static TSCharacterRange aux_sym_character_class_token1_character_set_1[] = {
  {'A', 'A'}, {'C', 'D'}, {'L', 'L'}, {'P', 'P'}, {'S', 'S'}, {'U', 'U'}, {'W', 'X'}, {'Z', 'Z'},
  {'a', 'a'}, {'c', 'd'}, {'l', 'l'}, {'p', 'p'}, {'s', 's'}, {'u', 'u'}, {'w', 'x'}, {'z', 'z'},
};

static TSCharacterRange aux_sym_escaped_character_token1_character_set_1[] = {
  {0, '@'}, {'B', 'B'}, {'E', 'K'}, {'M', 'O'}, {'Q', 'R'}, {'T', 'T'}, {'V', 'V'}, {'Y', 'Y'},
  {'[', '`'}, {'b', 'b'}, {'e', 'k'}, {'m', 'o'}, {'q', 'r'}, {'t', 't'}, {'v', 'v'}, {'y', 'y'},
  {'{', 0x10ffff},
};

static TSCharacterRange aux_sym_set_escaped_token1_character_set_1[] = {
  {0, '@'}, {'B', 'B'}, {'E', 'K'}, {'M', 'O'}, {'Q', 'R'}, {'T', 'T'}, {'V', 'V'}, {'Y', 'Y'},
  {'\\', '\\'}, {'^', '`'}, {'b', 'b'}, {'e', 'k'}, {'m', 'o'}, {'q', 'r'}, {'t', 't'}, {'v', 'v'},
  {'y', 'y'}, {'{', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(7);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '?') ADVANCE(19);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(14);
      if (set_contains(aux_sym_character_class_token1_character_set_1, 16, lookahead)) ADVANCE(27);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 33,
        '\r', 32,
        '%', 26,
        ')', 42,
        '*', 16,
        '+', 17,
        '-', 18,
        '.', 25,
        '?', 19,
        '[', 38,
        '\\', 35,
        ']', 40,
        '^', 14,
      );
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead)) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(32);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 37,
        '\r', 36,
        'A', 27,
        'C', 27,
        'D', 27,
        'L', 27,
        'P', 27,
        'S', 27,
        'U', 27,
        'W', 27,
        'X', 27,
        'Z', 27,
        'a', 27,
        'c', 27,
        'd', 27,
        'l', 27,
        'p', 27,
        's', 27,
        'u', 27,
        'w', 27,
        'x', 27,
        'z', 27,
      );
      if (lookahead != 0 &&
          lookahead != 'Z' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 30,
        '\r', 29,
        'A', 27,
        'C', 27,
        'D', 27,
        'L', 27,
        'P', 27,
        'S', 27,
        'U', 27,
        'W', 27,
        'X', 27,
        'Z', 27,
        'a', 27,
        'c', 27,
        'd', 27,
        'l', 27,
        'p', 27,
        's', 27,
        'u', 27,
        'w', 27,
        'x', 27,
        'z', 27,
      );
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(32);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 31,
        '\'', 31,
        '0', 31,
        '\\', 31,
        'b', 31,
        'f', 31,
        'n', 31,
        'r', 31,
        't', 31,
        'v', 31,
      );
      END_STATE();
    case 7:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 21,
        '\r', 20,
        '$', 15,
        '%', 26,
        '(', 41,
        '.', 25,
        '[', 39,
        '\\', 24,
        '^', 14,
      );
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 22,
        '\r', 20,
        '$', 15,
        '%', 26,
        '(', 41,
        '.', 25,
        '[', 39,
        '\\', 24,
      );
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 23,
        '\r', 20,
        '$', 15,
        '%', 26,
        '(', 41,
        '*', 16,
        '+', 17,
        '-', 18,
        '.', 25,
        '?', 19,
        '[', 39,
        '\\', 24,
      );
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_pattern_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_pattern_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_lazy);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      ADVANCE_MAP(
        '\n', 23,
        '\r', 20,
        '$', 15,
        '%', 26,
        '*', 16,
        '+', 17,
        '-', 18,
        '?', 19,
        '\\', 24,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_literal_character_token1);
      ADVANCE_MAP(
        '"', 31,
        '\'', 31,
        '0', 31,
        '\\', 31,
        'b', 31,
        'f', 31,
        'n', 31,
        'r', 31,
        't', 31,
        'v', 31,
      );
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_class_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_escaped_character_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(29);
      if ((!eof && set_contains(aux_sym_escaped_character_token1_character_set_1, 17, lookahead))) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_set_character);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_set_character);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_set_character);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '(' || '+' < lookahead) &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^') ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_set_character);
      ADVANCE_MAP(
        '"', 31,
        '\'', 31,
        '0', 31,
        '\\', 31,
        'b', 31,
        'f', 31,
        'n', 31,
        'r', 31,
        't', 31,
        'v', 31,
      );
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_set_escaped_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_set_escaped_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(36);
      if ((!eof && set_contains(aux_sym_set_escaped_token1_character_set_1, 18, lookahead))) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_pattern_token1] = ACTIONS(1),
    [aux_sym_pattern_token2] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_lazy] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_character_class_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(47),
    [sym_start_assertion] = STATE(5),
    [sym_literal_character] = STATE(2),
    [sym_any_character] = STATE(2),
    [sym_character_class] = STATE(2),
    [sym_escaped_character] = STATE(2),
    [sym_escape_sequence] = STATE(2),
    [sym_character_set] = STATE(2),
    [sym_capture_group] = STATE(2),
    [aux_sym_pattern_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_pattern_token1] = ACTIONS(5),
    [aux_sym_pattern_token2] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(9),
    [aux_sym_literal_character_token1] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(15),
    [aux_sym_escape_sequence_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      aux_sym_literal_character_token1,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_end_assertion,
    ACTIONS(25), 2,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [39] = 10,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_end_assertion,
    ACTIONS(36), 1,
      aux_sym_literal_character_token1,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [78] = 10,
    ACTIONS(11), 1,
      aux_sym_literal_character_token1,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_end_assertion,
    ACTIONS(25), 2,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
    STATE(3), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [117] = 10,
    ACTIONS(11), 1,
      aux_sym_literal_character_token1,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_end_assertion,
    ACTIONS(58), 2,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
    STATE(4), 8,
      sym_literal_character,
      sym_any_character,
      sym_character_class,
      sym_escaped_character,
      sym_escape_sequence,
      sym_character_set,
      sym_capture_group,
      aux_sym_pattern_repeat1,
  [156] = 3,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(62), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [177] = 3,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(68), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [198] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(74), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [219] = 3,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(80), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [240] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(86), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [261] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(92), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [282] = 3,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(98), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [303] = 7,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(108), 1,
      sym_set_character,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [330] = 7,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      sym_set_character,
    STATE(51), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [357] = 7,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(127), 1,
      sym_set_character,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [384] = 7,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(116), 1,
      sym_set_character,
    ACTIONS(135), 1,
      anon_sym_CARET,
    STATE(48), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [411] = 6,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(116), 1,
      sym_set_character,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(18), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [435] = 6,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(148), 1,
      sym_set_character,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(18), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [459] = 6,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(116), 1,
      sym_set_character,
    STATE(43), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [483] = 6,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym_set_character,
    STATE(13), 6,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      sym_character_set,
      aux_sym_capture_group_repeat1,
  [507] = 6,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(106), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(116), 1,
      sym_set_character,
    STATE(49), 1,
      sym_character_set_content,
    STATE(17), 6,
      sym_character_range,
      sym_set_sequence,
      sym_set_class,
      sym_set_escaped,
      sym_set_any,
      aux_sym_character_set_content_repeat1,
  [531] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [546] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [561] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [576] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [591] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [606] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [621] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [636] = 2,
    ACTIONS(179), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(92), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [651] = 2,
    ACTIONS(181), 4,
      sym_zero_or_more,
      sym_one_or_more,
      sym_lazy,
      sym_optional,
    ACTIONS(98), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [666] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [681] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 9,
      aux_sym_pattern_token1,
      aux_sym_pattern_token2,
      sym_end_assertion,
      aux_sym_literal_character_token1,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [696] = 1,
    ACTIONS(191), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [706] = 1,
    ACTIONS(193), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [716] = 1,
    ACTIONS(195), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [726] = 1,
    ACTIONS(197), 7,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [736] = 1,
    ACTIONS(98), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [745] = 2,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(199), 5,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_RBRACK,
  [756] = 1,
    ACTIONS(177), 6,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [765] = 1,
    ACTIONS(203), 5,
      anon_sym_DOT,
      anon_sym_PERCENT,
      aux_sym_escape_sequence_token1,
      sym_set_character,
      anon_sym_RBRACK,
  [773] = 2,
    ACTIONS(205), 1,
      aux_sym_character_class_token1,
    ACTIONS(207), 1,
      aux_sym_set_escaped_token1,
  [780] = 2,
    ACTIONS(209), 1,
      aux_sym_character_class_token1,
    ACTIONS(211), 1,
      aux_sym_escaped_character_token1,
  [787] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [791] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [795] = 1,
    ACTIONS(217), 1,
      sym_set_character,
  [799] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [803] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [807] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
  [811] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
  [815] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [819] = 1,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 459,
  [SMALL_STATE(20)] = 483,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 531,
  [SMALL_STATE(23)] = 546,
  [SMALL_STATE(24)] = 561,
  [SMALL_STATE(25)] = 576,
  [SMALL_STATE(26)] = 591,
  [SMALL_STATE(27)] = 606,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 636,
  [SMALL_STATE(30)] = 651,
  [SMALL_STATE(31)] = 666,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 696,
  [SMALL_STATE(34)] = 706,
  [SMALL_STATE(35)] = 716,
  [SMALL_STATE(36)] = 726,
  [SMALL_STATE(37)] = 736,
  [SMALL_STATE(38)] = 745,
  [SMALL_STATE(39)] = 756,
  [SMALL_STATE(40)] = 765,
  [SMALL_STATE(41)] = 773,
  [SMALL_STATE(42)] = 780,
  [SMALL_STATE(43)] = 787,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 795,
  [SMALL_STATE(46)] = 799,
  [SMALL_STATE(47)] = 803,
  [SMALL_STATE(48)] = 807,
  [SMALL_STATE(49)] = 811,
  [SMALL_STATE(50)] = 815,
  [SMALL_STATE(51)] = 819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_group_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set_content, 1, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_character, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_character, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_character, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_character, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_character, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_set, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_group, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_group, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_sequence, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_class, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_escaped, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_any, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_set_content_repeat1, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

TS_PUBLIC const TSLanguage *tree_sitter_lua_patterns(void) {
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
