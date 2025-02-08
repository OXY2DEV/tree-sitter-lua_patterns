import XCTest
import SwiftTreeSitter
import TreeSitterLuaPatterns

final class TreeSitterLuaPatternsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lua_patterns())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading LuaPatterns grammar")
    }
}
