// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "UTIQ",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "UTIQ",
            targets: ["UTIQ"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "UTIQ",
            path: "./UTIQ.xcframework"
        ),
    ]
)
