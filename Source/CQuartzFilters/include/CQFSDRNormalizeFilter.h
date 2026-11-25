//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFSDRNormalizeFilter_h
#define CQFSDRNormalizeFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(SDRNormalize)
@protocol CQFSDRNormalize <NSObject>

CQF_FP_DECL(clamp) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(clampPreserveHue) API_AVAILABLE(ios(26.0), macos(26.0));

@end

@interface CQFQuartzFilter (CQFSDRNormalize)

+ (CQFQuartzFilter<CQFSDRNormalize> *)sdrNormalizeFilter;

+ (CQFQuartzFilter<CQFSDRNormalize> * _Nullable)sdrNormalizeFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(sdrNormalize(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFSDRNormalizeFilter_h */
