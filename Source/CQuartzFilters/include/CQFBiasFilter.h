//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFBiasFilter_h
#define CQFBiasFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Bias)
@protocol CQFBias <NSObject>

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFBias)

+ (CQFQuartzFilter<CQFBias> *)biasFilter;

+ (CQFQuartzFilter<CQFBias> * _Nullable)biasFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(bias(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFBiasFilter_h */
