//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFDisplacementMapFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(26.0), macos(26.0))
@interface CQFDisplacementMapFilter : CQFQuartzFilter <CQFDisplacementMap>
@end

@implementation CQFDisplacementMapFilter

CQF_FP_IMPL(maskImage)

CQF_FP_IMPL(offset)

CQF_FP_IMPL(amount)

CQF_FP_IMPL(sourceSublayerName)

@end

@implementation CQFQuartzFilter (CQFDisplacementMap)

+ (CQFQuartzFilter<CQFDisplacementMap> *)displacementMapFilter {
    return [[CQFDisplacementMapFilter alloc] initWithType:CQFQuartzFilterTypeDisplacementMap];
}

+ (CQFQuartzFilter<CQFDisplacementMap> * _Nullable)displacementMapFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeDisplacementMap]) {
        return nil;
    }
    return [[CQFDisplacementMapFilter alloc] initWithFilter:filter];
}

@end
