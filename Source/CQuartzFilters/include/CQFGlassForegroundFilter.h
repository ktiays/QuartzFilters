//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFGlassForegroundFilter_h
#define CQFGlassForegroundFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0)) NS_SWIFT_NAME(GlassForeground)
@protocol CQFGlassForeground <NSObject>

CQF_FP_DECL(sourceSublayerName);

CQF_FP_DECL(refractionAmount);

CQF_FP_DECL(refractionHeight);

CQF_FP_DECL(refractionOffset);

CQF_FP_DECL(refractionAngle);

CQF_FP_DECL(aberrationAmount);

CQF_FP_DECL(aberrationHeight);

CQF_FP_DECL(aberrationOffset);

CQF_FP_DECL(aberrationAngle);

CQF_FP_DECL(edgeStart);

CQF_FP_DECL(edgeEnd);

CQF_FP_DECL(edgeOpacityStart);

CQF_FP_DECL(edgeOpacityEnd);

@end

API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0))
@interface CQFQuartzFilter (CQFGlassForeground)

+ (CQFQuartzFilter<CQFGlassForeground> *)glassForegroundFilter API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0));

+ (CQFQuartzFilter<CQFGlassForeground> * _Nullable)glassForegroundFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(glassForeground(with:)) API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFGlassForegroundFilter_h */
