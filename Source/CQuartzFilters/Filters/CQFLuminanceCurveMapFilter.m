//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLuminanceCurveMapFilter.h"

@interface CQFLuminanceCurveMapFilter : CQFQuartzFilter <CQFLuminanceCurveMap>
@end

@implementation CQFLuminanceCurveMapFilter

CQF_FP_IMPL(values)

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFLuminanceCurveMap)

+ (CQFQuartzFilter<CQFLuminanceCurveMap> *)luminanceCurveMapFilter {
    return [self luminanceCurveMapFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFLuminanceCurveMap> *)luminanceCurveMapFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFLuminanceCurveMapFilter alloc] initWithFilter:current];
    }
    return [[CQFLuminanceCurveMapFilter alloc] initWithType:CQFQuartzFilterTypeLuminanceCurveMap];
}

@end
