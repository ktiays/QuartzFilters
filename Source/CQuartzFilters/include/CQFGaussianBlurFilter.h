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

CQF_FP_DECL(normalizeEdges);

CQF_FP_DECL(hardEdges);

@end

@interface CQFQuartzFilter (CQFGaussianBlur)

+ (CQFQuartzFilter<CQFGaussianBlur> *)gaussianBlurFilter;

+ (CQFQuartzFilter<CQFGaussianBlur> *)gaussianBlurFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFGaussianBlurFilter_h */
