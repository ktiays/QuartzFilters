//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFPageCurlFilter_h
#define CQFPageCurlFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PageCurl)
@protocol CQFPageCurl <NSObject>

CQF_FP_DECL(angle);

CQF_FP_DECL(radius);

CQF_FP_DECL(time);

CQF_FP_DECL(startAngle);

CQF_FP_DECL(endAngle);

CQF_FP_DECL(backEnabled);

CQF_FP_DECL(backColor0);

CQF_FP_DECL(backColor1);

CQF_FP_DECL(frontEnabled);

CQF_FP_DECL(frontColor);

CQF_FP_DECL(shadowColor);

CQF_FP_DECL(shadowBounds);

@end

@interface CQFQuartzFilter (CQFPageCurl)

+ (CQFQuartzFilter<CQFPageCurl> *)pageCurlFilter;

+ (CQFQuartzFilter<CQFPageCurl> * _Nullable)pageCurlFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(pageCurl(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFPageCurlFilter_h */
