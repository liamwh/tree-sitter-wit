# Tree Sitter Grammar for WebAssembly Interface Types (.wit) files

At the moment I don't intend to finish this due to lack of time, but please feel free to fork if you'd like to see it completed.

## Contributing

The docs on creating tree-sitter grammars / parsers can be [found here](https://tree-sitter.github.io/tree-sitter/creating-parsers).

In summary, you need to create tests in `test/corpus`, then modify the `grammar.js` file to ensure it passes. You can use the `justfile` command to re-generate and run the tests:

```sh
just test
```
