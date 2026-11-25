//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFAlphaSmoothThresholdFilter_h
#define CQFAlphaSmoothThresholdFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(18.1), macos(15.1)) NS_SWIFT_NAME(AlphaSmoothThreshold)
@protocol CQFAlphaSmoothThreshold <NSObject>

CQF_FP_DECL(start);

CQF_FP_DECL(end);

CQF_FP_DECL(amount);

CQF_FP_DECL(color);

@end

API_AVAILABLE(ios(18.1), macos(15.1))
@interface CQFQuartzFilter (CQFAlphaSmoothThreshold)

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> *)alphaSmoothThresholdFilter API_AVAILABLE(ios(18.1), macos(15.1));

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> * _Nullable)alphaSmoothThresholdFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(alphaSmoothThreshold(with:)) API_AVAILABLE(ios(18.1), macos(15.1));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFAlphaSmoothThresholdFilter_h */
