//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFVibrantColorMatrixFilter_h
#define CQFVibrantColorMatrixFilter_h

#import "CQFColorMatrix.h"
#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(VibrantColorMatrix)
@protocol CQFVibrantColorMatrix <NSObject>

CQF_FP_DECL(colorMatrix);

CQF_FP_DECL(clamp) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(clampPreserveHue) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(backdropAware) API_AVAILABLE(ios(26.0), macos(26.0));

@end

@interface CQFQuartzFilter (CQFVibrantColorMatrix)

+ (CQFQuartzFilter<CQFVibrantColorMatrix> *)vibrantColorMatrixFilter;

+ (CQFQuartzFilter<CQFVibrantColorMatrix> * _Nullable)vibrantColorMatrixFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(vibrantColorMatrix(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVibrantColorMatrixFilter_h */
