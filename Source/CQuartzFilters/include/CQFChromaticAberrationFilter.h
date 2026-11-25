//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFChromaticAberrationFilter_h
#define CQFChromaticAberrationFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(18.0), macos(15.0)) NS_SWIFT_NAME(ChromaticAberration)
@protocol CQFChromaticAberration <NSObject>

CQF_FP_DECL(redOffset);

CQF_FP_DECL(blueOffset);

CQF_FP_DECL(greenOffset);

CQF_FP_DECL(extendEdges) API_AVAILABLE(ios(18.1), macos(15.1));

@end

API_AVAILABLE(ios(18.0), macos(15.0))
@interface CQFQuartzFilter (CQFChromaticAberration)

+ (CQFQuartzFilter<CQFChromaticAberration> *)chromaticAberrationFilter API_AVAILABLE(ios(18.0), macos(15.0));

+ (CQFQuartzFilter<CQFChromaticAberration> * _Nullable)chromaticAberrationFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(chromaticAberration(with:)) API_AVAILABLE(ios(18.0), macos(15.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFChromaticAberrationFilter_h */
