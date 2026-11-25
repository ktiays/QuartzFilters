//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorContrastFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorContrastFilter : CQFQuartzFilter <CQFColorContrast>
@end

@implementation CQFColorContrastFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFColorContrast)

+ (CQFQuartzFilter<CQFColorContrast> *)colorContrastFilter {
    return [[CQFColorContrastFilter alloc] initWithType:CQFQuartzFilterTypeColorContrast];
}

+ (CQFQuartzFilter<CQFColorContrast> * _Nullable)colorContrastFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorContrast]) {
        return nil;
    }
    return [[CQFColorContrastFilter alloc] initWithFilter:filter];
}

@end
