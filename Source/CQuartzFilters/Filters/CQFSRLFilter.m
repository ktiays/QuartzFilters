//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFSRLFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFSRLFilter : CQFQuartzFilter <CQFSRL>
@end

@implementation CQFSRLFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFSRL)

+ (CQFQuartzFilter<CQFSRL> *)srlFilter {
    return [[CQFSRLFilter alloc] initWithType:CQFQuartzFilterTypeSrl];
}

+ (CQFQuartzFilter<CQFSRL> * _Nullable)srlFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeSrl]) {
        return nil;
    }
    return [[CQFSRLFilter alloc] initWithFilter:filter];
}

@end
