//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLimitAveragePixelLuminanceFilter_h
#define CQFLimitAveragePixelLuminanceFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LimitAveragePixelLuminance)
@protocol CQFLimitAveragePixelLuminance <NSObject>

CQF_FP_DECL(amount);

CQF_FP_DECL(scale);

CQF_FP_DECL(values);

CQF_FP_DECL(useP3Space);

CQF_FP_DECL(displayInvertAware);

@end

@interface CQFQuartzFilter (CQFLimitAveragePixelLuminance)

+ (CQFQuartzFilter<CQFLimitAveragePixelLuminance> *)limitAveragePixelLuminanceFilter;

+ (CQFQuartzFilter<CQFLimitAveragePixelLuminance> * _Nullable)limitAveragePixelLuminanceFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(limitAveragePixelLuminance(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLimitAveragePixelLuminanceFilter_h */
