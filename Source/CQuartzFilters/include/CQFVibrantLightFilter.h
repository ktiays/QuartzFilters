//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFVibrantLightFilter_h
#define CQFVibrantLightFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(VibrantLight)
@protocol CQFVibrantLight <NSObject>

CQF_FP_DECL(color0);

CQF_FP_DECL(color1);

CQF_FP_DECL(reversed);

@end

@interface CQFQuartzFilter (CQFVibrantLight)

+ (CQFQuartzFilter<CQFVibrantLight> *)vibrantLightFilter;

+ (CQFQuartzFilter<CQFVibrantLight> * _Nullable)vibrantLightFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(vibrantLight(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFVibrantLightFilter_h */
