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
    let quality = QualityKey.self
    let amount = AmountKey.self
    let values = ValuesKey.self
    let color = ColorKey.self
    let overlayOpacity = OverlayOpacityKey.self
    let colorMap = ColorMapKey.self
    let hardEdges = HardEdgesKey.self
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

struct QualityKey: FilterPropertyKey {
    
    typealias Value = String?
    
    static var key: String { "inputQuality" }
}

struct AmountKey: FilterPropertyKey {
    
    typealias Value = Double
    
    static var key: String { "inputAmount" }
}

struct ValuesKey: FilterPropertyKey {
    
    typealias Value = [CGFloat]
    
    static var key: String { "inputValues" }
}

struct ColorKey: FilterPropertyKey {
    
    typealias Value = CGColor?
    
    static var key: String { "inputColor" }
}

struct OverlayOpacityKey: FilterPropertyKey {
    
    typealias Value = Double
    
    static var key: String { "inputOverlayOpacity" }
}

struct ColorMapKey: FilterPropertyKey {
    
    typealias Value = CGImage?
    
    static var key: String { "inputColorMap" }
}

struct HardEdgesKey: FilterPropertyKey {
    
    typealias Value = Bool
    
    static var key: String { "inputHardEdges" }
}
