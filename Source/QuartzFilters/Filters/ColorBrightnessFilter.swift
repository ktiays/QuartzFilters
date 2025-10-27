//
//  Created by ktiays on 2025/10/27.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol ColorBrightness: AnyObject {

    /// The brightness amount applied by the filter.
    var amount: Double { get set }
}

final class ColorBrightnessFilter: QuartzFilter, ColorBrightness, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .colorBrightness)
        }
    }

    @FilterProperty(\.amount) var amount: Double

    var description: String {
        """
        ColorBrightnessFilter(
            amount: \(amount)
        )
        """
    }
}

extension QuartzFilter {

    public static func colorBrightness(current: NSObject? = nil) -> any QuartzFilter & ColorBrightness {
        ColorBrightnessFilter(caFilter: current)
    }
}
