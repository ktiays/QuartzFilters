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
//                            CGTYPE, ARRAY, COLOR_MATRIX). Drives dispatch
//                            inside `CQF_FP_DECL(name)` / `CQF_FP_IMPL(name)`
//                            via token-paste re-expansion.
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
#define CQF_FP_amount_TYPE              CGFloat
#define CQF_FP_amount_KIND              NUMBER
#define CQF_FP_amount_KEY               Amount

#define CQF_FP_start_TYPE               CGFloat
#define CQF_FP_start_KIND               NUMBER
#define CQF_FP_start_KEY                Start

#define CQF_FP_end_TYPE                 CGFloat
#define CQF_FP_end_KIND                 NUMBER
#define CQF_FP_end_KEY                  End

#define CQF_FP_backdropAware_TYPE       CGFloat
#define CQF_FP_backdropAware_KIND       NUMBER
#define CQF_FP_backdropAware_KEY        BackdropAware

#define CQF_FP_clamp_TYPE               CGFloat
#define CQF_FP_clamp_KIND               NUMBER
#define CQF_FP_clamp_KEY                Clamp

#define CQF_FP_clampPreserveHue_TYPE    CGFloat
#define CQF_FP_clampPreserveHue_KIND    NUMBER
#define CQF_FP_clampPreserveHue_KEY     ClampPreserveHue

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

#define CQF_FP_refractionDistance0_TYPE     CGFloat
#define CQF_FP_refractionDistance0_KIND     NUMBER
#define CQF_FP_refractionDistance0_KEY      RefractionDistance0

#define CQF_FP_refractionDistance1_TYPE     CGFloat
#define CQF_FP_refractionDistance1_KIND     NUMBER
#define CQF_FP_refractionDistance1_KEY      RefractionDistance1

#define CQF_FP_refractionOpacity_TYPE       CGFloat
#define CQF_FP_refractionOpacity_KIND       NUMBER
#define CQF_FP_refractionOpacity_KEY        RefractionOpacity

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

#define CQF_FP_faceColorMatrixSaturation_TYPE   CGFloat
#define CQF_FP_faceColorMatrixSaturation_KIND   NUMBER
#define CQF_FP_faceColorMatrixSaturation_KEY    FaceColorMatrixSaturation

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

#define CQF_FP_radius_TYPE              CGFloat
#define CQF_FP_radius_KIND              NUMBER
#define CQF_FP_radius_KEY               Radius

// Boolean.
#define CQF_FP_dither_TYPE              BOOL
#define CQF_FP_dither_KIND              BOOL
#define CQF_FP_dither_KEY               Dither

#define CQF_FP_fade_TYPE                BOOL
#define CQF_FP_fade_KIND                BOOL
#define CQF_FP_fade_KEY                 Fade

#define CQF_FP_hardEdges_TYPE           BOOL
#define CQF_FP_hardEdges_KIND           BOOL
#define CQF_FP_hardEdges_KEY            HardEdges

#define CQF_FP_bleedDarkenBlend_TYPE    BOOL
#define CQF_FP_bleedDarkenBlend_KIND    BOOL
#define CQF_FP_bleedDarkenBlend_KEY     BleedDarkenBlend

#define CQF_FP_normalizeEdges_TYPE      BOOL
#define CQF_FP_normalizeEdges_KIND      BOOL
#define CQF_FP_normalizeEdges_KEY       NormalizeEdges

#define CQF_FP_sdrHoldingToneEnabled_TYPE   BOOL
#define CQF_FP_sdrHoldingToneEnabled_KIND   BOOL
#define CQF_FP_sdrHoldingToneEnabled_KEY    SDRHoldingToneEnabled

// Nullable NSString *.
#define CQF_FP_quality_TYPE             NSString *
#define CQF_FP_quality_KIND             STRING
#define CQF_FP_quality_KEY              Quality

#define CQF_FP_sourceSublayerName_TYPE  NSString *
#define CQF_FP_sourceSublayerName_KIND  STRING
#define CQF_FP_sourceSublayerName_KEY   SourceSublayerName

// Nullable Core Graphics reference.
#define CQF_FP_color_TYPE               CGColorRef
#define CQF_FP_color_KIND               CGTYPE
#define CQF_FP_color_KEY                Color

#define CQF_FP_faceColorMatrixFillColor_TYPE    CGColorRef
#define CQF_FP_faceColorMatrixFillColor_KIND    CGTYPE
#define CQF_FP_faceColorMatrixFillColor_KEY     FaceColorMatrixFillColor

#define CQF_FP_bleedColorMatrixFillColor_TYPE   CGColorRef
#define CQF_FP_bleedColorMatrixFillColor_KIND   CGTYPE
#define CQF_FP_bleedColorMatrixFillColor_KEY    BleedColorMatrixFillColor

#define CQF_FP_maskImage_TYPE           CGImageRef
#define CQF_FP_maskImage_KIND           CGTYPE
#define CQF_FP_maskImage_KEY            MaskImage

#define CQF_FP_shadowColorMatrixFillColor_TYPE  CGColorRef
#define CQF_FP_shadowColorMatrixFillColor_KIND  CGTYPE
#define CQF_FP_shadowColorMatrixFillColor_KEY   ShadowColorMatrixFillColor

// Core Graphics value wrapped in NSValue.
#define CQF_FP_shadowOffset_TYPE        CGPoint
#define CQF_FP_shadowOffset_KIND        POINT
#define CQF_FP_shadowOffset_KEY         ShadowOffset

// NSArray<NSNumber *>.
#define CQF_FP_values_TYPE              NSArray<NSNumber *> *
#define CQF_FP_values_KIND              ARRAY
#define CQF_FP_values_KEY               Values

// CQFColorMatrix.
#define CQF_FP_colorMatrix_TYPE         CQFColorMatrix
#define CQF_FP_colorMatrix_KIND         COLOR_MATRIX
#define CQF_FP_colorMatrix_KEY          ColorMatrix

#pragma mark - DECL templates (one per kind)

#define CQF_FP_DECL_NUMBER_(NAME)         @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_BOOL_(NAME)           @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_STRING_(NAME)         @property (nonatomic, copy, nullable) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_CGTYPE_(NAME)         @property (nonatomic, assign, nullable) CQF_FP_##NAME##_TYPE NAME
#define CQF_FP_DECL_POINT_(NAME)          @property (nonatomic, assign) CQF_FP_##NAME##_TYPE NAME
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
