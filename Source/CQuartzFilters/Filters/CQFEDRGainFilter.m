//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFEDRGainFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFEDRGainFilter : CQFQuartzFilter <CQFEDRGain>
@end

@implementation CQFEDRGainFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(scale)

@end

@implementation CQFQuartzFilter (CQFEDRGain)

+ (CQFQuartzFilter<CQFEDRGain> *)edrGainFilter {
    return [[CQFEDRGainFilter alloc] initWithType:CQFQuartzFilterTypeEdrGain];
}

+ (CQFQuartzFilter<CQFEDRGain> * _Nullable)edrGainFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeEdrGain]) {
        return nil;
    }
    return [[CQFEDRGainFilter alloc] initWithFilter:filter];
}

@end
