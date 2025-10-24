//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import Foundation
import SwiftyRuntime

open class QuartzFilter {

    public let caFilter: NSObject?

    public init(type: FilterType) {
        if let filterClass = NSClassFromString("CAFilter") {
            let makerFn = #objcClassMethod("filterWithName:", of: filterClass, as: ((String) -> NSObject?).self)
            caFilter = makerFn?(type.rawValue)
        } else {
            caFilter = nil
        }
    }
    
    public init(caFilter: NSObject?) {
        if let filter = caFilter {
            assert(NSStringFromClass(type(of: filter)) == "CAFilter")
        }
        self.caFilter = caFilter
    }
}
