//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLuminanceMapFilter_h
#define CQFLuminanceMapFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LuminanceMap)
@protocol CQFLuminanceMap <NSObject>

CQF_FP_DECL(colorMap);

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFLuminanceMap)

+ (CQFQuartzFilter<CQFLuminanceMap> *)luminanceMapFilter;

+ (CQFQuartzFilter<CQFLuminanceMap> * _Nullable)luminanceMapFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(luminanceMap(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLuminanceMapFilter_h */
