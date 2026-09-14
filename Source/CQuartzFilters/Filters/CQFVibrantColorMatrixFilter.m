//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVibrantColorMatrixFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFVibrantColorMatrixFilter : CQFQuartzFilter <CQFVibrantColorMatrix>
@end

@implementation CQFVibrantColorMatrixFilter

CQF_FP_IMPL(colorMatrix)

CQF_FP_IMPL(clamp)

CQF_FP_IMPL(clampPreserveHue)

CQF_FP_IMPL(backdropAware)

@end

@implementation CQFQuartzFilter (CQFVibrantColorMatrix)

+ (CQFQuartzFilter<CQFVibrantColorMatrix> *)vibrantColorMatrixFilter {
    return [[CQFVibrantColorMatrixFilter alloc] initWithType:CQFQuartzFilterTypeVibrantColorMatrix];
}

+ (CQFQuartzFilter<CQFVibrantColorMatrix> * _Nullable)vibrantColorMatrixFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeVibrantColorMatrix]) {
        return nil;
    }
    return [[CQFVibrantColorMatrixFilter alloc] initWithFilter:filter];
}

@end
