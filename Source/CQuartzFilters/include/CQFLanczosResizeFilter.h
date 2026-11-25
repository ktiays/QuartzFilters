//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLanczosResizeFilter_h
#define CQFLanczosResizeFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LanczosResize)
@protocol CQFLanczosResize <NSObject>

CQF_FP_DECL(scale);

CQF_FP_DECL(aspectRatio);

@end

@interface CQFQuartzFilter (CQFLanczosResize)

+ (CQFQuartzFilter<CQFLanczosResize> *)lanczosResizeFilter;

+ (CQFQuartzFilter<CQFLanczosResize> * _Nullable)lanczosResizeFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(lanczosResize(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLanczosResizeFilter_h */
