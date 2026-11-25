//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorMonochromeFilter_h
#define CQFColorMonochromeFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ColorMonochrome)
@protocol CQFColorMonochrome <NSObject>

CQF_FP_DECL(bias);

CQF_FP_DECL(amount);

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFColorMonochrome)

+ (CQFQuartzFilter<CQFColorMonochrome> *)colorMonochromeFilter;

+ (CQFQuartzFilter<CQFColorMonochrome> * _Nullable)colorMonochromeFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(colorMonochrome(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFColorMonochromeFilter_h */
