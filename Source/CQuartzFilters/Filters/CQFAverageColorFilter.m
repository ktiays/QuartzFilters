//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFAverageColorFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFAverageColorFilter : CQFQuartzFilter <CQFAverageColor>
@end

@implementation CQFAverageColorFilter

@end

@implementation CQFQuartzFilter (CQFAverageColor)

+ (CQFQuartzFilter<CQFAverageColor> *)averageColorFilter {
    return [[CQFAverageColorFilter alloc] initWithType:CQFQuartzFilterTypeAverageColor];
}

+ (CQFQuartzFilter<CQFAverageColor> * _Nullable)averageColorFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeAverageColor]) {
        return nil;
    }
    return [[CQFAverageColorFilter alloc] initWithFilter:filter];
}

@end
