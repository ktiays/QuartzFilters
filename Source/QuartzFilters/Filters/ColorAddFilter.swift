//
//  Created by ktiays on 2026/1/23.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol ColorAdd: AnyObject {

    var color: CGColor? { get set }
}

final class ColorAddFilter: QuartzFilter, ColorAdd, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .colorAdd)
        }
    }

    @FilterProperty(\.color) var color: CGColor?

    var description: String {
        """
        ColorAddFilter(
            color: \(color)
        )
        """
    }
}

extension QuartzFilter {

    public static func colorAdd(current: NSObject? = nil) -> any QuartzFilter & ColorAdd {
        ColorAddFilter(caFilter: current)
    }
}
