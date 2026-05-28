//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorBrightnessFilter_h
#define CQFColorBrightnessFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorBrightness)
@protocol CQFColorBrightness <NSObject>

/// The brightness amount applied by the filter.
CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFColorBrightness)

+ (CQFQuartzFilter<CQFColorBrightness> *)colorBrightnessFilter;

+ (CQFQuartzFilter<CQFColorBrightness> *)colorBrightnessFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorBrightnessFilter_h */
