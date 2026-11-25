//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorSubtractFilter_h
#define CQFColorSubtractFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorSubtract)
@protocol CQFColorSubtract <NSObject>

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFColorSubtract)

+ (CQFQuartzFilter<CQFColorSubtract> *)colorSubtractFilter;

+ (CQFQuartzFilter<CQFColorSubtract> * _Nullable)colorSubtractFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorSubtract(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorSubtractFilter_h */
