//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFOpacityPairFilter_h
#define CQFOpacityPairFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(OpacityPair)
@protocol CQFOpacityPair <NSObject>

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFOpacityPair)

+ (CQFQuartzFilter<CQFOpacityPair> *)opacityPairFilter;

+ (CQFQuartzFilter<CQFOpacityPair> * _Nullable)opacityPairFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(opacityPair(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFOpacityPairFilter_h */
