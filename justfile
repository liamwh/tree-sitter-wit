#!/usr/bin/env -S just --justfile
# ^ A shebang isn't required, but allows a justfile to be executed
#   like a script, with `./justfile test`, for example.

green := "\\033[32m"
yellow := "\\033[33m"
reset := "\\033[0m"

# Show available commands
default:
    @just --list --justfile {{ justfile() }}

# regenerate tree-sitter bindings
regen:
    rm CMakeLists.txt Makefile Package.swift binding.gyp go.mod pyproject.toml setup.py || true
    rm -rf bindings
    tree-sitter init --update

alias gen := generate

# Generate the c parser from the grammar.
generate:
    tree-sitter generate

# Build to Wasm
build:
    tree-sitter build --wasm --output ./build/parser.wasm .

# Test the parser
test *args: generate
    tree-sitter test {{ args }}

[private]
remove-local:
    rm -rf ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit

# Install the queries locally
install-local: remove-local
    cp -r ./queries ~/.local/share/nvim/lazy/nvim-treesitter/queries/wit

fmt:
    eslint --fix grammar.js
    # topiary fmt ./queries/*.scm
    # topiary fmt ./examples/*.wit
    just --fmt --unstable
    nixfmt flake.nix shell.nix

alias fmt-queries := format-queries

# Format the queries
format-queries:
    nvim -l scripts/format-queries.lua

# Lint all the things
lint:
    npx eslint grammar.js
    typos
    just --fmt --unstable --check

# Format the grammar
format-grammar:
    npx eslint --fix grammar.js

fmt: format-grammar
    just --fmt --unstable

# updates node package.json to latest available
update:
    pnpm outdated --format json | jq  'keys[]' | xargs pnpm update
    cargo upgrade && cargo update

# updates node package.json to latest available
outdated:
    @printf '{{ yellow }}=={{ reset }}NPM{{ yellow }}=={{ reset }}\n'
    npx outdated -y || true # `npoutdated` returns exit code 1 on finding outdated stuff ?!
    @printf '{{ yellow }}={{ reset }}Cargo{{ yellow }}={{ reset }}\n'
    cargo outdated -d 1
    @printf '{{ yellow }}======={{ reset }}\n'
