//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFDistanceFieldFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFDistanceFieldFilter : CQFQuartzFilter <CQFDistanceField>
@end

@implementation CQFDistanceFieldFilter

CQF_FP_IMPL(renderMode)

CQF_FP_IMPL(invertsShape)

CQF_FP_IMPL(foregroundColor)

- (CGFloat)offset {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeyDistanceFieldOffset] doubleValue];
}

- (void)setOffset:(CGFloat)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeyDistanceFieldOffset];
}

CQF_FP_IMPL(sharpness)

CQF_FP_IMPL(lineWidth)

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFDistanceField)

+ (CQFQuartzFilter<CQFDistanceField> *)distanceFieldFilter {
    return [[CQFDistanceFieldFilter alloc] initWithType:CQFQuartzFilterTypeDistanceField];
}

+ (CQFQuartzFilter<CQFDistanceField> * _Nullable)distanceFieldFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeDistanceField]) {
        return nil;
    }
    return [[CQFDistanceFieldFilter alloc] initWithFilter:filter];
}

@end
