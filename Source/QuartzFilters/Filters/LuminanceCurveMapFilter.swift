//
//  Created by ktiays on 2025/10/27.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol LuminanceCurveMap: AnyObject {

    var values: [CGFloat] { get set }
    
    var amount: Double { get set }
}

final class LuminanceCurveMapFilter: QuartzFilter, LuminanceCurveMap, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .luminanceCurveMap)
        }
    }

    @FilterProperty(\.values) var values
    
    @FilterProperty(\.amount) var amount: Double

    var description: String {
        """
        LuminanceCurveMapFilter(
            values: \(values),
            amount: \(amount)
        )
        """
    }
}

extension QuartzFilter {

    public static func luminanceCurveMap(current: NSObject? = nil) -> any QuartzFilter & LuminanceCurveMap {
        LuminanceCurveMapFilter(caFilter: current)
    }
}
