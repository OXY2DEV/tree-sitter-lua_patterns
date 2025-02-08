// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterLuaPatterns",
    products: [
        .library(name: "TreeSitterLuaPatterns", targets: ["TreeSitterLuaPatterns"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterLuaPatterns",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterLuaPatternsTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterLuaPatterns",
            ],
            path: "bindings/swift/TreeSitterLuaPatternsTests"
        )
    ],
    cLanguageStandard: .c11
)
