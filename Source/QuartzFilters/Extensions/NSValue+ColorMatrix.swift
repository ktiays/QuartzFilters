//
//  Created by ktiays on 2025/10/21.
//  Copyright (c) 2025 ktiays. All rights reserved.
// 

import Foundation
import SwiftyRuntime

extension NSValue {
    
    var colorMatrixValue: ColorMatrix {
        let fn = #objcMethod("CAColorMatrixValue", of: NSValue.self, as: (() -> ColorMatrix).self)
        return fn?(self)() ?? .identity
    }
    
    static func fromColorMatrix(_ matrix: ColorMatrix) -> NSValue? {
        let fn = #objcClassMethod("valueWithCAColorMatrix:", of: NSValue.self, as: ((ColorMatrix) -> NSValue).self)
        return fn?(matrix)
    }
}
