# Tree Sitter Grammar for WebAssembly Interface Types (.wit) files

## Features

- [X] Primitive Types: (`bool`, `s8`, `u8`, `float32`...)
- [X] Container Types: (`tuple`, `list`, `option`, `result`)
- [X] Named types: (`record`, `enum`, `variant`, `flags`, `func`, `resource`)
- [ ] Imports/Exports (work-in-progress): (`include`, `use`, `using`, `import`, `export`, `world`, `.`, `package`)
- [ ] Modifiers / Resource Keywords (work-in-progress): (`constructor`, `static`, `self`, `borrow`, `owned`)

## Contributing

The docs on creating tree-sitter grammars / parsers can be [found here](https://tree-sitter.github.io/tree-sitter/creating-parsers).

In summary, you need to create tests in `test/corpus`, then modify the `grammar.js` file to ensure it passes. You can use the `justfile` command to re-generate and run the tests:

```sh
just test
```
