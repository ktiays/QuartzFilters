//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFVariableBlurFilter_h
#define CQFVariableBlurFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(VariableBlur)
@protocol CQFVariableBlur <NSObject>

/// The blur radius applied by the filter.
CQF_FP_DECL(radius);

/// The mask image that controls where blurring is applied.
///
/// The mask determines the intensity of blurring at each pixel location.
CQF_FP_DECL(maskImage);

/// A Boolean value that indicates whether dithering is enabled to reduce banding artifacts.
CQF_FP_DECL(dither);

/// A Boolean value that indicates whether edges are normalized during the blur operation.
CQF_FP_DECL(normalizeEdges);

CQF_FP_DECL(normalizeEdgesTransparent) API_AVAILABLE(ios(17.0), macos(14.0));

CQF_FP_DECL(sourceSublayerName) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(fade) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(blurFillBlurRadius) API_AVAILABLE(ios(27.0), macos(27.0), tvos(27.0), watchos(27.0), visionos(27.0));

CQF_FP_DECL(blurFillDarkenOpacity) API_AVAILABLE(ios(27.0), macos(27.0), tvos(27.0), watchos(27.0), visionos(27.0));

CQF_FP_DECL(blurFillLightenOpacity) API_AVAILABLE(ios(27.0), macos(27.0), tvos(27.0), watchos(27.0), visionos(27.0));

CQF_FP_DECL(blurFillNormalOpacity) API_AVAILABLE(ios(27.0), macos(27.0), tvos(27.0), watchos(27.0), visionos(27.0));

@end

@interface CQFQuartzFilter (CQFVariableBlur)

+ (CQFQuartzFilter<CQFVariableBlur> *)variableBlurFilter;

+ (CQFQuartzFilter<CQFVariableBlur> * _Nullable)variableBlurFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(variableBlur(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVariableBlurFilter_h */
