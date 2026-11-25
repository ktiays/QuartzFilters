# QuartzFilters

A type-safe Swift and Objective-C wrapper for Core Animation's built-in `CAFilter`s, complete with compile-time iOS and macOS availability annotations.

> [!NOTE]
> `QuartzFilters` wraps private Core Animation (`CAFilter`) APIs. Use with care if distributing through the App Store.

## Requirements

- iOS 15.0+ / macOS 12.0+
- Swift 5.10+

## Installation

### Swift Package Manager

Add `QuartzFilters` to your `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/ktiays/QuartzFilters.git", from: "2.0.0"),
]
```

Then add `QuartzFilters` to your target's dependencies:

```swift
.target(
    name: "YourTarget",
    dependencies: [
        .product(name: "QuartzFilters", package: "QuartzFilters"),
    ]
)
```

Or in Xcode: **File → Add Package Dependencies…** and enter `https://github.com/ktiays/QuartzFilters.git`.

## Usage

### Applying Filters to a `CALayer`

Create strongly typed filters through factory methods on `QuartzFilter`, configure their properties directly, and assign them via `CALayer.quartzFilters`:

```swift
import QuartzCore
import QuartzFilters

let blur = QuartzFilter.gaussianBlur()
blur.radius = 12
blur.normalizeEdges = true

let saturate = QuartzFilter.colorSaturate()
saturate.amount = 1.8

layer.quartzFilters = [blur, saturate]
```

Remove all filters by setting `quartzFilters` to `nil` (or an empty array):

```swift
layer.quartzFilters = nil
```

### Wrapping an Existing `CAFilter`

If you already have a `CAFilter` instance (for example, from an existing `CALayer.filters` array), wrap it with the typed `(with:)` initializer. It returns `nil` if the object is not a matching filter type:

```swift
if let rawFilter = layer.filters?.first,
   let blur = QuartzFilter.gaussianBlur(with: rawFilter) {
    blur.radius = 20
}
```

### Using `ColorMatrix`

`ColorMatrix` provides a `4 × 5` matrix value type with `.identity` and `CIVector` accessors:

```swift
var matrix = ColorMatrix.identity
matrix.m11 = 0.8
matrix.m22 = 0.8
matrix.m33 = 0.8

let colorMatrix = QuartzFilter.colorMatrix()
colorMatrix.colorMatrix = matrix

layer.quartzFilters = [colorMatrix]
```

### Copying Filters

`QuartzFilter` conforms to `NSCopying` and `NSMutableCopying`, preserving the concrete filter type when copied:

```swift
if let copiedBlur = blur.copy() as? (QuartzFilter & GaussianBlur) {
    copiedBlur.radius = 24
}
```

### Handling OS Availability

Filters and properties introduced after iOS 15 / macOS 12 carry standard availability annotations, so the compiler guides you to guard them:

```swift
if #available(iOS 26.0, macOS 26.0, *) {
    let glass = QuartzFilter.glassBackground()
    glass.blurRadius = 20
    layer.quartzFilters = [glass]
}
```

### Objective-C

Import the `CQuartzFilters` module directly:

```objc
@import CQuartzFilters;

CQFQuartzFilter<CQFGaussianBlur> *blur = [CQFQuartzFilter gaussianBlurFilter];
blur.radius = 12.0;
blur.normalizeEdges = YES;

layer.filters = @[blur.caFilter];
```

## Supported Filters

All filters below are available on **iOS 15.0+ and macOS 12.0+** unless noted otherwise.

### Blur & Resize

| Filter | Swift Factory | Availability |
|---|---|---|
| Gaussian Blur | `QuartzFilter.gaussianBlur()` | iOS 15+ / macOS 12+ (`normalizeEdgesTransparent`: iOS 17+ / macOS 14+) |
| Variable Blur | `QuartzFilter.variableBlur()` | iOS 15+ / macOS 12+ (`normalizeEdgesTransparent`: iOS 17+ / macOS 14+; `fade`, `sourceSublayerName`: 26+; `blurFill*`: 27+) |
| Lanczos Resize | `QuartzFilter.lanczosResize()` | iOS 15+ / macOS 12+ |

### Color & Tone Adjustment

| Filter | Swift Factory | Availability |
|---|---|---|
| Color Add | `QuartzFilter.colorAdd()` | iOS 15+ / macOS 12+ |
| Color Brightness | `QuartzFilter.colorBrightness()` | iOS 15+ / macOS 12+ |
| Color Contrast | `QuartzFilter.colorContrast()` | iOS 15+ / macOS 12+ |
| Color Hue Rotate | `QuartzFilter.colorHueRotate()` | iOS 15+ / macOS 12+ |
| Color Invert | `QuartzFilter.colorInvert()` | iOS 15+ / macOS 12+ |
| Color Invert (Display Aware) | `QuartzFilter.colorInvertDisplayAware()` | iOS 16.0+ / macOS 27.0+ |
| Color Matrix | `QuartzFilter.colorMatrix()` | iOS 15+ / macOS 12+ (`premultipliedValues`: iOS 16+ / macOS 13+) |
| Color Monochrome | `QuartzFilter.colorMonochrome()` | iOS 15+ / macOS 12+ |
| Color Saturate | `QuartzFilter.colorSaturate()` | iOS 15+ / macOS 12+ |
| Color Subtract | `QuartzFilter.colorSubtract()` | iOS 15+ / macOS 12+ |
| Multiply Color | `QuartzFilter.multiplyColor()` | iOS 15+ / macOS 12+ |
| Average Color | `QuartzFilter.averageColor()` | iOS 15+ / macOS 12+ |
| Bias | `QuartzFilter.bias()` | iOS 15+ / macOS 12+ |
| Curves | `QuartzFilter.curves()` | iOS 15+ / macOS 12+ |
| LUT | `QuartzFilter.lut()` | iOS 16.0+ / macOS 13.0+ |

### Alpha, Luminance & EDR / HDR

| Filter | Swift Factory | Availability |
|---|---|---|
| Alpha Threshold | `QuartzFilter.alphaThreshold()` | iOS 15+ / macOS 12+ |
| Alpha Smooth Threshold | `QuartzFilter.alphaSmoothThreshold()` | iOS 18.1+ / macOS 15.1+ |
| Compress Luminance | `QuartzFilter.compressLuminance()` | iOS 15+ / macOS 12+ |
| Limit Average Pixel Luminance | `QuartzFilter.limitAveragePixelLuminance()` | iOS 15+ / macOS 12+ |
| Luminance Curve Map | `QuartzFilter.luminanceCurveMap()` | iOS 15+ / macOS 12+ |
| Luminance Map | `QuartzFilter.luminanceMap()` | iOS 15+ / macOS 12+ |
| Luminance To Alpha | `QuartzFilter.luminanceToAlpha()` | iOS 15+ / macOS 12+ (`premultipliedValues`: iOS 16+ / macOS 13+) |
| EDR Gain | `QuartzFilter.edrGain()` | iOS 15+ / macOS 12+ |
| EDR Gain Multiply | `QuartzFilter.edrGainMultiply()` | iOS 17.0+ / macOS 14.0+ (`adaptive`, `start`, `end`: 26+) |
| SDR Normalize | `QuartzFilter.sdrNormalize()` | iOS 15+ / macOS 12+ (`clamp`, `clampPreserveHue`: 26+) |
| SRL | `QuartzFilter.srl()` | iOS 15+ / macOS 12+ |

### Vibrancy

| Filter | Swift Factory | Availability |
|---|---|---|
| Vibrant Color Matrix | `QuartzFilter.vibrantColorMatrix()` | iOS 15+ / macOS 12+ (`backdropAware`, `clamp`, `clampPreserveHue`: 26+) |
| Vibrant Color Matrix Source Over | `QuartzFilter.vibrantColorMatrixSourceOver()` | iOS 15+ / macOS 12+ (`backdropAware`, `clamp`, `clampPreserveHue`: 26+) |
| Vibrant Dark | `QuartzFilter.vibrantDark()` | iOS 15+ / macOS 12+ |
| Vibrant Light | `QuartzFilter.vibrantLight()` | iOS 15+ / macOS 12+ |

### Glass & Visual Effects

| Filter | Swift Factory | Availability |
|---|---|---|
| Glass Background | `QuartzFilter.glassBackground()` | iOS 26.0+ / macOS 26.0+ (additional lighting/ring-shadow/aberration/blur-fill keys: 27+) |
| Glass Foreground | `QuartzFilter.glassForeground()` | iOS 26.0+ / macOS 26.0+ |
| Chromatic Aberration | `QuartzFilter.chromaticAberration()` | iOS 18.0+ / macOS 15.0+ (`extendEdges`: iOS 18.1+ / macOS 15.1+) |
| Chromatic Aberration Map | `QuartzFilter.chromaticAberrationMap()` | iOS 26.0+ / macOS 26.0+ |
| Displacement Map | `QuartzFilter.displacementMap()` | iOS 26.0+ / macOS 26.0+ |
| Distance Field | `QuartzFilter.distanceField()` | iOS 15+ / macOS 12+ |
| Meteor | `QuartzFilter.meteor()` | iOS 15+ / macOS 12+ |
| Opacity Pair | `QuartzFilter.opacityPair()` | iOS 15+ / macOS 12+ |
| Page Curl | `QuartzFilter.pageCurl()` | iOS 15+ / macOS 12+ |
| Home Affordance Base | `QuartzFilter.homeAffordanceBase()` | iOS 15+ (**unavailable on macOS**) |
