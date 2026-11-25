//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorInvertFilter_h
#define CQFColorInvertFilter_h

#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorInvert)
@protocol CQFColorInvert <NSObject>

@end

@interface CQFQuartzFilter (CQFColorInvert)

+ (CQFQuartzFilter<CQFColorInvert> *)colorInvertFilter;

+ (CQFQuartzFilter<CQFColorInvert> * _Nullable)colorInvertFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorInvert(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorInvertFilter_h */
