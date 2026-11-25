//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFVibrantDarkFilter_h
#define CQFVibrantDarkFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(VibrantDark)
@protocol CQFVibrantDark <NSObject>

CQF_FP_DECL(color0);

CQF_FP_DECL(color1);

CQF_FP_DECL(reversed);

@end

@interface CQFQuartzFilter (CQFVibrantDark)

+ (CQFQuartzFilter<CQFVibrantDark> *)vibrantDarkFilter;

+ (CQFQuartzFilter<CQFVibrantDark> * _Nullable)vibrantDarkFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(vibrantDark(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVibrantDarkFilter_h */
