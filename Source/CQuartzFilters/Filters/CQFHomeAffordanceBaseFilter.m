//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import <TargetConditionals.h>

#if !TARGET_OS_OSX

#import "CQFFilterPropertyImpl.h"
#import "CQFHomeAffordanceBaseFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFHomeAffordanceBaseFilter : CQFQuartzFilter <CQFHomeAffordanceBase>
@end

@implementation CQFHomeAffordanceBaseFilter

CQF_FP_IMPL(colorMap)

CQF_FP_IMPL(amount)

CQF_FP_IMPL(overlayOpacity)

CQF_FP_IMPL(addWhite)

CQF_FP_IMPL(addColor)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFHomeAffordanceBase)

+ (CQFQuartzFilter<CQFHomeAffordanceBase> *)homeAffordanceBaseFilter {
    return [[CQFHomeAffordanceBaseFilter alloc] initWithType:CQFQuartzFilterTypeHomeAffordanceBase];
}

+ (CQFQuartzFilter<CQFHomeAffordanceBase> * _Nullable)homeAffordanceBaseFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeHomeAffordanceBase]) {
        return nil;
    }
    return [[CQFHomeAffordanceBaseFilter alloc] initWithFilter:filter];
}

@end

#endif
