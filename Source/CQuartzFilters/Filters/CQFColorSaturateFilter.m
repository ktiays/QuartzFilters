//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorSaturateFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFColorSaturateFilter : CQFQuartzFilter <CQFColorSaturate>
@end

@implementation CQFColorSaturateFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFColorSaturate)

+ (CQFQuartzFilter<CQFColorSaturate> *)colorSaturateFilter {
    return [self colorSaturateFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFColorSaturate> *)colorSaturateFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFColorSaturateFilter alloc] initWithFilter:current];
    }
    return [[CQFColorSaturateFilter alloc] initWithType:CQFQuartzFilterTypeColorSaturate];
}

@end
