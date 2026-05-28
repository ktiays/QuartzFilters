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

@end

@interface CQFQuartzFilter (CQFColorMatrixProtocol)

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilter;

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorMatrixFilter_h */
