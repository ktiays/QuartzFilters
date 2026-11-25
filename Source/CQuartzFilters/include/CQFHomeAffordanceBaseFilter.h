//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFHomeAffordanceBaseFilter_h
#define CQFHomeAffordanceBaseFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_UNAVAILABLE(macos) NS_SWIFT_NAME(HomeAffordanceBase)
@protocol CQFHomeAffordanceBase <NSObject>

CQF_FP_DECL(colorMap);

CQF_FP_DECL(amount);

CQF_FP_DECL(overlayOpacity);

CQF_FP_DECL(addWhite);

CQF_FP_DECL(addColor);

CQF_FP_DECL(color);

@end

API_UNAVAILABLE(macos)
@interface CQFQuartzFilter (CQFHomeAffordanceBase)

+ (CQFQuartzFilter<CQFHomeAffordanceBase> *)homeAffordanceBaseFilter API_UNAVAILABLE(macos);

+ (CQFQuartzFilter<CQFHomeAffordanceBase> * _Nullable)homeAffordanceBaseFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(homeAffordanceBase(with:)) API_UNAVAILABLE(macos);

@end

NS_ASSUME_NONNULL_END

#endif /* CQFHomeAffordanceBaseFilter_h */
