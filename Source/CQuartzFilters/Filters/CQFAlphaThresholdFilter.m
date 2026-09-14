//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFAlphaThresholdFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFAlphaThresholdFilter : CQFQuartzFilter <CQFAlphaThreshold>
@end

@implementation CQFAlphaThresholdFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFAlphaThreshold)

+ (CQFQuartzFilter<CQFAlphaThreshold> *)alphaThresholdFilter {
    return [[CQFAlphaThresholdFilter alloc] initWithType:CQFQuartzFilterTypeAlphaThreshold];
}

+ (CQFQuartzFilter<CQFAlphaThreshold> * _Nullable)alphaThresholdFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeAlphaThreshold]) {
        return nil;
    }
    return [[CQFAlphaThresholdFilter alloc] initWithFilter:filter];
}

@end
