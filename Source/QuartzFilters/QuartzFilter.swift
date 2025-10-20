//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import CQuartzFilters
import ObjectiveC
import SwiftyRuntime

public typealias ColorMatrix = CQuartzFilters.CQFColorMatrix

extension ColorMatrix {
    
    public static var identity: Self { CQFColorMatrixIdentity }
}

open class QuartzFilter {

    let caFilter: NSObject?

    init(type: FilterType) {
        if let filterClass = NSClassFromString("CAFilter") {
            let makerFn = #objcClassMethod("filterWithName:", of: filterClass, as: ((String) -> NSObject?).self)
            caFilter = makerFn?(type.rawValue)
        } else {
            caFilter = nil
        }
    }

    public static func vibrantColorMatrix() -> any QuartzFilter & VibrantColorMatrix {
        VibrantColorMatrixFilter()
    }
}
