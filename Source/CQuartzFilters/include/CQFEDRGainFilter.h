//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFEDRGainFilter_h
#define CQFEDRGainFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(EDRGain)
@protocol CQFEDRGain <NSObject>

CQF_FP_DECL(amount);

CQF_FP_DECL(scale);

@end

@interface CQFQuartzFilter (CQFEDRGain)

+ (CQFQuartzFilter<CQFEDRGain> *)edrGainFilter;

+ (CQFQuartzFilter<CQFEDRGain> * _Nullable)edrGainFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(edrGain(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFEDRGainFilter_h */
