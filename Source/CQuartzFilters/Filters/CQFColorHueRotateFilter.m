//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorHueRotateFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFColorHueRotateFilter : CQFQuartzFilter <CQFColorHueRotate>
@end

@implementation CQFColorHueRotateFilter

CQF_FP_IMPL(angle)

- (BOOL)hsvSpace {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeyHSVSpace] boolValue];
}

- (void)setHsvSpace:(BOOL)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeyHSVSpace];
}

@end

@implementation CQFQuartzFilter (CQFColorHueRotate)

+ (CQFQuartzFilter<CQFColorHueRotate> *)colorHueRotateFilter {
    return [[CQFColorHueRotateFilter alloc] initWithType:CQFQuartzFilterTypeColorHueRotate];
}

+ (CQFQuartzFilter<CQFColorHueRotate> * _Nullable)colorHueRotateFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeColorHueRotate]) {
        return nil;
    }
    return [[CQFColorHueRotateFilter alloc] initWithFilter:filter];
}

@end
