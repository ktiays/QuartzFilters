//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
// 

import Foundation

public struct FilterType: RawRepresentable, Hashable, Sendable, ExpressibleByStringLiteral {
    
    public var rawValue: String
    
    public init(stringLiteral value: StringLiteralType) {
        self.rawValue = value
    }
    
    public init?(rawValue: String) {
        self.rawValue = rawValue
    }
    
    public static let alphaThreshold: Self = "alphaThreshold"
    public static let alphaSmoothThreshold: Self = "alphaSmoothThreshold"
    public static let multiplyColor: Self = "multiplyColor"
    public static let colorAdd: Self = "colorAdd"
    public static let colorSubtract: Self = "colorSubtract"
    public static let colorMonochrome: Self = "colorMonochrome"
    public static let colorMatrix: Self = "colorMatrix"
    public static let colorHueRotate: Self = "colorHueRotate"
    public static let colorSaturate: Self = "colorSaturate"
    public static let colorBrightness: Self = "colorBrightness"
    public static let colorContrast: Self = "colorContrast"
    public static let colorInvert: Self = "colorInvert"
    public static let colorInvertDisplayAware: Self = "colorInvertDisplayAware"
    public static let compressLuminance: Self = "compressLuminance"
    public static let opacityPair: Self = "opacityPair"
    public static let meteor: Self = "meteor"
    public static let srl: Self = "srl"
    public static let edrGain: Self = "edrGain"
    public static let edrGainMultiply: Self = "edrGainMultiply"
    public static let luminanceToAlpha: Self = "luminanceToAlpha"
    public static let bias: Self = "bias"
    public static let distanceField: Self = "distanceField"
    public static let gaussianBlur: Self = "gaussianBlur"
    public static let variableBlur: Self = "variableBlur"
    
    @available(iOS 26.0, *)
    public static let glassBackground: Self = "glassBackground"
    
    @available(iOS 26.0, *)
    public static let glassForeground: Self = "glassForeground"
    
    public static let chromaticAberration: Self = "chromaticAberration"
    public static let chromaticAberrationMap: Self = "chromaticAberrationMap"
    public static let displacementMap: Self = "displacementMap"
    public static let luminanceMap: Self = "luminanceMap"
    public static let luminanceCurveMap: Self = "luminanceCurveMap"
    public static let curves: Self = "curves"
    public static let averageColor: Self = "averageColor"
    public static let lanczosResize: Self = "lanczosResize"
    public static let pageCurl: Self = "pageCurl"
    public static let sdrNormalize: Self = "sdrNormalize"
    public static let vibrantDark: Self = "vibrantDark"
    public static let vibrantLight: Self = "vibrantLight"
    public static let vibrantColorMatrix: Self = "vibrantColorMatrix"
    public static let limitAveragePixelLuminance: Self = "limitAveragePixelLuminance"
    public static let lut: Self = "lut"
    public static let vibrantColorMatrixSourceOver: Self = "vibrantColorMatrixSourceOver"
}
