//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFAlphaThresholdFilter_h
#define CQFAlphaThresholdFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AlphaThreshold)
@protocol CQFAlphaThreshold <NSObject>

CQF_FP_DECL(amount);

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFAlphaThreshold)

+ (CQFQuartzFilter<CQFAlphaThreshold> *)alphaThresholdFilter;

+ (CQFQuartzFilter<CQFAlphaThreshold> *)alphaThresholdFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFAlphaThresholdFilter_h */
