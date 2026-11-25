//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorMonochromeFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorMonochromeFilter : CQFQuartzFilter <CQFColorMonochrome>
@end

@implementation CQFColorMonochromeFilter

CQF_FP_IMPL(bias)

CQF_FP_IMPL(amount)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFColorMonochrome)

+ (CQFQuartzFilter<CQFColorMonochrome> *)colorMonochromeFilter {
    return [[CQFColorMonochromeFilter alloc] initWithType:CQFQuartzFilterTypeColorMonochrome];
}

+ (CQFQuartzFilter<CQFColorMonochrome> * _Nullable)colorMonochromeFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorMonochrome]) {
        return nil;
    }
    return [[CQFColorMonochromeFilter alloc] initWithFilter:filter];
}

@end
