//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFMultiplyColorFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFMultiplyColorFilter : CQFQuartzFilter <CQFMultiplyColor>
@end

@implementation CQFMultiplyColorFilter

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFMultiplyColor)

+ (CQFQuartzFilter<CQFMultiplyColor> *)multiplyColorFilter {
    return [[CQFMultiplyColorFilter alloc] initWithType:CQFQuartzFilterTypeMultiplyColor];
}

+ (CQFQuartzFilter<CQFMultiplyColor> * _Nullable)multiplyColorFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeMultiplyColor]) {
        return nil;
    }
    return [[CQFMultiplyColorFilter alloc] initWithFilter:filter];
}

@end
