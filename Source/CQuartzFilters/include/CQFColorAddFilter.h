//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorAddFilter_h
#define CQFColorAddFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorAdd)
@protocol CQFColorAdd <NSObject>

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFColorAdd)

+ (CQFQuartzFilter<CQFColorAdd> *)colorAddFilter;

+ (CQFQuartzFilter<CQFColorAdd> * _Nullable)colorAddFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorAdd(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorAddFilter_h */
