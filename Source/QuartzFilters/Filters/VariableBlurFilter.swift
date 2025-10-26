//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol VariableBlur: AnyObject {

    /// The blur radius applied by the filter.
    var radius: Double { get set }

    /// The mask image that controls where blurring is applied.
    ///
    /// The mask determines the intensity of blurring at each pixel location.
    var maskImage: CGImage? { get set }

    /// A Boolean value that indicates whether dithering is enabled to reduce banding artifacts.
    var dither: Bool { get set }

    /// A Boolean value that indicates whether edges are normalized during the blur operation.
    var normalizeEdges: Bool { get set }

    @available(iOS 26.0, *)
    var sourceSublayerName: String? { get set }

    @available(iOS 26.0, *)
    var fade: Bool { get set }
}

final class VariableBlurFilter: QuartzFilter, VariableBlur, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .variableBlur)
        }
    }

    var radius: Double {
        get {
            caFilter?.value(forKey: "inputRadius") as? Double ?? 0
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputRadius")
        }
    }

    var maskImage: CGImage? {
        get {
            guard let value = caFilter?.value(forKey: "inputMaskImage") else {
                return nil
            }
            return unsafeBitCast(value, to: CGImage?.self)
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputMaskImage")
        }
    }

    var dither: Bool {
        get {
            caFilter?.value(forKey: "inputDither") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputDither")
        }
    }

    var normalizeEdges: Bool {
        get {
            caFilter?.value(forKey: "inputNormalizeEdges") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputNormalizeEdges")
        }
    }

    var sourceSublayerName: String? {
        get {
            caFilter?.value(forKey: "inputSourceSublayerName") as? String
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputSourceSublayerName")
        }
    }

    var fade: Bool {
        get {
            caFilter?.value(forKey: "inputFade") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputFade")
        }
    }

    var description: String {
        let fadeDescription =
            if #available(iOS 26.0, *) {
                "\(fade)"
            } else {
                "(Not available)"
            }
        return """
            VariableBlurFilter(
                radius: \(radius),
                maskImage: \(maskImage != nil ? "\(maskImage!)" : "nil"),
                dither: \(dither),
                normalizeEdges: \(normalizeEdges),
                sourceSublayerName: \(sourceSublayerName ?? "nil"),
                fade: \(fadeDescription)
            )
            """
    }
}

extension QuartzFilter {

    public static func variableBlur(current: NSObject? = nil) -> any QuartzFilter & VariableBlur {
        VariableBlurFilter(caFilter: current)
    }
}
