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

#define CQF_FP_backdropAware_TYPE       CGFloat
#define CQF_FP_backdropAware_KIND       NUMBER
#define CQF_FP_backdropAware_KEY        BackdropAware

#define CQF_FP_clamp_TYPE               CGFloat
#define CQF_FP_clamp_KIND               NUMBER
#define CQF_FP_clamp_KEY                Clamp

#define CQF_FP_clampPreserveHue_TYPE    CGFloat
#define CQF_FP_clampPreserveHue_KIND    NUMBER
#define CQF_FP_clampPreserveHue_KEY     ClampPreserveHue

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

#define CQF_FP_normalizeEdges_TYPE      BOOL
#define CQF_FP_normalizeEdges_KIND      BOOL
#define CQF_FP_normalizeEdges_KEY       NormalizeEdges

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

#define CQF_FP_maskImage_TYPE           CGImageRef
#define CQF_FP_maskImage_KIND           CGTYPE
#define CQF_FP_maskImage_KEY            MaskImage

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
