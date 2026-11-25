//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFAverageColorFilter_h
#define CQFAverageColorFilter_h

#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AverageColor)
@protocol CQFAverageColor <NSObject>

@end

@interface CQFQuartzFilter (CQFAverageColor)

+ (CQFQuartzFilter<CQFAverageColor> *)averageColorFilter;

+ (CQFQuartzFilter<CQFAverageColor> * _Nullable)averageColorFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(averageColor(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFAverageColorFilter_h */
