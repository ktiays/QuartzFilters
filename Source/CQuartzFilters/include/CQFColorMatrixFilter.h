//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorMatrixFilter_h
#define CQFColorMatrixFilter_h

#import "CQFColorMatrix.h"
#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorMatrixProtocol)
@protocol CQFColorMatrixProtocol <NSObject>

/// The color matrix applied by the filter.
CQF_FP_DECL(colorMatrix);

CQF_FP_DECL(premultipliedValues) API_AVAILABLE(ios(16.0), macos(13.0));

@end

@interface CQFQuartzFilter (CQFColorMatrixProtocol)

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilter;

+ (CQFQuartzFilter<CQFColorMatrixProtocol> * _Nullable)colorMatrixFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorMatrix(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorMatrixFilter_h */
