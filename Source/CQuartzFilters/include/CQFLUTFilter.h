//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLUTFilter_h
#define CQFLUTFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(16.0), macos(13.0)) NS_SWIFT_NAME(LUT)
@protocol CQFLUT <NSObject>

CQF_FP_DECL(values);

CQF_FP_DECL(colorMap);

CQF_FP_DECL(scale);

@end

API_AVAILABLE(ios(16.0), macos(13.0))
@interface CQFQuartzFilter (CQFLUT)

+ (CQFQuartzFilter<CQFLUT> *)lutFilter API_AVAILABLE(ios(16.0), macos(13.0));

+ (CQFQuartzFilter<CQFLUT> * _Nullable)lutFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(lut(with:)) API_AVAILABLE(ios(16.0), macos(13.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLUTFilter_h */
