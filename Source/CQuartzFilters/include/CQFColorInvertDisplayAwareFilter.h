//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorInvertDisplayAwareFilter_h
#define CQFColorInvertDisplayAwareFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(16.0), macos(27.0)) NS_SWIFT_NAME(ColorInvertDisplayAware)
@protocol CQFColorInvertDisplayAware <NSObject>

CQF_FP_DECL(reversed);

@end

API_AVAILABLE(ios(16.0), macos(27.0))
@interface CQFQuartzFilter (CQFColorInvertDisplayAware)

+ (CQFQuartzFilter<CQFColorInvertDisplayAware> *)colorInvertDisplayAwareFilter API_AVAILABLE(ios(16.0), macos(27.0));

+ (CQFQuartzFilter<CQFColorInvertDisplayAware> * _Nullable)colorInvertDisplayAwareFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorInvertDisplayAware(with:)) API_AVAILABLE(ios(16.0), macos(27.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorInvertDisplayAwareFilter_h */
