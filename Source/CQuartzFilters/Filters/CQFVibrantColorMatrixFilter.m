//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVibrantColorMatrixFilter.h"

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
    return [self vibrantColorMatrixFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFVibrantColorMatrix> *)vibrantColorMatrixFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFVibrantColorMatrixFilter alloc] initWithFilter:current];
    }
    return [[CQFVibrantColorMatrixFilter alloc] initWithType:CQFQuartzFilterTypeVibrantColorMatrix];
}

@end
