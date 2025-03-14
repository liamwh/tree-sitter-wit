import XCTest
import SwiftTreeSitter
import TreeSitterWit

final class TreeSitterWitTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_wit())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Wit grammar")
    }
}
