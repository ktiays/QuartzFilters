//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFVibrantColorMatrixSourceOverFilter_h
#define CQFVibrantColorMatrixSourceOverFilter_h

#import "CQFColorMatrix.h"
#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(VibrantColorMatrixSourceOver)
@protocol CQFVibrantColorMatrixSourceOver <NSObject>

CQF_FP_DECL(colorMatrix);

CQF_FP_DECL(clamp) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(clampPreserveHue) API_AVAILABLE(ios(26.0), macos(26.0));

CQF_FP_DECL(backdropAware) API_AVAILABLE(ios(26.0), macos(26.0));

@end

@interface CQFQuartzFilter (CQFVibrantColorMatrixSourceOver)

+ (CQFQuartzFilter<CQFVibrantColorMatrixSourceOver> *)vibrantColorMatrixSourceOverFilter;

+ (CQFQuartzFilter<CQFVibrantColorMatrixSourceOver> * _Nullable)vibrantColorMatrixSourceOverFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(vibrantColorMatrixSourceOver(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVibrantColorMatrixSourceOverFilter_h */
