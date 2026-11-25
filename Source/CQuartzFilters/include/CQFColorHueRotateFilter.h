//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorHueRotateFilter_h
#define CQFColorHueRotateFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorHueRotate)
@protocol CQFColorHueRotate <NSObject>

CQF_FP_DECL(angle);

CQF_FP_DECL(hsvSpace);

@end

@interface CQFQuartzFilter (CQFColorHueRotate)

+ (CQFQuartzFilter<CQFColorHueRotate> *)colorHueRotateFilter;

+ (CQFQuartzFilter<CQFColorHueRotate> * _Nullable)colorHueRotateFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorHueRotate(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorHueRotateFilter_h */
