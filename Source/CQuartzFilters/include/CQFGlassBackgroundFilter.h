//
//  Created by ktiays on 2026/6/10.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFGlassBackgroundFilter_h
#define CQFGlassBackgroundFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0)) NS_SWIFT_NAME(GlassBackground)
@protocol CQFGlassBackground <NSObject>

CQF_FP_DECL(sourceSublayerName);

CQF_FP_DECL(innerRefractionAmount);

CQF_FP_DECL(innerRefractionHeight);

CQF_FP_DECL(outerRefractionAmount);

CQF_FP_DECL(outerRefractionHeight);

CQF_FP_DECL(refractionDistance0);

CQF_FP_DECL(refractionDistance1);

CQF_FP_DECL(refractionOpacity);

CQF_FP_DECL(blurRadius);

CQF_FP_DECL(blurOpacity0);

CQF_FP_DECL(blurOpacity1);

CQF_FP_DECL(blurOpacity2);

CQF_FP_DECL(blurOpacity3);

CQF_FP_DECL(blurOpacity4);

CQF_FP_DECL(blurDistance0);

CQF_FP_DECL(blurDistance1);

CQF_FP_DECL(blurDistance2);

CQF_FP_DECL(blurDistance3);

CQF_FP_DECL(blurDistance4);

CQF_FP_DECL(faceOpacity);

CQF_FP_DECL(faceColorMatrixWhite);

CQF_FP_DECL(faceColorMatrixBlack);

CQF_FP_DECL(faceColorMatrixSaturation);

CQF_FP_DECL(faceColorMatrixFillColor);

CQF_FP_DECL(bleedAmount);

CQF_FP_DECL(bleedHeight);

CQF_FP_DECL(bleedBlurRadius);

CQF_FP_DECL(bleedDistance0);

CQF_FP_DECL(bleedDistance1);

CQF_FP_DECL(bleedOpacity);

CQF_FP_DECL(bleedDarkenBlend);

CQF_FP_DECL(bleedColorMatrixWhite);

CQF_FP_DECL(bleedColorMatrixBlack);

CQF_FP_DECL(bleedColorMatrixSaturation);

CQF_FP_DECL(bleedColorMatrixFillColor);

CQF_FP_DECL(shadowOffset);

CQF_FP_DECL(shadowAmount);

CQF_FP_DECL(shadowHeight);

CQF_FP_DECL(shadowOpacity);

CQF_FP_DECL(shadowColorMatrixWhite);

CQF_FP_DECL(shadowColorMatrixBlack);

CQF_FP_DECL(shadowColorMatrixSaturation);

CQF_FP_DECL(shadowColorMatrixFillColor);

CQF_FP_DECL(shadowDistanceOffset);

CQF_FP_DECL(shadowBlurRadius);

CQF_FP_DECL(shadowRadius);

CQF_FP_DECL(sdrHoldingToneEnabled);

CQF_FP_DECL(sdrHoldingToneWhite);

CQF_FP_DECL(sdrGradientDistance0);

CQF_FP_DECL(sdrGradientDistance1);

CQF_FP_DECL(sdrShadowOpacity);

CQF_FP_DECL(maxHeadroom);

CQF_FP_DECL(shadowVibrancyContribution);

CQF_FP_DECL(clamp);

CQF_FP_DECL(clampPreserveHue);

@end

API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0))
@interface CQFQuartzFilter (CQFGlassBackground)

+ (CQFQuartzFilter<CQFGlassBackground> *)glassBackgroundFilter API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0));

+ (CQFQuartzFilter<CQFGlassBackground> *)glassBackgroundFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current API_AVAILABLE(ios(26.0), macos(26.0), tvos(26.0), watchos(26.0), visionos(26.0));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFGlassBackgroundFilter_h */
