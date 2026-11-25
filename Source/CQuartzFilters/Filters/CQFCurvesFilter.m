//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFCurvesFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFCurvesFilter : CQFQuartzFilter <CQFCurves>
@end

@implementation CQFCurvesFilter

CQF_FP_IMPL(redValues)

CQF_FP_IMPL(greenValues)

CQF_FP_IMPL(blueValues)

CQF_FP_IMPL(alphaValues)

@end

@implementation CQFQuartzFilter (CQFCurves)

+ (CQFQuartzFilter<CQFCurves> *)curvesFilter {
    return [[CQFCurvesFilter alloc] initWithType:CQFQuartzFilterTypeCurves];
}

+ (CQFQuartzFilter<CQFCurves> * _Nullable)curvesFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeCurves]) {
        return nil;
    }
    return [[CQFCurvesFilter alloc] initWithFilter:filter];
}

@end
