//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol ColorMatrixProtocol: AnyObject {

    /// The color matrix applied by the filter.
    var colorMatrix: ColorMatrix { get set }
}

final class ColorMatrixFilter: QuartzFilter, ColorMatrixProtocol, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .colorMatrix)
        }
    }

    @FilterProperty(\.colorMatrix) var colorMatrix: ColorMatrix

    var description: String {
        """
        ColorMatrixFilter(
            colorMatrix: \(colorMatrix.description)
        )
        """
    }
}

extension QuartzFilter {

    public static func colorMatrix(current: NSObject? = nil) -> any QuartzFilter & ColorMatrixProtocol {
        ColorMatrixFilter(caFilter: current)
    }
}
