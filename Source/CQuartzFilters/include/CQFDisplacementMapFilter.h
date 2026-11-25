//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFDisplacementMapFilter_h
#define CQFDisplacementMapFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(26.0), macos(26.0)) NS_SWIFT_NAME(DisplacementMap)
@protocol CQFDisplacementMap <NSObject>

CQF_FP_DECL(maskImage);

CQF_FP_DECL(offset);

CQF_FP_DECL(amount);

CQF_FP_DECL(sourceSublayerName);

@end

API_AVAILABLE(ios(26.0), macos(26.0))
@interface CQFQuartzFilter (CQFDisplacementMap)

+ (CQFQuartzFilter<CQFDisplacementMap> *)displacementMapFilter API_AVAILABLE(ios(26.0), macos(26.0));

+ (CQFQuartzFilter<CQFDisplacementMap> * _Nullable)displacementMapFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(displacementMap(with:)) API_AVAILABLE(ios(26.0), macos(26.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFDisplacementMapFilter_h */
