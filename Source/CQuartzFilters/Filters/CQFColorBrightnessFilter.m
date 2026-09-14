//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorBrightnessFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorBrightnessFilter : CQFQuartzFilter <CQFColorBrightness>
@end

@implementation CQFColorBrightnessFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFColorBrightness)

+ (CQFQuartzFilter<CQFColorBrightness> *)colorBrightnessFilter {
    return [[CQFColorBrightnessFilter alloc] initWithType:CQFQuartzFilterTypeColorBrightness];
}

+ (CQFQuartzFilter<CQFColorBrightness> * _Nullable)colorBrightnessFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorBrightness]) {
        return nil;
    }
    return [[CQFColorBrightnessFilter alloc] initWithFilter:filter];
}

@end
