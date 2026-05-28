//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorBrightnessFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFColorBrightnessFilter : CQFQuartzFilter <CQFColorBrightness>
@end

@implementation CQFColorBrightnessFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFColorBrightness)

+ (CQFQuartzFilter<CQFColorBrightness> *)colorBrightnessFilter {
    return [self colorBrightnessFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFColorBrightness> *)colorBrightnessFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFColorBrightnessFilter alloc] initWithFilter:current];
    }
    return [[CQFColorBrightnessFilter alloc] initWithType:CQFQuartzFilterTypeColorBrightness];
}

@end
