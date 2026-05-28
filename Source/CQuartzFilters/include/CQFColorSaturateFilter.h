//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorSaturateFilter_h
#define CQFColorSaturateFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorSaturate)
@protocol CQFColorSaturate <NSObject>

/// The saturation amount applied by the filter.
CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFColorSaturate)

+ (CQFQuartzFilter<CQFColorSaturate> *)colorSaturateFilter;

+ (CQFQuartzFilter<CQFColorSaturate> *)colorSaturateFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorSaturateFilter_h */
