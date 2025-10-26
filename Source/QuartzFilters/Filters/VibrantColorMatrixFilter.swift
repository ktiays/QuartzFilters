//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import QuartzCore

public protocol VibrantColorMatrix: AnyObject {

    var colorMatrix: ColorMatrix { get set }

    var clamp: CGFloat { get set }

    var clampPreserveHue: CGFloat { get set }

    @available(iOS 26.0, *)
    var backdropAware: CGFloat { get set }
}

final class VibrantColorMatrixFilter: QuartzFilter, VibrantColorMatrix, CustomStringConvertible {

    override init(caFilter: NSObject?) {
        if let caFilter {
            super.init(caFilter: caFilter)
        } else {
            super.init(type: .vibrantColorMatrix)
        }
    }

    @FilterProperty(\.colorMatrix) var colorMatrix: ColorMatrix

    @FilterProperty(\.clamp) var clamp: CGFloat

    @FilterProperty(\.clampPreserveHue) var clampPreserveHue: CGFloat

    @FilterProperty(\.backdropAware) var backdropAware: CGFloat
    
    var description: String {
        let backdropAwareDescription: String =
            if #available(iOS 26.0, *) {
                "\(backdropAware)"
            } else {
                "(Not available)"
            }
        return """
        VibrantColorMatrixFilter(
            colorMatrix: \(colorMatrix), 
            clamp: \(clamp), 
            clampPreserveHue: \(clampPreserveHue), 
            backdropAware: \(backdropAwareDescription)
        )
        """
    }
}

extension QuartzFilter {

    public static func vibrantColorMatrix(current: NSObject? = nil) -> any QuartzFilter & VibrantColorMatrix {
        VibrantColorMatrixFilter(caFilter: current)
    }
}
