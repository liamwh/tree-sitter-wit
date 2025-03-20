#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <wctype.h>

enum TokenType {
    ERROR_SENTINEL
};

typedef struct {

} Scanner;

void *tree_sitter_wit_external_scanner_create() { return ts_calloc(1, sizeof(Scanner)); }

void tree_sitter_wit_external_scanner_destroy(void *payload) { ts_free((Scanner *)payload); }

unsigned tree_sitter_wit_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    return 1;
}

void tree_sitter_wit_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }


bool tree_sitter_wit_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    // The documentation states that if the lexical analysis fails for some reason
    // they will mark every state as valid and pass it to the external scanner
    // However, we can't do anything to help them recover in that case so we
    // should just fail.
    /*
      link: https://tree-sitter.github.io/tree-sitter/creating-parsers/4-external-scanners.html
      If a syntax error is encountered during regular parsing, Tree-sitter’s
      first action during error recovery will be to call the external scanner’s
      scan function with all tokens marked valid. The scanner should detect this
      case and handle it appropriately. One simple method of detection is to add
      an unused token to the end of the externals array, for example

      externals: $ => [$.token1, $.token2, $.error_sentinel],

      then check whether that token is marked valid to determine whether
      Tree-sitter is in error correction mode.
    */
    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
    }

    Scanner *scanner = (Scanner *)payload;
    // ...

    return false;
}

