//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFVariableBlurFilter.h"
#import "CQuartzFiltersPrivate.h"

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
    return [[CQFVariableBlurFilter alloc] initWithType:CQFQuartzFilterTypeVariableBlur];
}

+ (CQFQuartzFilter<CQFVariableBlur> * _Nullable)variableBlurFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeVariableBlur]) {
        return nil;
    }
    return [[CQFVariableBlurFilter alloc] initWithFilter:filter];
}

@end
