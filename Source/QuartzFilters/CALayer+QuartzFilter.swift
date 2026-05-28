//
//  Created by ktiays on 2025/10/21.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import ObjectiveC
import QuartzCore

private var quartzFiltersKey: UInt8 = 0

extension CALayer {

    public var quartzFilters: [QuartzFilter]? {
        get {
            return objc_getAssociatedObject(self, &quartzFiltersKey) as? [QuartzFilter]
        }
        set {
            objc_setAssociatedObject(self, &quartzFiltersKey, newValue, .OBJC_ASSOCIATION_RETAIN_NONATOMIC)

            if let filters = newValue {
                self.filters = filters.compactMap { $0.caFilter }
            } else {
                self.filters = nil
            }
        }
    }
}
