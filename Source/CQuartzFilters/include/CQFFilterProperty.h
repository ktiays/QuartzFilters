//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//
//  Single source of truth for filter property metadata.
//
//  For every property `<name>` exposed on a filter protocol, three macros are
//  declared here once and only once:
//
//      CQF_FP_<name>_TYPE  — the Objective-C value type.
//      CQF_FP_<name>_KIND  — the property kind tag (NUMBER, BOOL, STRING,
//                            CGTYPE, POINT, RECT, ARRAY, COLOR_MATRIX). Drives
//                            dispatch inside `CQF_FP_DECL(name)` /
//                            `CQF_FP_IMPL(name)` via token-paste re-expansion.
//      CQF_FP_<name>_KEY   — the input-key suffix (PascalCase). Drives
//                            derivation of the input-key constant
//                            (`CQFQuartzFilterInputKey<KEY>`) and the setter
//                            selector (`set<KEY>`) at template expansion.
//
//  Call sites use the single-argument dispatcher:
//
//      // inside @protocol
//      CQF_FP_DECL(amount);
//
//      // inside @implementation (see CQFFilterPropertyImpl.h)
//      CQF_FP_IMPL(amount)
//
//  Every parameter at the call site is the camelCase property name. The
//  PascalCase form, the input key, and the setter selector are all derived by
//  the preprocessor from the metadata registered here — never written twice.
//

#ifndef CQFFilterProperty_h
#define CQFFilterProperty_h

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "CQFColorMatrix.h"
#import "CQFQuartzFilterInputKey.h"

#pragma mark - Property metadata

// Numeric (CGFloat).
#define CQF_FP_aberrationAmount_TYPE        CGFloat
#define CQF_FP_aberrationAmount_KIND        NUMBER
#define CQF_FP_aberrationAmount_KEY         AberrationAmount

#define CQF_FP_aberrationAngle_TYPE         CGFloat
#define CQF_FP_aberrationAngle_KIND         NUMBER
#define CQF_FP_aberrationAngle_KEY          AberrationAngle

#define CQF_FP_aberrationHeight_TYPE        CGFloat
#define CQF_FP_aberrationHeight_KIND        NUMBER
#define CQF_FP_aberrationHeight_KEY         AberrationHeight

#define CQF_FP_aberrationOffset_TYPE        CGFloat
#define CQF_FP_aberrationOffset_KIND        NUMBER
#define CQF_FP_aberrationOffset_KEY         AberrationOffset

#define CQF_FP_addWhite_TYPE                CGFloat
#define CQF_FP_addWhite_KIND                NUMBER
#define CQF_FP_addWhite_KEY                 AddWhite

#define CQF_FP_amount_TYPE                  CGFloat
#define CQF_FP_amount_KIND                  NUMBER
#define CQF_FP_amount_KEY                   Amount

#define CQF_FP_angle_TYPE                   CGFloat
#define CQF_FP_angle_KIND                   NUMBER
#define CQF_FP_angle_KEY                    Angle

#define CQF_FP_aspectRatio_TYPE             CGFloat
#define CQF_FP_aspectRatio_KIND             NUMBER
#define CQF_FP_aspectRatio_KEY              AspectRatio

#define CQF_FP_bias_TYPE                    CGFloat
#define CQF_FP_bias_KIND                    NUMBER
#define CQF_FP_bias_KEY                     Bias

#define CQF_FP_start_TYPE                   CGFloat
#define CQF_FP_start_KIND                   NUMBER
#define CQF_FP_start_KEY                    Start

#define CQF_FP_startAngle_TYPE              CGFloat
#define CQF_FP_startAngle_KIND              NUMBER
#define CQF_FP_startAngle_KEY               StartAngle

#define CQF_FP_end_TYPE                     CGFloat
#define CQF_FP_end_KIND                     NUMBER
#define CQF_FP_end_KEY                      End

#define CQF_FP_endAngle_TYPE                CGFloat
#define CQF_FP_endAngle_KIND                NUMBER
#define CQF_FP_endAngle_KEY                 EndAngle

#define CQF_FP_clamp_TYPE                   CGFloat
#define CQF_FP_clamp_KIND                   NUMBER
#define CQF_FP_clamp_KEY                    Clamp

#define CQF_FP_edgeStart_TYPE               CGFloat
#define CQF_FP_edgeStart_KIND               NUMBER
#define CQF_FP_edgeStart_KEY                EdgeStart

#define CQF_FP_edgeEnd_TYPE                 CGFloat
#define CQF_FP_edgeEnd_KIND                 NUMBER
#define CQF_FP_edgeEnd_KEY                  EdgeEnd

#define CQF_FP_edgeOpacityStart_TYPE        CGFloat
#define CQF_FP_edgeOpacityStart_KIND        NUMBER
#define CQF_FP_edgeOpacityStart_KEY         EdgeOpacityStart

#define CQF_FP_edgeOpacityEnd_TYPE          CGFloat
#define CQF_FP_edgeOpacityEnd_KIND          NUMBER
#define CQF_FP_edgeOpacityEnd_KEY           EdgeOpacityEnd

#define CQF_FP_innerRefractionAmount_TYPE   CGFloat
#define CQF_FP_innerRefractionAmount_KIND   NUMBER
#define CQF_FP_innerRefractionAmount_KEY    InnerRefractionAmount

#define CQF_FP_innerRefractionHeight_TYPE   CGFloat
#define CQF_FP_innerRefractionHeight_KIND   NUMBER
#define CQF_FP_innerRefractionHeight_KEY    InnerRefractionHeight

#define CQF_FP_outerRefractionAmount_TYPE   CGFloat
#define CQF_FP_outerRefractionAmount_KIND   NUMBER
#define CQF_FP_outerRefractionAmount_KEY    OuterRefractionAmount

#define CQF_FP_outerRefractionHeight_TYPE   CGFloat
#define CQF_FP_outerRefractionHeight_KIND   NUMBER
#define CQF_FP_outerRefractionHeight_KEY    OuterRefractionHeight

#define CQF_FP_overlayOpacity_TYPE          CGFloat
#define CQF_FP_overlayOpacity_KIND          NUMBER
#define CQF_FP_overlayOpacity_KEY           OverlayOpacity

#define CQF_FP_refractionAmount_TYPE        CGFloat
#define CQF_FP_refractionAmount_KIND        NUMBER
#define CQF_FP_refractionAmount_KEY         RefractionAmount

#define CQF_FP_refractionAngle_TYPE         CGFloat
#define CQF_FP_refractionAngle_KIND         NUMBER
#define CQF_FP_refractionAngle_KEY          RefractionAngle

#define CQF_FP_refractionDistance0_TYPE     CGFloat
#define CQF_FP_refractionDistance0_KIND     NUMBER
#define CQF_FP_refractionDistance0_KEY      RefractionDistance0

#define CQF_FP_refractionDistance1_TYPE     CGFloat
#define CQF_FP_refractionDistance1_KIND     NUMBER
#define CQF_FP_refractionDistance1_KEY      RefractionDistance1

#define CQF_FP_refractionHeight_TYPE        CGFloat
#define CQF_FP_refractionHeight_KIND        NUMBER
#define CQF_FP_refractionHeight_KEY         RefractionHeight

#define CQF_FP_refractionOffset_TYPE        CGFloat
#define CQF_FP_refractionOffset_KIND        NUMBER
#define CQF_FP_refractionOffset_KEY         RefractionOffset

#define CQF_FP_refractionOpacity_TYPE       CGFloat
#define CQF_FP_refractionOpacity_KIND       NUMBER
#define CQF_FP_refractionOpacity_KEY        RefractionOpacity

#define CQF_FP_blurFillBlurRadius_TYPE      CGFloat
#define CQF_FP_blurFillBlurRadius_KIND      NUMBER
#define CQF_FP_blurFillBlurRadius_KEY       BlurFillBlurRadius

#define CQF_FP_blurFillDarkenOpacity_TYPE   CGFloat
#define CQF_FP_blurFillDarkenOpacity_KIND   NUMBER
#define CQF_FP_blurFillDarkenOpacity_KEY    BlurFillDarkenOpacity

#define CQF_FP_blurFillLightenOpacity_TYPE  CGFloat
#define CQF_FP_blurFillLightenOpacity_KIND  NUMBER
#define CQF_FP_blurFillLightenOpacity_KEY   BlurFillLightenOpacity

#define CQF_FP_blurFillNormalOpacity_TYPE   CGFloat
#define CQF_FP_blurFillNormalOpacity_KIND   NUMBER
#define CQF_FP_blurFillNormalOpacity_KEY    BlurFillNormalOpacity

#define CQF_FP_blurRadius_TYPE              CGFloat
#define CQF_FP_blurRadius_KIND              NUMBER
#define CQF_FP_blurRadius_KEY               BlurRadius

#define CQF_FP_blurOpacity0_TYPE            CGFloat
#define CQF_FP_blurOpacity0_KIND            NUMBER
#define CQF_FP_blurOpacity0_KEY             BlurOpacity0

#define CQF_FP_blurOpacity1_TYPE            CGFloat
#define CQF_FP_blurOpacity1_KIND            NUMBER
#define CQF_FP_blurOpacity1_KEY             BlurOpacity1

#define CQF_FP_blurOpacity2_TYPE            CGFloat
#define CQF_FP_blurOpacity2_KIND            NUMBER
#define CQF_FP_blurOpacity2_KEY             BlurOpacity2

#define CQF_FP_blurOpacity3_TYPE            CGFloat
#define CQF_FP_blurOpacity3_KIND            NUMBER
#define CQF_FP_blurOpacity3_KEY             BlurOpacity3

#define CQF_FP_blurOpacity4_TYPE            CGFloat
#define CQF_FP_blurOpacity4_KIND            NUMBER
#define CQF_FP_blurOpacity4_KEY             BlurOpacity4

#define CQF_FP_blurDistance0_TYPE           CGFloat
#define CQF_FP_blurDistance0_KIND           NUMBER
#define CQF_FP_blurDistance0_KEY            BlurDistance0

#define CQF_FP_blurDistance1_TYPE           CGFloat
#define CQF_FP_blurDistance1_KIND           NUMBER
#define CQF_FP_blurDistance1_KEY            BlurDistance1

#define CQF_FP_blurDistance2_TYPE           CGFloat
#define CQF_FP_blurDistance2_KIND           NUMBER
#define CQF_FP_blurDistance2_KEY            BlurDistance2

#define CQF_FP_blurDistance3_TYPE           CGFloat
#define CQF_FP_blurDistance3_KIND           NUMBER
#define CQF_FP_blurDistance3_KEY            BlurDistance3

#define CQF_FP_blurDistance4_TYPE           CGFloat
#define CQF_FP_blurDistance4_KIND           NUMBER
#define CQF_FP_blurDistance4_KEY            BlurDistance4

#define CQF_FP_faceOpacity_TYPE             CGFloat
#define CQF_FP_faceOpacity_KIND             NUMBER
#define CQF_FP_faceOpacity_KEY              FaceOpacity

#define CQF_FP_faceColorMatrixWhite_TYPE    CGFloat
#define CQF_FP_faceColorMatrixWhite_KIND    NUMBER
#define CQF_FP_faceColorMatrixWhite_KEY     FaceColorMatrixWhite

#define CQF_FP_faceColorMatrixBlack_TYPE    CGFloat
#define CQF_FP_faceColorMatrixBlack_KIND    NUMBER
#define CQF_FP_faceColorMatrixBlack_KEY     FaceColorMatrixBlack

#define CQF_FP_faceColorMatrixMaxLuma_TYPE      CGFloat
#define CQF_FP_faceColorMatrixMaxLuma_KIND      NUMBER
#define CQF_FP_faceColorMatrixMaxLuma_KEY       FaceColorMatrixMaxLuma

#define CQF_FP_faceColorMatrixMaxLumaSDR_TYPE   CGFloat
#define CQF_FP_faceColorMatrixMaxLumaSDR_KIND   NUMBER
#define CQF_FP_faceColorMatrixMaxLumaSDR_KEY    FaceColorMatrixMaxLumaSDR

#define CQF_FP_faceColorMatrixSaturation_TYPE   CGFloat
#define CQF_FP_faceColorMatrixSaturation_KIND   NUMBER
#define CQF_FP_faceColorMatrixSaturation_KEY    FaceColorMatrixSaturation

#define CQF_FP_keyFillHighlightAmount_TYPE      CGFloat
#define CQF_FP_keyFillHighlightAmount_KIND      NUMBER
#define CQF_FP_keyFillHighlightAmount_KEY       KeyFillHighlightAmount

#define CQF_FP_keyFillHighlightAngle_TYPE       CGFloat
#define CQF_FP_keyFillHighlightAngle_KIND       NUMBER
#define CQF_FP_keyFillHighlightAngle_KEY        KeyFillHighlightAngle

#define CQF_FP_keyFillHighlightColorBias_TYPE   CGFloat
#define CQF_FP_keyFillHighlightColorBias_KIND   NUMBER
#define CQF_FP_keyFillHighlightColorBias_KEY    KeyFillHighlightColorBias

#define CQF_FP_keyFillHighlightEffectOffset_TYPE    CGFloat
#define CQF_FP_keyFillHighlightEffectOffset_KIND    NUMBER
#define CQF_FP_keyFillHighlightEffectOffset_KEY     KeyFillHighlightEffectOffset

#define CQF_FP_keyFillHighlightHeight_TYPE      CGFloat
#define CQF_FP_keyFillHighlightHeight_KIND      NUMBER
#define CQF_FP_keyFillHighlightHeight_KEY       KeyFillHighlightHeight

#define CQF_FP_keyFillHighlightSpread_TYPE      CGFloat
#define CQF_FP_keyFillHighlightSpread_KIND      NUMBER
#define CQF_FP_keyFillHighlightSpread_KEY       KeyFillHighlightSpread

#define CQF_FP_keyFillHighlightSpreadSDR_TYPE   CGFloat
#define CQF_FP_keyFillHighlightSpreadSDR_KIND   NUMBER
#define CQF_FP_keyFillHighlightSpreadSDR_KEY    KeyFillHighlightSpreadSDR

#define CQF_FP_bleedAmount_TYPE             CGFloat
#define CQF_FP_bleedAmount_KIND             NUMBER
#define CQF_FP_bleedAmount_KEY              BleedAmount

#define CQF_FP_bleedHeight_TYPE             CGFloat
#define CQF_FP_bleedHeight_KIND             NUMBER
#define CQF_FP_bleedHeight_KEY              BleedHeight

#define CQF_FP_bleedBlurRadius_TYPE         CGFloat
#define CQF_FP_bleedBlurRadius_KIND         NUMBER
#define CQF_FP_bleedBlurRadius_KEY          BleedBlurRadius

#define CQF_FP_bleedDistance0_TYPE          CGFloat
#define CQF_FP_bleedDistance0_KIND          NUMBER
#define CQF_FP_bleedDistance0_KEY           BleedDistance0

#define CQF_FP_bleedDistance1_TYPE          CGFloat
#define CQF_FP_bleedDistance1_KIND          NUMBER
#define CQF_FP_bleedDistance1_KEY           BleedDistance1

#define CQF_FP_bleedOpacity_TYPE            CGFloat
#define CQF_FP_bleedOpacity_KIND            NUMBER
#define CQF_FP_bleedOpacity_KEY             BleedOpacity

#define CQF_FP_bleedColorMatrixWhite_TYPE   CGFloat
#define CQF_FP_bleedColorMatrixWhite_KIND   NUMBER
#define CQF_FP_bleedColorMatrixWhite_KEY    BleedColorMatrixWhite

#define CQF_FP_bleedColorMatrixBlack_TYPE   CGFloat
#define CQF_FP_bleedColorMatrixBlack_KIND   NUMBER
#define CQF_FP_bleedColorMatrixBlack_KEY    BleedColorMatrixBlack

#define CQF_FP_bleedColorMatrixSaturation_TYPE  CGFloat
#define CQF_FP_bleedColorMatrixSaturation_KIND  NUMBER
#define CQF_FP_bleedColorMatrixSaturation_KEY   BleedColorMatrixSaturation

#define CQF_FP_lineWidth_TYPE               CGFloat
#define CQF_FP_lineWidth_KIND               NUMBER
#define CQF_FP_lineWidth_KEY                LineWidth

#define CQF_FP_scale_TYPE                   CGFloat
#define CQF_FP_scale_KIND                   NUMBER
#define CQF_FP_scale_KEY                    Scale

#define CQF_FP_shadowAmount_TYPE            CGFloat
#define CQF_FP_shadowAmount_KIND            NUMBER
#define CQF_FP_shadowAmount_KEY             ShadowAmount

#define CQF_FP_shadowHeight_TYPE            CGFloat
#define CQF_FP_shadowHeight_KIND            NUMBER
#define CQF_FP_shadowHeight_KEY             ShadowHeight

#define CQF_FP_shadowOpacity_TYPE           CGFloat
#define CQF_FP_shadowOpacity_KIND           NUMBER
#define CQF_FP_shadowOpacity_KEY            ShadowOpacity

#define CQF_FP_shadowColorMatrixWhite_TYPE  CGFloat
#define CQF_FP_shadowColorMatrixWhite_KIND  NUMBER
#define CQF_FP_shadowColorMatrixWhite_KEY   ShadowColorMatrixWhite

#define CQF_FP_shadowColorMatrixBlack_TYPE  CGFloat
#define CQF_FP_shadowColorMatrixBlack_KIND  NUMBER
#define CQF_FP_shadowColorMatrixBlack_KEY   ShadowColorMatrixBlack

#define CQF_FP_shadowColorMatrixSaturation_TYPE CGFloat
#define CQF_FP_shadowColorMatrixSaturation_KIND NUMBER
#define CQF_FP_shadowColorMatrixSaturation_KEY  ShadowColorMatrixSaturation

#define CQF_FP_shadowDistanceOffset_TYPE    CGFloat
#define CQF_FP_shadowDistanceOffset_KIND    NUMBER
#define CQF_FP_shadowDistanceOffset_KEY     ShadowDistanceOffset

#define CQF_FP_shadowBlurRadius_TYPE        CGFloat
#define CQF_FP_shadowBlurRadius_KIND        NUMBER
#define CQF_FP_shadowBlurRadius_KEY         ShadowBlurRadius

#define CQF_FP_shadowRadius_TYPE            CGFloat
#define CQF_FP_shadowRadius_KIND            NUMBER
#define CQF_FP_shadowRadius_KEY             ShadowRadius

#define CQF_FP_sharpness_TYPE               CGFloat
#define CQF_FP_sharpness_KIND               NUMBER
#define CQF_FP_sharpness_KEY                Sharpness

#define CQF_FP_sdrHoldingToneWhite_TYPE     CGFloat
#define CQF_FP_sdrHoldingToneWhite_KIND     NUMBER
#define CQF_FP_sdrHoldingToneWhite_KEY      SDRHoldingToneWhite

#define CQF_FP_sdrGradientDistance0_TYPE    CGFloat
#define CQF_FP_sdrGradientDistance0_KIND    NUMBER
#define CQF_FP_sdrGradientDistance0_KEY     SDRGradientDistance0

#define CQF_FP_sdrGradientDistance1_TYPE    CGFloat
#define CQF_FP_sdrGradientDistance1_KIND    NUMBER
#define CQF_FP_sdrGradientDistance1_KEY     SDRGradientDistance1

#define CQF_FP_sdrShadowOpacity_TYPE        CGFloat
#define CQF_FP_sdrShadowOpacity_KIND        NUMBER
#define CQF_FP_sdrShadowOpacity_KEY         SDRShadowOpacity

#define CQF_FP_maxHeadroom_TYPE             CGFloat
#define CQF_FP_maxHeadroom_KIND             NUMBER
#define CQF_FP_maxHeadroom_KEY              MaxHeadroom

#define CQF_FP_shadowVibrancyContribution_TYPE  CGFloat
#define CQF_FP_shadowVibrancyContribution_KIND  NUMBER
#define CQF_FP_shadowVibrancyContribution_KEY   ShadowVibrancyContribution

#define CQF_FP_ringShadowBlurRadius_TYPE    CGFloat
#define CQF_FP_ringShadowBlurRadius_KIND    NUMBER
#define CQF_FP_ringShadowBlurRadius_KEY     RingShadowBlurRadius

#define CQF_FP_ringShadowMask_TYPE          CGFloat
#define CQF_FP_ringShadowMask_KIND          NUMBER
#define CQF_FP_ringShadowMask_KEY           RingShadowMask

#define CQF_FP_ringShadowOffset_TYPE        CGFloat
#define CQF_FP_ringShadowOffset_KIND        NUMBER
#define CQF_FP_ringShadowOffset_KEY         RingShadowOffset

#define CQF_FP_ringShadowOpacity_TYPE       CGFloat
#define CQF_FP_ringShadowOpacity_KIND       NUMBER
#define CQF_FP_ringShadowOpacity_KEY        RingShadowOpacity

#define CQF_FP_ringShadowStrokeWidth_TYPE   CGFloat
#define CQF_FP_ringShadowStrokeWidth_KIND   NUMBER
#define CQF_FP_ringShadowStrokeWidth_KEY    RingShadowStrokeWidth

#define CQF_FP_radius_TYPE                  CGFloat
#define CQF_FP_radius_KIND                  NUMBER
#define CQF_FP_radius_KEY                   Radius

#define CQF_FP_time_TYPE                    CGFloat
#define CQF_FP_time_KIND                    NUMBER
#define CQF_FP_time_KEY                     Time

// Boolean.
#define CQF_FP_adaptive_TYPE                BOOL
#define CQF_FP_adaptive_KIND                BOOL
#define CQF_FP_adaptive_KEY                 Adaptive

#define CQF_FP_allowsGroup_TYPE             BOOL
#define CQF_FP_allowsGroup_KIND             BOOL
#define CQF_FP_allowsGroup_KEY              AllowsGroup

#define CQF_FP_backEnabled_TYPE             BOOL
#define CQF_FP_backEnabled_KIND             BOOL
#define CQF_FP_backEnabled_KEY              BackEnabled

#define CQF_FP_backdropAware_TYPE           BOOL
#define CQF_FP_backdropAware_KIND           BOOL
#define CQF_FP_backdropAware_KEY            BackdropAware

#define CQF_FP_clampPreserveHue_TYPE        BOOL
#define CQF_FP_clampPreserveHue_KIND        BOOL
#define CQF_FP_clampPreserveHue_KEY         ClampPreserveHue

#define CQF_FP_displayInvertAware_TYPE      BOOL
#define CQF_FP_displayInvertAware_KIND      BOOL
#define CQF_FP_displayInvertAware_KEY       DisplayInvertAware

#define CQF_FP_dither_TYPE                  BOOL
#define CQF_FP_dither_KIND                  BOOL
#define CQF_FP_dither_KEY                   Dither

#define CQF_FP_extendEdges_TYPE             BOOL
#define CQF_FP_extendEdges_KIND             BOOL
#define CQF_FP_extendEdges_KEY              ExtendEdges

#define CQF_FP_fade_TYPE                    BOOL
#define CQF_FP_fade_KIND                    BOOL
#define CQF_FP_fade_KEY                     Fade

#define CQF_FP_frontEnabled_TYPE            BOOL
#define CQF_FP_frontEnabled_KIND            BOOL
#define CQF_FP_frontEnabled_KEY             FrontEnabled

#define CQF_FP_hardEdges_TYPE               BOOL
#define CQF_FP_hardEdges_KIND               BOOL
#define CQF_FP_hardEdges_KEY                HardEdges

#define CQF_FP_hsvSpace_TYPE                BOOL
#define CQF_FP_hsvSpace_KIND                BOOL
#define CQF_FP_hsvSpace_KEY                 HSVSpace

#define CQF_FP_invertsShape_TYPE            BOOL
#define CQF_FP_invertsShape_KIND            BOOL
#define CQF_FP_invertsShape_KEY             InvertsShape

#define CQF_FP_linear_TYPE                  BOOL
#define CQF_FP_linear_KIND                  BOOL
#define CQF_FP_linear_KEY                   Linear

#define CQF_FP_bleedDarkenBlend_TYPE        BOOL
#define CQF_FP_bleedDarkenBlend_KIND        BOOL
#define CQF_FP_bleedDarkenBlend_KEY         BleedDarkenBlend

#define CQF_FP_normalizeEdges_TYPE          BOOL
#define CQF_FP_normalizeEdges_KIND          BOOL
#define CQF_FP_normalizeEdges_KEY           NormalizeEdges

#define CQF_FP_normalizeEdgesTransparent_TYPE   BOOL
#define CQF_FP_normalizeEdgesTransparent_KIND   BOOL
#define CQF_FP_normalizeEdgesTransparent_KEY    NormalizeEdgesTransparent

#define CQF_FP_premultipliedValues_TYPE     BOOL
#define CQF_FP_premultipliedValues_KIND     BOOL
#define CQF_FP_premultipliedValues_KEY      PremultipliedValues

#define CQF_FP_reversed_TYPE                BOOL
#define CQF_FP_reversed_KIND                BOOL
#define CQF_FP_reversed_KEY                 Reversed

#define CQF_FP_sdrHoldingToneEnabled_TYPE   BOOL
#define CQF_FP_sdrHoldingToneEnabled_KIND   BOOL
#define CQF_FP_sdrHoldingToneEnabled_KEY    SDRHoldingToneEnabled

#define CQF_FP_useP3Space_TYPE              BOOL
#define CQF_FP_useP3Space_KIND              BOOL
#define CQF_FP_useP3Space_KEY               UseP3Space

// Nullable NSString *.
#define CQF_FP_intermediateBitDepth_TYPE    NSString *
#define CQF_FP_intermediateBitDepth_KIND    STRING
#define CQF_FP_intermediateBitDepth_KEY     IntermediateBitDepth

#define CQF_FP_quality_TYPE                 NSString *
#define CQF_FP_quality_KIND                 STRING
#define CQF_FP_quality_KEY                  Quality

#define CQF_FP_renderMode_TYPE              NSString *
#define CQF_FP_renderMode_KIND              STRING
#define CQF_FP_renderMode_KEY               RenderMode

#define CQF_FP_sourceSublayerName_TYPE      NSString *
#define CQF_FP_sourceSublayerName_KIND      STRING
#define CQF_FP_sourceSublayerName_KEY       SourceSublayerName

// Nullable Core Graphics reference.
#define CQF_FP_addColor_TYPE                CGColorRef
#define CQF_FP_addColor_KIND                CGTYPE
#define CQF_FP_addColor_KEY                 AddColor

#define CQF_FP_backColor0_TYPE              CGColorRef
#define CQF_FP_backColor0_KIND              CGTYPE
#define CQF_FP_backColor0_KEY               BackColor0

#define CQF_FP_backColor1_TYPE              CGColorRef
#define CQF_FP_backColor1_KIND              CGTYPE
#define CQF_FP_backColor1_KEY               BackColor1

#define CQF_FP_color_TYPE                   CGColorRef
#define CQF_FP_color_KIND                   CGTYPE
#define CQF_FP_color_KEY                    Color

#define CQF_FP_color0_TYPE                  CGColorRef
#define CQF_FP_color0_KIND                  CGTYPE
#define CQF_FP_color0_KEY                   Color0

#define CQF_FP_color1_TYPE                  CGColorRef
#define CQF_FP_color1_KIND                  CGTYPE
#define CQF_FP_color1_KEY                   Color1

#define CQF_FP_colorMap_TYPE                CGImageRef
#define CQF_FP_colorMap_KIND                CGTYPE
#define CQF_FP_colorMap_KEY                 ColorMap

#define CQF_FP_faceColorMatrixFillColor_TYPE    CGColorRef
#define CQF_FP_faceColorMatrixFillColor_KIND    CGTYPE
#define CQF_FP_faceColorMatrixFillColor_KEY     FaceColorMatrixFillColor

#define CQF_FP_foregroundColor_TYPE         CGColorRef
#define CQF_FP_foregroundColor_KIND         CGTYPE
#define CQF_FP_foregroundColor_KEY          ForegroundColor

#define CQF_FP_frontColor_TYPE              CGColorRef
#define CQF_FP_frontColor_KIND              CGTYPE
#define CQF_FP_frontColor_KEY               FrontColor

#define CQF_FP_bleedColorMatrixFillColor_TYPE   CGColorRef
#define CQF_FP_bleedColorMatrixFillColor_KIND   CGTYPE
#define CQF_FP_bleedColorMatrixFillColor_KEY    BleedColorMatrixFillColor

#define CQF_FP_maskImage_TYPE               CGImageRef
#define CQF_FP_maskImage_KIND               CGTYPE
#define CQF_FP_maskImage_KEY                MaskImage

#define CQF_FP_shadowColor_TYPE             CGColorRef
#define CQF_FP_shadowColor_KIND             CGTYPE
#define CQF_FP_shadowColor_KEY              ShadowColor

#define CQF_FP_shadowColorMatrixFillColor_TYPE  CGColorRef
#define CQF_FP_shadowColorMatrixFillColor_KIND  CGTYPE
#define CQF_FP_shadowColorMatrixFillColor_KEY   ShadowColorMatrixFillColor

// Core Graphics value wrapped in NSValue.
#define CQF_FP_blueOffset_TYPE              CGPoint
#define CQF_FP_blueOffset_KIND              POINT
#define CQF_FP_blueOffset_KEY               BlueOffset

#define CQF_FP_bounds_TYPE                  CGRect
#define CQF_FP_bounds_KIND                  RECT
#define CQF_FP_bounds_KEY                   Bounds

#define CQF_FP_greenOffset_TYPE             CGPoint
#define CQF_FP_greenOffset_KIND             POINT
#define CQF_FP_greenOffset_KEY              GreenOffset

#define CQF_FP_offset_TYPE                  CGPoint
#define CQF_FP_offset_KIND                  POINT
#define CQF_FP_offset_KEY                   Offset

#define CQF_FP_redOffset_TYPE               CGPoint
#define CQF_FP_redOffset_KIND               POINT
#define CQF_FP_redOffset_KEY                RedOffset

#define CQF_FP_shadowBounds_TYPE            CGRect
#define CQF_FP_shadowBounds_KIND            RECT
#define CQF_FP_shadowBounds_KEY             ShadowBounds

#define CQF_FP_shadowOffset_TYPE            CGPoint
#define CQF_FP_shadowOffset_KIND            POINT
#define CQF_FP_shadowOffset_KEY             ShadowOffset

// NSArray<NSNumber *>.
#define CQF_FP_alphaValues_TYPE             NSArray<NSNumber *> *
#define CQF_FP_alphaValues_KIND             ARRAY
#define CQF_FP_alphaValues_KEY              AlphaValues

#define CQF_FP_blueValues_TYPE              NSArray<NSNumber *> *
#define CQF_FP_blueValues_KIND              ARRAY
#define CQF_FP_blueValues_KEY               BlueValues

#define CQF_FP_greenValues_TYPE             NSArray<NSNumber *> *
#define CQF_FP_greenValues_KIND             ARRAY
#define CQF_FP_greenValues_KEY              GreenValues

#define CQF_FP_redValues_TYPE               NSArray<NSNumber *> *
#define CQF_FP_redValues_KIND               ARRAY
#define CQF_FP_redValues_KEY                RedValues

#define CQF_FP_values_TYPE                  NSArray<NSNumber *> *
#define CQF_FP_values_KIND                  ARRAY
#define CQF_FP_values_KEY                   Values

// CQFColorMatrix.
#define CQF_FP_colorMatrix_TYPE             CQFColorMatrix
#define CQF_FP_colorMatrix_KIND             COLOR_MATRIX
#define CQF_FP_colorMatrix_KEY              ColorMatrix

#pragma mark - DECL templates (one per kind)

#define CQF_FP_DECL_NUMBER_(NAME)         @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_BOOL_(NAME)           @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_STRING_(NAME)         @property (nonatomic, copy, nullable) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_CGTYPE_(NAME)         @property (nonatomic, assign, nullable) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_POINT_(NAME)          @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_RECT_(NAME)           @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_ARRAY_(NAME)          @property (nonatomic, copy) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_COLOR_MATRIX_(NAME)   @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME

#pragma mark - DECL dispatch (double-indirect token paste)

// `CQF_FP_DECL(amount)` expands to `CQF_FP_DECL_DISPATCH_(CQF_FP_amount_KIND, amount)`.
// `CQF_FP_amount_KIND` is then pre-expanded to `NUMBER` before the inner
// dispatcher pastes `CQF_FP_DECL_NUMBER_` and invokes it with `amount`.
#define CQF_FP_DECL(NAME)                       CQF_FP_DECL_DISPATCH_(CQF_FP_##NAME##_KIND, NAME)
#define CQF_FP_DECL_DISPATCH_(KIND, NAME)       CQF_FP_DECL_DISPATCH__(KIND, NAME)
#define CQF_FP_DECL_DISPATCH__(KIND, NAME)      CQF_FP_DECL_##KIND##_(NAME)

#endif /* CQFFilterProperty_h */
