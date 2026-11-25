//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFDistanceFieldFilter_h
#define CQFDistanceFieldFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(DistanceField)
@protocol CQFDistanceField <NSObject>

CQF_FP_DECL(renderMode);

CQF_FP_DECL(invertsShape);

CQF_FP_DECL(foregroundColor);

@property (nonatomic, assign) CGFloat offset;

CQF_FP_DECL(sharpness);

CQF_FP_DECL(lineWidth);

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFDistanceField)

+ (CQFQuartzFilter<CQFDistanceField> *)distanceFieldFilter;

+ (CQFQuartzFilter<CQFDistanceField> * _Nullable)distanceFieldFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(distanceField(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFDistanceFieldFilter_h */
