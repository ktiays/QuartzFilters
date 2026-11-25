//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVibrantDarkFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFVibrantDarkFilter : CQFQuartzFilter <CQFVibrantDark>
@end

@implementation CQFVibrantDarkFilter

CQF_FP_IMPL(color0)

CQF_FP_IMPL(color1)

CQF_FP_IMPL(reversed)

@end

@implementation CQFQuartzFilter (CQFVibrantDark)

+ (CQFQuartzFilter<CQFVibrantDark> *)vibrantDarkFilter {
    return [[CQFVibrantDarkFilter alloc] initWithType:CQFQuartzFilterTypeVibrantDark];
}

+ (CQFQuartzFilter<CQFVibrantDark> * _Nullable)vibrantDarkFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeVibrantDark]) {
        return nil;
    }
    return [[CQFVibrantDarkFilter alloc] initWithFilter:filter];
}

@end
