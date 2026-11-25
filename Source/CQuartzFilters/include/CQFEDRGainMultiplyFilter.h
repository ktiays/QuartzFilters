//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFEDRGainMultiplyFilter_h
#define CQFEDRGainMultiplyFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(17.0), macos(14.0)) NS_SWIFT_NAME(EDRGainMultiply)
@protocol CQFEDRGainMultiply <NSObject>

CQF_FP_DECL(amount);

CQF_FP_DECL(scale);

CQF_FP_DECL(allowsGroup);

CQF_FP_DECL(adaptive) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(start) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(end) API_AVAILABLE(ios(26.0), macos(26.0));

@end

API_AVAILABLE(ios(17.0), macos(14.0))
@interface CQFQuartzFilter (CQFEDRGainMultiply)

+ (CQFQuartzFilter<CQFEDRGainMultiply> *)edrGainMultiplyFilter API_AVAILABLE(ios(17.0), macos(14.0));

+ (CQFQuartzFilter<CQFEDRGainMultiply> * _Nullable)edrGainMultiplyFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(edrGainMultiply(with:)) API_AVAILABLE(ios(17.0), macos(14.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFEDRGainMultiplyFilter_h */
