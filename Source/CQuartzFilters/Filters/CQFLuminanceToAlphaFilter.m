//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLuminanceToAlphaFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFLuminanceToAlphaFilter : CQFQuartzFilter <CQFLuminanceToAlpha>
@end

@implementation CQFLuminanceToAlphaFilter

CQF_FP_IMPL(premultipliedValues)

@end

@implementation CQFQuartzFilter (CQFLuminanceToAlpha)

+ (CQFQuartzFilter<CQFLuminanceToAlpha> *)luminanceToAlphaFilter {
    return [[CQFLuminanceToAlphaFilter alloc] initWithType:CQFQuartzFilterTypeLuminanceToAlpha];
}

+ (CQFQuartzFilter<CQFLuminanceToAlpha> * _Nullable)luminanceToAlphaFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLuminanceToAlpha]) {
        return nil;
    }
    return [[CQFLuminanceToAlphaFilter alloc] initWithFilter:filter];
}

@end
