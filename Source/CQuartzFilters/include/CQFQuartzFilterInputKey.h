//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFQuartzFilterInputKey_h
#define CQFQuartzFilterInputKey_h

#import <Foundation/Foundation.h>

#ifndef __DEF_CQFFILTER_INPUT_KEY__
#define __DEF_CQFFILTER_INPUT_KEY__(__NAME) FOUNDATION_EXPORT CQFQuartzFilterInputKey const CQFQuartzFilterInputKey##__NAME
#endif

NS_ASSUME_NONNULL_BEGIN

typedef NSString * CQFQuartzFilterInputKey NS_STRING_ENUM NS_SWIFT_NAME(QuartzFilterInputKey);

__DEF_CQFFILTER_INPUT_KEY__(AberrationAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(AberrationAngle) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(AberrationHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(AberrationOffset) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Adaptive) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(AddColor) API_UNAVAILABLE(macos);
__DEF_CQFFILTER_INPUT_KEY__(AddWhite);
__DEF_CQFFILTER_INPUT_KEY__(AllowsGroup) API_AVAILABLE(ios(17.0), macos(14.0));
__DEF_CQFFILTER_INPUT_KEY__(AlphaValues);
__DEF_CQFFILTER_INPUT_KEY__(Amount);
__DEF_CQFFILTER_INPUT_KEY__(Angle);
__DEF_CQFFILTER_INPUT_KEY__(AspectRatio);
__DEF_CQFFILTER_INPUT_KEY__(BackColor0);
__DEF_CQFFILTER_INPUT_KEY__(BackColor1);
__DEF_CQFFILTER_INPUT_KEY__(BackEnabled);
__DEF_CQFFILTER_INPUT_KEY__(BackdropAware) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Bias);
__DEF_CQFFILTER_INPUT_KEY__(BleedAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedBlurRadius) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedColorMatrixBlack) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedColorMatrixFillColor) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedColorMatrixSaturation) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedColorMatrixWhite) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedDarkenBlend) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedDistance0) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedDistance1) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BleedOpacity) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlueOffset) API_AVAILABLE(ios(18.0), macos(15.0));
__DEF_CQFFILTER_INPUT_KEY__(BlueValues);
__DEF_CQFFILTER_INPUT_KEY__(BlurDistance0) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurDistance1) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurDistance2) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurDistance3) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurDistance4) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurFillBlurRadius) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurFillDarkenOpacity) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurFillLightenOpacity) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurFillNormalOpacity) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurOpacity0) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurOpacity1) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurOpacity2) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurOpacity3) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurOpacity4) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(BlurRadius) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Bounds);
__DEF_CQFFILTER_INPUT_KEY__(Clamp) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ClampPreserveHue) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Color);
__DEF_CQFFILTER_INPUT_KEY__(Color0);
__DEF_CQFFILTER_INPUT_KEY__(Color1);
__DEF_CQFFILTER_INPUT_KEY__(ColorMap);
__DEF_CQFFILTER_INPUT_KEY__(ColorMatrix);
__DEF_CQFFILTER_INPUT_KEY__(DisplayInvertAware);
__DEF_CQFFILTER_INPUT_KEY__(DistanceFieldOffset);
__DEF_CQFFILTER_INPUT_KEY__(Dither);
__DEF_CQFFILTER_INPUT_KEY__(EdgeEnd) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(EdgeOpacityEnd) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(EdgeOpacityStart) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(EdgeStart) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(End) API_AVAILABLE(ios(18.1), macos(15.1));
__DEF_CQFFILTER_INPUT_KEY__(EndAngle);
__DEF_CQFFILTER_INPUT_KEY__(ExtendEdges) API_AVAILABLE(ios(18.1), macos(15.1));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixBlack) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixFillColor) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixMaxLuma) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixMaxLumaSDR) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixSaturation) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceColorMatrixWhite) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(FaceOpacity) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Fade) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ForegroundColor);
__DEF_CQFFILTER_INPUT_KEY__(FrontColor);
__DEF_CQFFILTER_INPUT_KEY__(FrontEnabled);
__DEF_CQFFILTER_INPUT_KEY__(GreenOffset) API_AVAILABLE(ios(18.0), macos(15.0));
__DEF_CQFFILTER_INPUT_KEY__(GreenValues);
__DEF_CQFFILTER_INPUT_KEY__(HSVSpace);
__DEF_CQFFILTER_INPUT_KEY__(HardEdges);
__DEF_CQFFILTER_INPUT_KEY__(InnerRefractionAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(InnerRefractionHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(IntermediateBitDepth);
__DEF_CQFFILTER_INPUT_KEY__(InvertsShape);
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightAmount) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightAngle) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightColorBias) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightEffectOffset) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightHeight) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightSpread) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(KeyFillHighlightSpreadSDR) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(LineWidth);
__DEF_CQFFILTER_INPUT_KEY__(Linear);
__DEF_CQFFILTER_INPUT_KEY__(MaskImage);
__DEF_CQFFILTER_INPUT_KEY__(MaxHeadroom) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(NormalizeEdges);
__DEF_CQFFILTER_INPUT_KEY__(NormalizeEdgesTransparent) API_AVAILABLE(ios(17.0), macos(14.0));
__DEF_CQFFILTER_INPUT_KEY__(Offset) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(OuterRefractionAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(OuterRefractionHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(OverlayOpacity);
__DEF_CQFFILTER_INPUT_KEY__(PremultipliedValues) API_AVAILABLE(ios(16.0), macos(13.0));
__DEF_CQFFILTER_INPUT_KEY__(Quality);
__DEF_CQFFILTER_INPUT_KEY__(Radius);
__DEF_CQFFILTER_INPUT_KEY__(RedOffset) API_AVAILABLE(ios(18.0), macos(15.0));
__DEF_CQFFILTER_INPUT_KEY__(RedValues);
__DEF_CQFFILTER_INPUT_KEY__(RefractionAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionAngle) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionDistance0) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionDistance1) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionOffset) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RefractionOpacity) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(RenderMode);
__DEF_CQFFILTER_INPUT_KEY__(Reversed);
__DEF_CQFFILTER_INPUT_KEY__(RingShadowBlurRadius) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(RingShadowMask) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(RingShadowOffset) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(RingShadowOpacity) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(RingShadowStrokeWidth) API_AVAILABLE(ios(27.0), macos(27.0));
__DEF_CQFFILTER_INPUT_KEY__(SDRGradientDistance0) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(SDRGradientDistance1) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(SDRHoldingToneEnabled) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(SDRHoldingToneWhite) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(SDRShadowOpacity) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Scale);
__DEF_CQFFILTER_INPUT_KEY__(ShadowAmount) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowBlurRadius) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowBounds);
__DEF_CQFFILTER_INPUT_KEY__(ShadowColor);
__DEF_CQFFILTER_INPUT_KEY__(ShadowColorMatrixBlack) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowColorMatrixFillColor) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowColorMatrixSaturation) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowColorMatrixWhite) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowDistanceOffset) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowHeight) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowOffset) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowOpacity) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowRadius) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(ShadowVibrancyContribution) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Sharpness);
__DEF_CQFFILTER_INPUT_KEY__(SourceSublayerName) API_AVAILABLE(ios(26.0), macos(26.0));
__DEF_CQFFILTER_INPUT_KEY__(Start) API_AVAILABLE(ios(18.1), macos(15.1));
__DEF_CQFFILTER_INPUT_KEY__(StartAngle);
__DEF_CQFFILTER_INPUT_KEY__(Time);
__DEF_CQFFILTER_INPUT_KEY__(UseP3Space);
__DEF_CQFFILTER_INPUT_KEY__(Values);

NS_ASSUME_NONNULL_END

#endif /* CQFQuartzFilterInputKey_h */
