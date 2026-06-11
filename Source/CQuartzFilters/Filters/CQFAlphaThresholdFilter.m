//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFAlphaThresholdFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFAlphaThresholdFilter : CQFQuartzFilter <CQFAlphaThreshold>
@end

@implementation CQFAlphaThresholdFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFAlphaThreshold)

+ (CQFQuartzFilter<CQFAlphaThreshold> *)alphaThresholdFilter {
    return [self alphaThresholdFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFAlphaThreshold> *)alphaThresholdFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFAlphaThresholdFilter alloc] initWithFilter:current];
    }
    return [[CQFAlphaThresholdFilter alloc] initWithType:CQFQuartzFilterTypeAlphaThreshold];
}

@end
