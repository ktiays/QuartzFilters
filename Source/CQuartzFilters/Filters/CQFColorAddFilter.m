//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorAddFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorAddFilter : CQFQuartzFilter <CQFColorAdd>
@end

@implementation CQFColorAddFilter

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFColorAdd)

+ (CQFQuartzFilter<CQFColorAdd> *)colorAddFilter {
    return [[CQFColorAddFilter alloc] initWithType:CQFQuartzFilterTypeColorAdd];
}

+ (CQFQuartzFilter<CQFColorAdd> * _Nullable)colorAddFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorAdd]) {
        return nil;
    }
    return [[CQFColorAddFilter alloc] initWithFilter:filter];
}

@end
