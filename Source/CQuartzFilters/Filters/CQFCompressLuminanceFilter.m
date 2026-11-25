//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFCompressLuminanceFilter.h"
#import "CQFFilterPropertyImpl.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFCompressLuminanceFilter : CQFQuartzFilter <CQFCompressLuminance>
@end

@implementation CQFCompressLuminanceFilter

CQF_FP_IMPL(amount)

@end

@implementation CQFQuartzFilter (CQFCompressLuminance)

+ (CQFQuartzFilter<CQFCompressLuminance> *)compressLuminanceFilter {
    return [[CQFCompressLuminanceFilter alloc] initWithType:CQFQuartzFilterTypeCompressLuminance];
}

+ (CQFQuartzFilter<CQFCompressLuminance> * _Nullable)compressLuminanceFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypeCompressLuminance]) {
        return nil;
    }
    return [[CQFCompressLuminanceFilter alloc] initWithFilter:filter];
}

@end
