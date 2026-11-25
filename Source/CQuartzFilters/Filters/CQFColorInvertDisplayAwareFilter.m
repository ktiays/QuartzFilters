//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorInvertDisplayAwareFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(16.0), macos(27.0))
@interface CQFColorInvertDisplayAwareFilter : CQFQuartzFilter <CQFColorInvertDisplayAware>
@end

@implementation CQFColorInvertDisplayAwareFilter

CQF_FP_IMPL(reversed)

@end

@implementation CQFQuartzFilter (CQFColorInvertDisplayAware)

+ (CQFQuartzFilter<CQFColorInvertDisplayAware> *)colorInvertDisplayAwareFilter {
    return [[CQFColorInvertDisplayAwareFilter alloc] initWithType:CQFQuartzFilterTypeColorInvertDisplayAware];
}

+ (CQFQuartzFilter<CQFColorInvertDisplayAware> * _Nullable)colorInvertDisplayAwareFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorInvertDisplayAware]) {
        return nil;
    }
    return [[CQFColorInvertDisplayAwareFilter alloc] initWithFilter:filter];
}

@end
