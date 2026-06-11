//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFAlphaSmoothThresholdFilter_h
#define CQFAlphaSmoothThresholdFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AlphaSmoothThreshold)
@protocol CQFAlphaSmoothThreshold <NSObject>

CQF_FP_DECL(start);

CQF_FP_DECL(end);

CQF_FP_DECL(amount);

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFAlphaSmoothThreshold)

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> *)alphaSmoothThresholdFilter;

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> *)alphaSmoothThresholdFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFAlphaSmoothThresholdFilter_h */
