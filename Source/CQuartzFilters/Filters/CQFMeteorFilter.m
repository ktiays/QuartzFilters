//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFMeteorFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFMeteorFilter : CQFQuartzFilter <CQFMeteor>
@end

@implementation CQFMeteorFilter

CQF_FP_IMPL(amount)

CQF_FP_IMPL(scale)

@end

@implementation CQFQuartzFilter (CQFMeteor)

+ (CQFQuartzFilter<CQFMeteor> *)meteorFilter {
    return [[CQFMeteorFilter alloc] initWithType:CQFQuartzFilterTypeMeteor];
}

+ (CQFQuartzFilter<CQFMeteor> * _Nullable)meteorFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeMeteor]) {
        return nil;
    }
    return [[CQFMeteorFilter alloc] initWithFilter:filter];
}

@end
