//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLuminanceCurveMapFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFLuminanceCurveMapFilter : CQFQuartzFilter <CQFLuminanceCurveMap>
@end

@implementation CQFLuminanceCurveMapFilter

CQF_FP_IMPL(values)

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFLuminanceCurveMap)

+ (CQFQuartzFilter<CQFLuminanceCurveMap> *)luminanceCurveMapFilter {
    return [[CQFLuminanceCurveMapFilter alloc] initWithType:CQFQuartzFilterTypeLuminanceCurveMap];
}

+ (CQFQuartzFilter<CQFLuminanceCurveMap> * _Nullable)luminanceCurveMapFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLuminanceCurveMap]) {
        return nil;
    }
    return [[CQFLuminanceCurveMapFilter alloc] initWithFilter:filter];
}

@end
