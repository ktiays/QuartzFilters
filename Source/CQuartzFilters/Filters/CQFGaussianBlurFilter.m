//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFGaussianBlurFilter.h"

@interface CQFGaussianBlurFilter : CQFQuartzFilter <CQFGaussianBlur>
@end

@implementation CQFGaussianBlurFilter

CQF_FP_IMPL(radius)

CQF_FP_IMPL(quality)

CQF_FP_IMPL(normalizeEdges)

CQF_FP_IMPL(hardEdges)

@end

@implementation CQFQuartzFilter (CQFGaussianBlur)

+ (CQFQuartzFilter<CQFGaussianBlur> *)gaussianBlurFilter {
    return [self gaussianBlurFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFGaussianBlur> *)gaussianBlurFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFGaussianBlurFilter alloc] initWithFilter:current];
    }
    return [[CQFGaussianBlurFilter alloc] initWithType:CQFQuartzFilterTypeGaussianBlur];
}

@end
