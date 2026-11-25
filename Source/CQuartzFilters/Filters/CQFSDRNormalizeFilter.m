//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFSDRNormalizeFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFSDRNormalizeFilter : CQFQuartzFilter <CQFSDRNormalize>
@end

@implementation CQFSDRNormalizeFilter

CQF_FP_IMPL(clamp)

CQF_FP_IMPL(clampPreserveHue)

@end

@implementation CQFQuartzFilter (CQFSDRNormalize)

+ (CQFQuartzFilter<CQFSDRNormalize> *)sdrNormalizeFilter {
    return [[CQFSDRNormalizeFilter alloc] initWithType:CQFQuartzFilterTypeSdrNormalize];
}

+ (CQFQuartzFilter<CQFSDRNormalize> * _Nullable)sdrNormalizeFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeSdrNormalize]) {
        return nil;
    }
    return [[CQFSDRNormalizeFilter alloc] initWithFilter:filter];
}

@end
