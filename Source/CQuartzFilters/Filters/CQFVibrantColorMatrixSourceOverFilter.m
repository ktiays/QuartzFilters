//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVibrantColorMatrixSourceOverFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFVibrantColorMatrixSourceOverFilter : CQFQuartzFilter <CQFVibrantColorMatrixSourceOver>
@end

@implementation CQFVibrantColorMatrixSourceOverFilter

CQF_FP_IMPL(colorMatrix)

CQF_FP_IMPL(clamp)

CQF_FP_IMPL(clampPreserveHue)

CQF_FP_IMPL(backdropAware)

@end

@implementation CQFQuartzFilter (CQFVibrantColorMatrixSourceOver)

+ (CQFQuartzFilter<CQFVibrantColorMatrixSourceOver> *)vibrantColorMatrixSourceOverFilter {
    return [[CQFVibrantColorMatrixSourceOverFilter alloc] initWithType:CQFQuartzFilterTypeVibrantColorMatrixSourceOver];
}

+ (CQFQuartzFilter<CQFVibrantColorMatrixSourceOver> * _Nullable)vibrantColorMatrixSourceOverFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeVibrantColorMatrixSourceOver]) {
        return nil;
    }
    return [[CQFVibrantColorMatrixSourceOverFilter alloc] initWithFilter:filter];
}

@end
