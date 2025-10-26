//
//  Created by ktiays on 2025/10/24.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import CQuartzFilters
import CoreImage

public typealias ColorMatrix = CQuartzFilters.CQFColorMatrix

extension ColorMatrix {

    @inlinable
    public static var identity: Self { CQFColorMatrixIdentity }

    @inlinable
    public var rVector: CIVector {
        CIVector(x: CGFloat(m11), y: CGFloat(m12), z: CGFloat(m13), w: CGFloat(m14))
    }

    @inlinable
    public var gVector: CIVector {
        CIVector(x: CGFloat(m21), y: CGFloat(m22), z: CGFloat(m23), w: CGFloat(m24))
    }

    @inlinable
    public var bVector: CIVector {
        CIVector(x: CGFloat(m31), y: CGFloat(m32), z: CGFloat(m33), w: CGFloat(m34))
    }

    @inlinable
    public var aVector: CIVector {
        CIVector(x: CGFloat(m41), y: CGFloat(m42), z: CGFloat(m43), w: CGFloat(m44))
    }

    @inlinable
    public var biasVector: CIVector {
        CIVector(x: CGFloat(m15), y: CGFloat(m25), z: CGFloat(m35), w: CGFloat(m45))
    }
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
