//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLuminanceToAlphaFilter_h
#define CQFLuminanceToAlphaFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LuminanceToAlpha)
@protocol CQFLuminanceToAlpha <NSObject>

CQF_FP_DECL(premultipliedValues) API_AVAILABLE(ios(16.0), macos(13.0));

@end

@interface CQFQuartzFilter (CQFLuminanceToAlpha)

+ (CQFQuartzFilter<CQFLuminanceToAlpha> *)luminanceToAlphaFilter;

+ (CQFQuartzFilter<CQFLuminanceToAlpha> * _Nullable)luminanceToAlphaFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(luminanceToAlpha(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLuminanceToAlphaFilter_h */
