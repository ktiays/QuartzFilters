// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "QuartzFilters",
    platforms: [
        .iOS(.v17),
        .macOS(.v14),
    ],
    products: [
        .library(name: "QuartzFilters", targets: ["QuartzFilters"])
    ],
    dependencies: [
        .package(url: "https://github.com/Helixform/SwiftyRuntime.git", branch: "main"),
    ],
    targets: [
        .target(
            name: "QuartzFilters",
            dependencies: [
                .product(name: "SwiftyRuntime", package: "SwiftyRuntime"),
                "CQuartzFilters",
            ]
        ),
        .target(name: "CQuartzFilters")
    ]
)
