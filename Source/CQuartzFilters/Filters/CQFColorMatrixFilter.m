//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorMatrixFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorMatrixFilter : CQFQuartzFilter <CQFColorMatrixProtocol>
@end

@implementation CQFColorMatrixFilter

CQF_FP_IMPL(colorMatrix)

@end

@implementation CQFQuartzFilter (CQFColorMatrixProtocol)

+ (CQFQuartzFilter<CQFColorMatrixProtocol> *)colorMatrixFilter {
    return [[CQFColorMatrixFilter alloc] initWithType:CQFQuartzFilterTypeColorMatrix];
}

+ (CQFQuartzFilter<CQFColorMatrixProtocol> * _Nullable)colorMatrixFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorMatrix]) {
        return nil;
    }
    return [[CQFColorMatrixFilter alloc] initWithFilter:filter];
}

@end
