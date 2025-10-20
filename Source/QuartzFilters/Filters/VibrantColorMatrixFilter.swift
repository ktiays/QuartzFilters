//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import QuartzCore

public protocol VibrantColorMatrix: AnyObject {

    var colorMatrix: ColorMatrix { get set }

    var isClamped: Bool { get set }

    var isClampPreserveHue: Bool { get set }

    var backdropAware: Bool { get set }
}

final class VibrantColorMatrixFilter: QuartzFilter, VibrantColorMatrix {

    init() {
        super.init(type: .vibrantColorMatrix)
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
    
    var isClamped: Bool {
        get {
            caFilter?.value(forKey: "inputClamped") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputClamped")
        }
    }
    
    var isClampPreserveHue: Bool {
        get {
            caFilter?.value(forKey: "inputClampPreserveHue") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputClampPreserveHue")
        }
    }
    
    var backdropAware: Bool {
        get {
            caFilter?.value(forKey: "inputBackdropAware") as? Bool ?? false
        }
        set {
            caFilter?.setValue(newValue, forKey: "inputBackdropAware")
        }
    }
}
