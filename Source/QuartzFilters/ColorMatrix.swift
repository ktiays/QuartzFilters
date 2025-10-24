//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
// 

import CQuartzFilters

public typealias ColorMatrix = CQuartzFilters.CQFColorMatrix

extension ColorMatrix {
    
    public static var identity: Self { CQFColorMatrixIdentity }
}

extension ColorMatrix: CustomStringConvertible {
    
    public var description: String {
        """
        [ \(m11) \(m12) \(m13) \(m14) \(m15) ]
        [ \(m21) \(m22) \(m23) \(m24) \(m25) ]
        [ \(m31) \(m32) \(m33) \(m34) \(m35) ]
        [ \(m41) \(m42) \(m43) \(m44) \(m45) ]
        """
    }
}
