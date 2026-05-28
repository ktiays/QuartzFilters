// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "QuartzFilters",
    platforms: [
        .iOS(.v15),
        .macOS(.v12),
    ],
    products: [
        .library(name: "QuartzFilters", targets: ["QuartzFilters"])
    ],
    targets: [
        .target(
            name: "QuartzFilters",
            dependencies: [
                "CQuartzFilters",
            ]
        ),
        .target(
            name: "CQuartzFilters",
            cSettings: [
                .headerSearchPath("Internal"),
            ]
        ),
    ]
)
