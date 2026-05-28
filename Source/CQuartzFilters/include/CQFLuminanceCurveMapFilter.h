//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFLuminanceCurveMapFilter_h
#define CQFLuminanceCurveMapFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LuminanceCurveMap)
@protocol CQFLuminanceCurveMap <NSObject>

CQF_FP_DECL(values);

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFLuminanceCurveMap)

+ (CQFQuartzFilter<CQFLuminanceCurveMap> *)luminanceCurveMapFilter;

+ (CQFQuartzFilter<CQFLuminanceCurveMap> *)luminanceCurveMapFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFLuminanceCurveMapFilter_h */
