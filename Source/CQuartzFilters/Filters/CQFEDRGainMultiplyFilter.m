//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFEDRGainMultiplyFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(17.0), macos(14.0))
@interface CQFEDRGainMultiplyFilter : CQFQuartzFilter <CQFEDRGainMultiply>
@end

@implementation CQFEDRGainMultiplyFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(scale)

CQF_FP_IMPL(allowsGroup)

CQF_FP_IMPL(adaptive)

CQF_FP_IMPL(start)

CQF_FP_IMPL(end)

@end

@implementation CQFQuartzFilter (CQFEDRGainMultiply)

+ (CQFQuartzFilter<CQFEDRGainMultiply> *)edrGainMultiplyFilter {
    return [[CQFEDRGainMultiplyFilter alloc] initWithType:CQFQuartzFilterTypeEdrGainMultiply];
}

+ (CQFQuartzFilter<CQFEDRGainMultiply> * _Nullable)edrGainMultiplyFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeEdrGainMultiply]) {
        return nil;
    }
    return [[CQFEDRGainMultiplyFilter alloc] initWithFilter:filter];
}

@end
