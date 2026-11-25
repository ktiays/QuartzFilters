//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFBiasFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFBiasFilter : CQFQuartzFilter <CQFBias>
@end

@implementation CQFBiasFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFBias)

+ (CQFQuartzFilter<CQFBias> *)biasFilter {
    return [[CQFBiasFilter alloc] initWithType:CQFQuartzFilterTypeBias];
}

+ (CQFQuartzFilter<CQFBias> * _Nullable)biasFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeBias]) {
        return nil;
    }
    return [[CQFBiasFilter alloc] initWithFilter:filter];
}

@end
