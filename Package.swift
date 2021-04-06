// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KochavaTracker",
    platforms: [
        .iOS("10.3"),
        .macOS("10.14"),
        .tvOS("10.2"),
        .watchOS("3.2")
    ],
    products:
    [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KochavaTracker",
            targets:
            [
                "KochavaTracker"
            ]
        ),
    ],
    dependencies:
    [
        // Dependencies declare other packages that this package depends on.
        // .package(name: "KochavaCore", path: "../Apple-SwiftPackage-KochavaCore"),
        .package(
            name: "KochavaCore",
            url: "https://github.com/Kochava/Apple-SwiftPackage-KochavaCore",
            from: "4.5.0"
        ),
    ],
    targets:
    [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "KochavaTracker",
            path: "KochavaTracker.xcframework"
        ),
        .testTarget(
            name: "KochavaTrackerTests",
            dependencies:
            [
                "KochavaCore",
                "KochavaTracker"
            ]
        ),
    ]
)
