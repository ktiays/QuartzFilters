//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVariableBlurFilter.h"

@interface CQFVariableBlurFilter : CQFQuartzFilter <CQFVariableBlur>
@end

@implementation CQFVariableBlurFilter

CQF_FP_IMPL(radius)

CQF_FP_IMPL(maskImage)

CQF_FP_IMPL(dither)

CQF_FP_IMPL(normalizeEdges)

CQF_FP_IMPL(sourceSublayerName)

CQF_FP_IMPL(fade)

@end

@implementation CQFQuartzFilter (CQFVariableBlur)

+ (CQFQuartzFilter<CQFVariableBlur> *)variableBlurFilter {
    return [self variableBlurFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFVariableBlur> *)variableBlurFilterWithCurrent:(id)current {
    if (current) {
        return [[CQFVariableBlurFilter alloc] initWithFilter:current];
    }
    return [[CQFVariableBlurFilter alloc] initWithType:CQFQuartzFilterTypeVariableBlur];
}

@end
