//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLanczosResizeFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFLanczosResizeFilter : CQFQuartzFilter <CQFLanczosResize>
@end

@implementation CQFLanczosResizeFilter

CQF_FP_IMPL(scale)

CQF_FP_IMPL(aspectRatio)

@end

@implementation CQFQuartzFilter (CQFLanczosResize)

+ (CQFQuartzFilter<CQFLanczosResize> *)lanczosResizeFilter {
    return [[CQFLanczosResizeFilter alloc] initWithType:CQFQuartzFilterTypeLanczosResize];
}

+ (CQFQuartzFilter<CQFLanczosResize> * _Nullable)lanczosResizeFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLanczosResize]) {
        return nil;
    }
    return [[CQFLanczosResizeFilter alloc] initWithFilter:filter];
}

@end
