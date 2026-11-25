//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVibrantLightFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFVibrantLightFilter : CQFQuartzFilter <CQFVibrantLight>
@end

@implementation CQFVibrantLightFilter

CQF_FP_IMPL(color0)

CQF_FP_IMPL(color1)

CQF_FP_IMPL(reversed)

@end

@implementation CQFQuartzFilter (CQFVibrantLight)

+ (CQFQuartzFilter<CQFVibrantLight> *)vibrantLightFilter {
    return [[CQFVibrantLightFilter alloc] initWithType:CQFQuartzFilterTypeVibrantLight];
}

+ (CQFQuartzFilter<CQFVibrantLight> * _Nullable)vibrantLightFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeVibrantLight]) {
        return nil;
    }
    return [[CQFVibrantLightFilter alloc] initWithFilter:filter];
}

@end
