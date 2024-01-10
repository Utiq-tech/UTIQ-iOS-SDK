// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "UtiqSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "UtiqSDK",
            targets: ["UtiqSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "UtiqSDK",
            path: "./UtiqSDK.xcframework"
        ),
    ]
)
