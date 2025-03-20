#!/usr/bin/env -S just --justfile
# ^ A shebang isn't required, but allows a justfile to be executed
#   like a script, with `./justfile test`, for example.

# Show available commands
default:
    @just --list --justfile {{justfile()}}

# Generate the c parser from the grammar.
generate:
    tree-sitter generate

# Build to Wasm
build:
    tree-sitter build --wasm --output ./build/parser.wasm .

# Test the parser
test: generate
    tree-sitter test

[private]
remove-local:
    rm -rf ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit

# Install the queries locally
install-local: remove-local
    cp -r ./queries ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit

# Format the queries
format-queries:
    nvim -l scripts/format-queries.lua

# Lint the grammar
lint-grammar:
    npx eslint grammar.js

# Format the grammar
fmt-grammar:
    npx eslint --fix grammar.js
