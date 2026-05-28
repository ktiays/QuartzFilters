//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorAddFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFColorAddFilter : CQFQuartzFilter <CQFColorAdd>
@end

@implementation CQFColorAddFilter

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFColorAdd)

+ (CQFQuartzFilter<CQFColorAdd> *)colorAddFilter {
    return [self colorAddFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFColorAdd> *)colorAddFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFColorAddFilter alloc] initWithFilter:current];
    }
    return [[CQFColorAddFilter alloc] initWithType:CQFQuartzFilterTypeColorAdd];
}

@end
