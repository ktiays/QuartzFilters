//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFLUTFilter.h"
#import "CQuartzFiltersPrivate.h"

API_AVAILABLE(ios(16.0), macos(13.0))
@interface CQFLUTFilter : CQFQuartzFilter <CQFLUT>
@end

@implementation CQFLUTFilter

CQF_FP_IMPL(values)

CQF_FP_IMPL(colorMap)

CQF_FP_IMPL(scale)

@end

@implementation CQFQuartzFilter (CQFLUT)

+ (CQFQuartzFilter<CQFLUT> *)lutFilter {
    return [[CQFLUTFilter alloc] initWithType:CQFQuartzFilterTypeLut];
}

+ (CQFQuartzFilter<CQFLUT> * _Nullable)lutFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeLut]) {
        return nil;
    }
    return [[CQFLUTFilter alloc] initWithFilter:filter];
}

@end
