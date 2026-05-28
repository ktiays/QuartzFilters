//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFQuartzFilterType.h"

#ifndef __IMPL_CQFFILTER_TYPE__
#define __IMPL_CQFFILTER_TYPE__(__NAME, __VAL) CQFQuartzFilterType const CQFQuartzFilterType##__NAME = @#__VAL
#endif

__IMPL_CQFFILTER_TYPE__(AlphaSmoothThreshold, alphaSmoothThreshold);
__IMPL_CQFFILTER_TYPE__(AlphaThreshold, alphaThreshold);
__IMPL_CQFFILTER_TYPE__(AverageColor, averageColor);
__IMPL_CQFFILTER_TYPE__(Bias, bias);
__IMPL_CQFFILTER_TYPE__(ChromaticAberration, chromaticAberration);
__IMPL_CQFFILTER_TYPE__(ChromaticAberrationMap, chromaticAberrationMap);
__IMPL_CQFFILTER_TYPE__(ColorAdd, colorAdd);
__IMPL_CQFFILTER_TYPE__(ColorBrightness, colorBrightness);
__IMPL_CQFFILTER_TYPE__(ColorContrast, colorContrast);
__IMPL_CQFFILTER_TYPE__(ColorHueRotate, colorHueRotate);
__IMPL_CQFFILTER_TYPE__(ColorInvert, colorInvert);
__IMPL_CQFFILTER_TYPE__(ColorInvertDisplayAware, colorInvertDisplayAware);
__IMPL_CQFFILTER_TYPE__(ColorMatrix, colorMatrix);
__IMPL_CQFFILTER_TYPE__(ColorMonochrome, colorMonochrome);
__IMPL_CQFFILTER_TYPE__(ColorSaturate, colorSaturate);
__IMPL_CQFFILTER_TYPE__(ColorSubtract, colorSubtract);
__IMPL_CQFFILTER_TYPE__(CompressLuminance, compressLuminance);
__IMPL_CQFFILTER_TYPE__(Curves, curves);
__IMPL_CQFFILTER_TYPE__(DisplacementMap, displacementMap);
__IMPL_CQFFILTER_TYPE__(DistanceField, distanceField);
__IMPL_CQFFILTER_TYPE__(EdrGain, edrGain);
__IMPL_CQFFILTER_TYPE__(EdrGainMultiply, edrGainMultiply);
__IMPL_CQFFILTER_TYPE__(GaussianBlur, gaussianBlur);
__IMPL_CQFFILTER_TYPE__(GlassBackground, glassBackground);
__IMPL_CQFFILTER_TYPE__(GlassForeground, glassForeground);
__IMPL_CQFFILTER_TYPE__(LanczosResize, lanczosResize);
__IMPL_CQFFILTER_TYPE__(LimitAveragePixelLuminance, limitAveragePixelLuminance);
__IMPL_CQFFILTER_TYPE__(LuminanceCurveMap, luminanceCurveMap);
__IMPL_CQFFILTER_TYPE__(LuminanceMap, luminanceMap);
__IMPL_CQFFILTER_TYPE__(LuminanceToAlpha, luminanceToAlpha);
__IMPL_CQFFILTER_TYPE__(Lut, lut);
__IMPL_CQFFILTER_TYPE__(Meteor, meteor);
__IMPL_CQFFILTER_TYPE__(MultiplyColor, multiplyColor);
__IMPL_CQFFILTER_TYPE__(OpacityPair, opacityPair);
__IMPL_CQFFILTER_TYPE__(PageCurl, pageCurl);
__IMPL_CQFFILTER_TYPE__(SdrNormalize, sdrNormalize);
__IMPL_CQFFILTER_TYPE__(Srl, srl);
__IMPL_CQFFILTER_TYPE__(VariableBlur, variableBlur);
__IMPL_CQFFILTER_TYPE__(VibrantColorMatrix, vibrantColorMatrix);
__IMPL_CQFFILTER_TYPE__(VibrantColorMatrixSourceOver, vibrantColorMatrixSourceOver);
__IMPL_CQFFILTER_TYPE__(VibrantDark, vibrantDark);
__IMPL_CQFFILTER_TYPE__(VibrantLight, vibrantLight);
