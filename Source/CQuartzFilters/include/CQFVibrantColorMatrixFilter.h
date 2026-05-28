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

CQF_FP_DECL(clamp);

CQF_FP_DECL(clampPreserveHue);

CQF_FP_DECL(backdropAware) API_AVAILABLE(ios(26.0), macos(26.0));

@end

@interface CQFQuartzFilter (CQFVibrantColorMatrix)

+ (CQFQuartzFilter<CQFVibrantColorMatrix> *)vibrantColorMatrixFilter;

+ (CQFQuartzFilter<CQFVibrantColorMatrix> *)vibrantColorMatrixFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVibrantColorMatrixFilter_h */
