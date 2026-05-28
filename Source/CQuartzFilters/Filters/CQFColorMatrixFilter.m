//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorMatrixFilter.h"
#import "CQFFilterPropertyImpl.h"

@interface CQFColorMatrixFilter : CQFQuartzFilter <CQFColorMatrixProtocol>
@end

@implementation CQFColorMatrixFilter

CQF_FP_IMPL(colorMatrix)

@end

@implementation CQFQuartzFilter (CQFColorMatrixProtocol)

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilter {
    return [self colorMatrixFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFColorMatrixFilter alloc] initWithFilter:current];
    }
    return [[CQFColorMatrixFilter alloc] initWithType:CQFQuartzFilterTypeColorMatrix];
}

@end
