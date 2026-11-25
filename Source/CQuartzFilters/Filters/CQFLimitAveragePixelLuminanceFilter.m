//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLimitAveragePixelLuminanceFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFLimitAveragePixelLuminanceFilter : CQFQuartzFilter <CQFLimitAveragePixelLuminance>
@end

@implementation CQFLimitAveragePixelLuminanceFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(scale)

CQF_FP_IMPL(values)

CQF_FP_IMPL(useP3Space)

CQF_FP_IMPL(displayInvertAware)

@end

@implementation CQFQuartzFilter (CQFLimitAveragePixelLuminance)

+ (CQFQuartzFilter<CQFLimitAveragePixelLuminance> *)limitAveragePixelLuminanceFilter {
    return [[CQFLimitAveragePixelLuminanceFilter alloc] initWithType:CQFQuartzFilterTypeLimitAveragePixelLuminance];
}

+ (CQFQuartzFilter<CQFLimitAveragePixelLuminance> * _Nullable)limitAveragePixelLuminanceFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLimitAveragePixelLuminance]) {
        return nil;
    }
    return [[CQFLimitAveragePixelLuminanceFilter alloc] initWithFilter:filter];
}

@end
