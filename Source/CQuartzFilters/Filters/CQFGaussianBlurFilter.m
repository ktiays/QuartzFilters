//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFGaussianBlurFilter.h"
#import "CQuartzFiltersPrivate.h"

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
    return [[CQFGaussianBlurFilter alloc] initWithType:CQFQuartzFilterTypeGaussianBlur];
}

+ (CQFQuartzFilter<CQFGaussianBlur> * _Nullable)gaussianBlurFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeGaussianBlur]) {
        return nil;
    }
    return [[CQFGaussianBlurFilter alloc] initWithFilter:filter];
}

@end
