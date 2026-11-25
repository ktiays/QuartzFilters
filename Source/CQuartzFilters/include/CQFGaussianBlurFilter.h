//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFGaussianBlurFilter_h
#define CQFGaussianBlurFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(GaussianBlur)
@protocol CQFGaussianBlur <NSObject>

/// The blur radius applied by the filter.
CQF_FP_DECL(radius);

CQF_FP_DECL(quality);

CQF_FP_DECL(bounds);

CQF_FP_DECL(normalizeEdges);

CQF_FP_DECL(normalizeEdgesTransparent) API_AVAILABLE(ios(17.0), macos(14.0));

CQF_FP_DECL(hardEdges);

CQF_FP_DECL(dither);

CQF_FP_DECL(linear);

CQF_FP_DECL(intermediateBitDepth);

@end

@interface CQFQuartzFilter (CQFGaussianBlur)

+ (CQFQuartzFilter<CQFGaussianBlur> *)gaussianBlurFilter;

+ (CQFQuartzFilter<CQFGaussianBlur> * _Nullable)gaussianBlurFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(gaussianBlur(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFGaussianBlurFilter_h */
