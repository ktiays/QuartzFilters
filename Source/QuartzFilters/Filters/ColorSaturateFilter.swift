//
//  Created by ktiays on 2025/10/27.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol ColorSaturate: AnyObject {

    /// The saturation amount applied by the filter.
    var amount: Double { get set }
}

final class ColorSaturateFilter: QuartzFilter, ColorSaturate, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .colorSaturate)
        }
    }

    @FilterProperty(\.amount) var amount: Double

    var description: String {
        """
        ColorSaturateFilter(
            amount: \(amount)
        )
        """
    }
}

extension QuartzFilter {

    public static func colorSaturate(current: NSObject? = nil) -> any QuartzFilter & ColorSaturate {
        ColorSaturateFilter(caFilter: current)
    }
}
