//! This crate provides Wit language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_wit::language()).expect("Error loading Wit grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_wit() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_wit() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

// Uncomment these to include any queries that this grammar contains

pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");

/// A Tree Sitter query for finding all foldable nodes.
///
/// The folds are split into three categories; `@imports` for imports,
/// `@comments` for comments, and `@normal` for essentially anything else that
/// you would normally want to fold.
pub const FOLDING_QUERY: &str = include_str!("../../queries/folding.scm");

#[cfg(test)]
mod tests {
    use std::path::Path;

    use super::*;

    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&language())
            .expect("Error loading Wit grammar");
    }

    #[test]
    fn all_queries_are_valid() {
        let queries_dir = project_root().join("queries");
        let lang = language();

        for entry in queries_dir.read_dir().unwrap() {
            let path = entry.unwrap().path();

            if path.extension() != Some("scm".as_ref()) {
                continue;
            }

            let query = std::fs::read_to_string(&path).unwrap();
            let _ = tree_sitter::Query::new(&lang, &query).unwrap();
        }
    }

    fn project_root() -> &'static Path {
        Path::new(env!("CARGO_MANIFEST_DIR"))
            .ancestors()
            .find(|p| p.join(".git").exists())
            .expect("Unable to find the project's root directory")
    }
}
