//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorInvertFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorInvertFilter : CQFQuartzFilter <CQFColorInvert>
@end

@implementation CQFColorInvertFilter

@end

@implementation CQFQuartzFilter (CQFColorInvert)

+ (CQFQuartzFilter<CQFColorInvert> *)colorInvertFilter {
    return [[CQFColorInvertFilter alloc] initWithType:CQFQuartzFilterTypeColorInvert];
}

+ (CQFQuartzFilter<CQFColorInvert> * _Nullable)colorInvertFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorInvert]) {
        return nil;
    }
    return [[CQFColorInvertFilter alloc] initWithFilter:filter];
}

@end
