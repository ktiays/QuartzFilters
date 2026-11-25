//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLuminanceMapFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFLuminanceMapFilter : CQFQuartzFilter <CQFLuminanceMap>
@end

@implementation CQFLuminanceMapFilter

CQF_FP_IMPL(colorMap)

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFLuminanceMap)

+ (CQFQuartzFilter<CQFLuminanceMap> *)luminanceMapFilter {
    return [[CQFLuminanceMapFilter alloc] initWithType:CQFQuartzFilterTypeLuminanceMap];
}

+ (CQFQuartzFilter<CQFLuminanceMap> * _Nullable)luminanceMapFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLuminanceMap]) {
        return nil;
    }
    return [[CQFLuminanceMapFilter alloc] initWithFilter:filter];
}

@end
