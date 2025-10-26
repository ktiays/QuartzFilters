//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import QuartzCore

public protocol VibrantColorMatrix: AnyObject {

    var colorMatrix: ColorMatrix { get set }

    var clamp: CGFloat { get set }

    var clampPreserveHue: CGFloat { get set }

    @available(iOS 26.0, *)
    var backdropAware: CGFloat { get set }
}

final class VibrantColorMatrixFilter: QuartzFilter, VibrantColorMatrix, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .vibrantColorMatrix)
        }
    }

    var colorMatrix: ColorMatrix {
        get {
            if let nsValue = caFilter?.value(forKey: "inputColorMatrix") as? NSValue {
                return nsValue.colorMatrixValue
            }
            return .identity
        }
        set {
            let nsValue = NSValue.fromColorMatrix(newValue)
            caFilter?.setValue(nsValue, forKey: "inputColorMatrix")
        }
    }

    var clamp: CGFloat {
        get {
            caFilter?.value(forKey: "inputClamp") as? CGFloat ?? 0
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputClamp")
        }
    }

    var clampPreserveHue: CGFloat {
        get {
            caFilter?.value(forKey: "inputClampPreserveHue") as? CGFloat ?? 0
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputClampPreserveHue")
        }
    }

    var backdropAware: CGFloat {
        get {
            caFilter?.value(forKey: "inputBackdropAware") as? CGFloat ?? 0
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputBackdropAware")
        }
    }

    var description: String {
        let backdropAwareDescription: String =
            if #available(iOS 26.0, *) {
                "\(backdropAware)"
            } else {
                "Not Available"
            }
        return """
        VibrantColorMatrixFilter(
            colorMatrix: \(colorMatrix), 
            clamp: \(clamp), 
            clampPreserveHue: \(clampPreserveHue), 
            backdropAware: \(backdropAwareDescription)
        )
        """
    }
}

extension QuartzFilter {

    public static func vibrantColorMatrix(current: NSObject? = nil) -> any QuartzFilter & VibrantColorMatrix {
        VibrantColorMatrixFilter(caFilter: current)
    }
}
