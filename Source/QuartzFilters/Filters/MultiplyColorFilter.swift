//
//  Created by ktiays on 2026/1/23.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol MultiplyColor: AnyObject {

    var color: CGColor? { get set }
}

final class MultiplyColorFilter: QuartzFilter, MultiplyColor, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .multiplyColor)
        }
    }

    @FilterProperty(\.color) var color: CGColor?

    var description: String {
        """
        MultiplyColorFilter(
            color: \(color)
        )
        """
    }
}

extension QuartzFilter {

    public static func multiplyColor(current: NSObject? = nil) -> any QuartzFilter & MultiplyColor {
        MultiplyColorFilter(caFilter: current)
    }
}
