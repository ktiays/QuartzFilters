//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFOpacityPairFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFOpacityPairFilter : CQFQuartzFilter <CQFOpacityPair>
@end

@implementation CQFOpacityPairFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFOpacityPair)

+ (CQFQuartzFilter<CQFOpacityPair> *)opacityPairFilter {
    return [[CQFOpacityPairFilter alloc] initWithType:CQFQuartzFilterTypeOpacityPair];
}

+ (CQFQuartzFilter<CQFOpacityPair> * _Nullable)opacityPairFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeOpacityPair]) {
        return nil;
    }
    return [[CQFOpacityPairFilter alloc] initWithFilter:filter];
}

@end
