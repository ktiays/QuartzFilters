//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFChromaticAberrationFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(18.0), macos(15.0))
@interface CQFChromaticAberrationFilter : CQFQuartzFilter <CQFChromaticAberration>
@end

@implementation CQFChromaticAberrationFilter

CQF_FP_IMPL(redOffset)

CQF_FP_IMPL(blueOffset)

CQF_FP_IMPL(greenOffset)

CQF_FP_IMPL(extendEdges)

@end

@implementation CQFQuartzFilter (CQFChromaticAberration)

+ (CQFQuartzFilter<CQFChromaticAberration> *)chromaticAberrationFilter {
    return [[CQFChromaticAberrationFilter alloc] initWithType:CQFQuartzFilterTypeChromaticAberration];
}

+ (CQFQuartzFilter<CQFChromaticAberration> * _Nullable)chromaticAberrationFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeChromaticAberration]) {
        return nil;
    }
    return [[CQFChromaticAberrationFilter alloc] initWithFilter:filter];
}

@end
