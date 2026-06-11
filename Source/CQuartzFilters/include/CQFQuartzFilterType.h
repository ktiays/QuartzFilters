//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFQuartzFilterType_h
#define CQFQuartzFilterType_h

#import <Foundation/Foundation.h>

#ifndef __DEF_CQFFILTER_TYPE__
#define __DEF_CQFFILTER_TYPE__(__NAME) FOUNDATION_EXPORT CQFQuartzFilterType const CQFQuartzFilterType##__NAME
#endif

NS_ASSUME_NONNULL_BEGIN

typedef NSString * CQFQuartzFilterType NS_STRING_ENUM NS_SWIFT_NAME(QuartzFilterType);

__DEF_CQFFILTER_TYPE__(AlphaSmoothThreshold);
__DEF_CQFFILTER_TYPE__(AlphaThreshold);
__DEF_CQFFILTER_TYPE__(AverageColor);
__DEF_CQFFILTER_TYPE__(Bias);
__DEF_CQFFILTER_TYPE__(ChromaticAberration);
__DEF_CQFFILTER_TYPE__(ChromaticAberrationMap);
__DEF_CQFFILTER_TYPE__(ColorAdd);
__DEF_CQFFILTER_TYPE__(ColorBrightness);
__DEF_CQFFILTER_TYPE__(ColorContrast);
__DEF_CQFFILTER_TYPE__(ColorHueRotate);
__DEF_CQFFILTER_TYPE__(ColorInvert);
__DEF_CQFFILTER_TYPE__(ColorInvertDisplayAware);
__DEF_CQFFILTER_TYPE__(ColorMatrix);
__DEF_CQFFILTER_TYPE__(ColorMonochrome);
__DEF_CQFFILTER_TYPE__(ColorSaturate);
__DEF_CQFFILTER_TYPE__(ColorSubtract);
__DEF_CQFFILTER_TYPE__(CompressLuminance);
__DEF_CQFFILTER_TYPE__(Curves);
__DEF_CQFFILTER_TYPE__(DisplacementMap);
__DEF_CQFFILTER_TYPE__(DistanceField);
__DEF_CQFFILTER_TYPE__(EdrGain);
__DEF_CQFFILTER_TYPE__(EdrGainMultiply);
__DEF_CQFFILTER_TYPE__(GaussianBlur);
__DEF_CQFFILTER_TYPE__(GlassBackground) API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0));
__DEF_CQFFILTER_TYPE__(GlassForeground) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_TYPE__(LanczosResize);
__DEF_CQFFILTER_TYPE__(LimitAveragePixelLuminance);
__DEF_CQFFILTER_TYPE__(LuminanceCurveMap);
__DEF_CQFFILTER_TYPE__(LuminanceMap);
__DEF_CQFFILTER_TYPE__(LuminanceToAlpha);
__DEF_CQFFILTER_TYPE__(Lut);
__DEF_CQFFILTER_TYPE__(Meteor);
__DEF_CQFFILTER_TYPE__(MultiplyColor);
__DEF_CQFFILTER_TYPE__(OpacityPair);
__DEF_CQFFILTER_TYPE__(PageCurl);
__DEF_CQFFILTER_TYPE__(SdrNormalize);
__DEF_CQFFILTER_TYPE__(Srl);
__DEF_CQFFILTER_TYPE__(VariableBlur);
__DEF_CQFFILTER_TYPE__(VibrantColorMatrix);
__DEF_CQFFILTER_TYPE__(VibrantColorMatrixSourceOver);
__DEF_CQFFILTER_TYPE__(VibrantDark);
__DEF_CQFFILTER_TYPE__(VibrantLight);

NS_ASSUME_NONNULL_END

#endif /* CQFQuartzFilterType_h */
