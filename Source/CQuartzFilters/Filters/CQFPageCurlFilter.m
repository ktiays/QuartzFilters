//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFPageCurlFilter.h"
#import "CQuartzFiltersPrivate.h"

@interface CQFPageCurlFilter : CQFQuartzFilter <CQFPageCurl>
@end

@implementation CQFPageCurlFilter

CQF_FP_IMPL(angle)

CQF_FP_IMPL(radius)

CQF_FP_IMPL(time)

CQF_FP_IMPL(startAngle)

CQF_FP_IMPL(endAngle)

CQF_FP_IMPL(backEnabled)

CQF_FP_IMPL(backColor0)

CQF_FP_IMPL(backColor1)

CQF_FP_IMPL(frontEnabled)

CQF_FP_IMPL(frontColor)

CQF_FP_IMPL(shadowColor)

CQF_FP_IMPL(shadowBounds)

@end

@implementation CQFQuartzFilter (CQFPageCurl)

+ (CQFQuartzFilter<CQFPageCurl> *)pageCurlFilter {
    return [[CQFPageCurlFilter alloc] initWithType:CQFQuartzFilterTypePageCurl];
}

+ (CQFQuartzFilter<CQFPageCurl> * _Nullable)pageCurlFilterWithCurrent:(nullable id)current {
    if (!current || ![NSStringFromClass([current class]) isEqualToString:kCQFCAFilterClassName]) {
        return nil;
    }
    id<CQFCAFilterProtocol> filter = (id<CQFCAFilterProtocol>) current;
    if (![filter.type isEqualToString:CQFQuartzFilterTypePageCurl]) {
        return nil;
    }
    return [[CQFPageCurlFilter alloc] initWithFilter:filter];
}

@end
