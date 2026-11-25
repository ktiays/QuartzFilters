//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorSubtractFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorSubtractFilter : CQFQuartzFilter <CQFColorSubtract>
@end

@implementation CQFColorSubtractFilter

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFColorSubtract)

+ (CQFQuartzFilter<CQFColorSubtract> *)colorSubtractFilter {
    return [[CQFColorSubtractFilter alloc] initWithType:CQFQuartzFilterTypeColorSubtract];
}

+ (CQFQuartzFilter<CQFColorSubtract> * _Nullable)colorSubtractFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorSubtract]) {
        return nil;
    }
    return [[CQFColorSubtractFilter alloc] initWithFilter:filter];
}

@end
