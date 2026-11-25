//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorContrastFilter_h
#define CQFColorContrastFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorContrast)
@protocol CQFColorContrast <NSObject>

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFColorContrast)

+ (CQFQuartzFilter<CQFColorContrast> *)colorContrastFilter;

+ (CQFQuartzFilter<CQFColorContrast> * _Nullable)colorContrastFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorContrast(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorContrastFilter_h */
