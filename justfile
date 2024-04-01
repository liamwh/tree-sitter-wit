#!/usr/bin/env -S just --justfile
# ^ A shebang isn't required, but allows a justfile to be executed
#   like a script, with `./justfile test`, for example.

# Show available commands
default:
    @just --list --justfile {{justfile()}}

# Generate the c parser from the grammar.
generate:
    tree-sitter generate


# Build to wasm
build:
    tree-sitter build --wasm --output ./build/parser.wasm tree-sitter-wit

# Test the parser
test: generate
    tree-sitter test
