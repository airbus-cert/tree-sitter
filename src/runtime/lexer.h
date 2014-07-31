#ifndef RUNTIME_LEXER_H_
#define RUNTIME_LEXER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "tree_sitter/parser.h"

TSLexer ts_lexer_make();

#ifdef __cplusplus
}
#endif

#endif  // RUNTIME_LEXER_H_