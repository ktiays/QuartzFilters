//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFGlassForegroundFilter.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0))
@interface CQFGlassForegroundFilter : CQFQuartzFilter <CQFGlassForeground>
@end

@implementation CQFGlassForegroundFilter

CQF_FP_IMPL(sourceSublayerName)

CQF_FP_IMPL(refractionAmount)

CQF_FP_IMPL(refractionHeight)

CQF_FP_IMPL(refractionOffset)

CQF_FP_IMPL(refractionAngle)

CQF_FP_IMPL(aberrationAmount)

CQF_FP_IMPL(aberrationHeight)

CQF_FP_IMPL(aberrationOffset)

CQF_FP_IMPL(aberrationAngle)

CQF_FP_IMPL(edgeStart)

CQF_FP_IMPL(edgeEnd)

CQF_FP_IMPL(edgeOpacityStart)

CQF_FP_IMPL(edgeOpacityEnd)

@end

@implementation CQFQuartzFilter (CQFGlassForeground)

+ (CQFQuartzFilter<CQFGlassForeground> *)glassForegroundFilter {
    return [[CQFGlassForegroundFilter alloc] initWithType:CQFQuartzFilterTypeGlassForeground];
}

+ (CQFQuartzFilter<CQFGlassForeground> * _Nullable)glassForegroundFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeGlassForeground]) {
        return nil;
    }
    return [[CQFGlassForegroundFilter alloc] initWithFilter:filter];
}

@end
