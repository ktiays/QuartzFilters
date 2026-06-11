//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFAlphaSmoothThresholdFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFAlphaSmoothThresholdFilter : CQFQuartzFilter <CQFAlphaSmoothThreshold>
@end

@implementation CQFAlphaSmoothThresholdFilter

CQF_FP_IMPL(start)

CQF_FP_IMPL(end)

CQF_FP_IMPL(amount)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFAlphaSmoothThreshold)

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> *)alphaSmoothThresholdFilter {
    return [self alphaSmoothThresholdFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> *)alphaSmoothThresholdFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFAlphaSmoothThresholdFilter alloc] initWithFilter:current];
    }
    return [[CQFAlphaSmoothThresholdFilter alloc] initWithType:CQFQuartzFilterTypeAlphaSmoothThreshold];
}

@end
