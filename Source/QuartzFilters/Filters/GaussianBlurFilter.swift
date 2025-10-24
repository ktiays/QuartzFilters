//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import QuartzCore
import SwiftyRuntime

public protocol GaussianBlur: AnyObject {

    /// The blur radius applied by the filter.
    var radius: Double { get set }
}

final class GaussianBlurFilter: QuartzFilter, GaussianBlur, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .gaussianBlur)
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

    var description: String {
        """
        GaussianBlurFilter(
            radius: \(radius)
        )
        """
    }
}

extension QuartzFilter {

    public static func gaussianBlur(current: NSObject? = nil) -> any QuartzFilter & GaussianBlur {
        GaussianBlurFilter(caFilter: current)
    }
}
