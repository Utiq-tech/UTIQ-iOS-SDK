// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "utiqSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "utiqSDK",
            targets: ["utiqSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "utiqSDK",
            path: "./utiqSDK.xcframework"
        ),
    ]
)
