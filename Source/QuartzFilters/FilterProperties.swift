//
//  Created by ktiays on 2025/10/26.
//  Copyright (c) 2025 ktiays. All rights reserved.
// 

import Foundation
import QuartzCore

struct FilterProperties {
    
    let sourceSublayerName = SourceSublayerNameKey.self
    let colorMatrix = ColorMatrixKey.self
    let radius = RadiusKey.self
    let maskImage = MaskImageKey.self
    let dither = DitherKey.self
    let normalizeEdges = NormalizeEdgesKey.self
    let fade = FadeKey.self
    let clamp = ClampKey.self
    let clampPreserveHue = ClampPreserveHueKey.self
    let backdropAware = BackdropAwareKey.self
}

struct SourceSublayerNameKey: FilterPropertyKey {
    
    typealias Value = String?
    
    static var key: String { "inputSourceSublayerName" }
}

struct ColorMatrixKey: FilterPropertyKey {
    
    typealias Value = ColorMatrix
    
    static var key: String { "inputColorMatrix" }
}

struct RadiusKey: FilterPropertyKey {
    
    typealias Value = Double
    
    static var key: String { "inputRadius" }
}

struct MaskImageKey: FilterPropertyKey {
    
    typealias Value = CGImage?
    
    static var key: String { "inputMaskImage" }
}

struct DitherKey: FilterPropertyKey {
    
    typealias Value = Bool
    
    static var key: String { "inputDither" }
}

struct NormalizeEdgesKey: FilterPropertyKey {
    
    typealias Value = Bool
    
    static var key: String { "inputNormalizeEdges" }
}

struct FadeKey: FilterPropertyKey {
    
    typealias Value = Bool
    
    static var key: String { "inputFade" }
}

struct ClampKey: FilterPropertyKey {
    
    typealias Value = CGFloat
    
    static var key: String { "inputClamp" }
}

struct ClampPreserveHueKey: FilterPropertyKey {
    
    typealias Value = CGFloat
    
    static var key: String { "inputClampPreserveHue" }
}

struct BackdropAwareKey: FilterPropertyKey {
    
    typealias Value = CGFloat
    
    static var key: String { "inputBackdropAware" }
}
