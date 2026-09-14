//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorSaturateFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorSaturateFilter : CQFQuartzFilter <CQFColorSaturate>
@end

@implementation CQFColorSaturateFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFColorSaturate)

+ (CQFQuartzFilter<CQFColorSaturate> *)colorSaturateFilter {
    return [[CQFColorSaturateFilter alloc] initWithType:CQFQuartzFilterTypeColorSaturate];
}

+ (CQFQuartzFilter<CQFColorSaturate> * _Nullable)colorSaturateFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorSaturate]) {
        return nil;
    }
    return [[CQFColorSaturateFilter alloc] initWithFilter:filter];
}

@end
