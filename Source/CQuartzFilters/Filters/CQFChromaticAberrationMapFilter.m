//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFChromaticAberrationMapFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(26.0), macos(26.0))
@interface CQFChromaticAberrationMapFilter : CQFQuartzFilter <CQFChromaticAberrationMap>
@end

@implementation CQFChromaticAberrationMapFilter

CQF_FP_IMPL(maskImage)

CQF_FP_IMPL(offset)

CQF_FP_IMPL(amount)

CQF_FP_IMPL(sourceSublayerName)

@end

@implementation CQFQuartzFilter (CQFChromaticAberrationMap)

+ (CQFQuartzFilter<CQFChromaticAberrationMap> *)chromaticAberrationMapFilter {
    return [[CQFChromaticAberrationMapFilter alloc] initWithType:CQFQuartzFilterTypeChromaticAberrationMap];
}

+ (CQFQuartzFilter<CQFChromaticAberrationMap> * _Nullable)chromaticAberrationMapFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeChromaticAberrationMap]) {
        return nil;
    }
    return [[CQFChromaticAberrationMapFilter alloc] initWithFilter:filter];
}

@end
