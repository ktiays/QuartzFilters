//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFCurvesFilter_h
#define CQFCurvesFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Curves)
@protocol CQFCurves <NSObject>

CQF_FP_DECL(redValues);

CQF_FP_DECL(greenValues);

CQF_FP_DECL(blueValues);

CQF_FP_DECL(alphaValues);

@end

@interface CQFQuartzFilter (CQFCurves)

+ (CQFQuartzFilter<CQFCurves> *)curvesFilter;

+ (CQFQuartzFilter<CQFCurves> * _Nullable)curvesFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(curves(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFCurvesFilter_h */
