//
//  Created by ktiays on 2026/6/12.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFAlphaSmoothThresholdFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(18.1), macos(15.1))
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
    return [[CQFAlphaSmoothThresholdFilter alloc] initWithType:CQFQuartzFilterTypeAlphaSmoothThreshold];
}

+ (CQFQuartzFilter<CQFAlphaSmoothThreshold> * _Nullable)alphaSmoothThresholdFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeAlphaSmoothThreshold]) {
        return nil;
    }
    return [[CQFAlphaSmoothThresholdFilter alloc] initWithFilter:filter];
}

@end
