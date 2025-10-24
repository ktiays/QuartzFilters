//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol ColorMatrixProtocol: AnyObject {

    /// The color matrix applied by the filter.
    var colorMatrix: ColorMatrix? { get set }
}

final class ColorMatrixFilter: QuartzFilter, ColorMatrixProtocol, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .colorMatrix)
        }
    }

    var colorMatrix: ColorMatrix? {
        get {
            (caFilter?.value(forKey: "inputColorMatrix") as? NSValue)?.colorMatrixValue
        }
        set {
            if let newValue {
                caFilter?.setValue(NSValue.fromColorMatrix(newValue), forKey: "inputColorMatrix")
            } else {
                caFilter?.setValue(nil, forKey: "inputColorMatrix")
            }
        }
    }

    var description: String {
        """
        ColorMatrixFilter(
            colorMatrix: \(colorMatrix?.description ?? "nil")
        )
        """
    }
}

extension QuartzFilter {

    public static func colorMatrix(current: NSObject? = nil) -> any QuartzFilter & ColorMatrixProtocol {
        ColorMatrixFilter(caFilter: current)
    }
}
