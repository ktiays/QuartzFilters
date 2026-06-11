//
//  Created by ktiays on 2026/6/10.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFGlassBackgroundFilter.h"

@interface CQFGlassBackgroundFilter : CQFQuartzFilter <CQFGlassBackground>
@end

@implementation CQFGlassBackgroundFilter

CQF_FP_IMPL(sourceSublayerName)

CQF_FP_IMPL(innerRefractionAmount)

CQF_FP_IMPL(innerRefractionHeight)

CQF_FP_IMPL(outerRefractionAmount)

CQF_FP_IMPL(outerRefractionHeight)

CQF_FP_IMPL(refractionDistance0)

CQF_FP_IMPL(refractionDistance1)

CQF_FP_IMPL(refractionOpacity)

CQF_FP_IMPL(blurRadius)

CQF_FP_IMPL(blurOpacity0)

CQF_FP_IMPL(blurOpacity1)

CQF_FP_IMPL(blurOpacity2)

CQF_FP_IMPL(blurOpacity3)

CQF_FP_IMPL(blurOpacity4)

CQF_FP_IMPL(blurDistance0)

CQF_FP_IMPL(blurDistance1)

CQF_FP_IMPL(blurDistance2)

CQF_FP_IMPL(blurDistance3)

CQF_FP_IMPL(blurDistance4)

CQF_FP_IMPL(faceOpacity)

CQF_FP_IMPL(faceColorMatrixWhite)

CQF_FP_IMPL(faceColorMatrixBlack)

CQF_FP_IMPL(faceColorMatrixSaturation)

CQF_FP_IMPL(faceColorMatrixFillColor)

CQF_FP_IMPL(bleedAmount)

CQF_FP_IMPL(bleedHeight)

CQF_FP_IMPL(bleedBlurRadius)

CQF_FP_IMPL(bleedDistance0)

CQF_FP_IMPL(bleedDistance1)

CQF_FP_IMPL(bleedOpacity)

CQF_FP_IMPL(bleedDarkenBlend)

CQF_FP_IMPL(bleedColorMatrixWhite)

CQF_FP_IMPL(bleedColorMatrixBlack)

CQF_FP_IMPL(bleedColorMatrixSaturation)

CQF_FP_IMPL(bleedColorMatrixFillColor)

CQF_FP_IMPL(shadowOffset)

CQF_FP_IMPL(shadowAmount)

CQF_FP_IMPL(shadowHeight)

CQF_FP_IMPL(shadowOpacity)

CQF_FP_IMPL(shadowColorMatrixWhite)

CQF_FP_IMPL(shadowColorMatrixBlack)

CQF_FP_IMPL(shadowColorMatrixSaturation)

CQF_FP_IMPL(shadowColorMatrixFillColor)

CQF_FP_IMPL(shadowDistanceOffset)

CQF_FP_IMPL(shadowBlurRadius)

CQF_FP_IMPL(shadowRadius)

- (BOOL)sdrHoldingToneEnabled {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeySDRHoldingToneEnabled] boolValue];
}

- (void)setSdrHoldingToneEnabled:(BOOL)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeySDRHoldingToneEnabled];
}

- (CGFloat)sdrHoldingToneWhite {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeySDRHoldingToneWhite] doubleValue];
}

- (void)setSdrHoldingToneWhite:(CGFloat)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeySDRHoldingToneWhite];
}

- (CGFloat)sdrGradientDistance0 {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeySDRGradientDistance0] doubleValue];
}

- (void)setSdrGradientDistance0:(CGFloat)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeySDRGradientDistance0];
}

- (CGFloat)sdrGradientDistance1 {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeySDRGradientDistance1] doubleValue];
}

- (void)setSdrGradientDistance1:(CGFloat)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeySDRGradientDistance1];
}

- (CGFloat)sdrShadowOpacity {
    return [[(NSObject *) self.caFilter valueForKey:CQFQuartzFilterInputKeySDRShadowOpacity] doubleValue];
}

- (void)setSdrShadowOpacity:(CGFloat)value {
    [(NSObject *) self.caFilter setValue:@(value) forKey:CQFQuartzFilterInputKeySDRShadowOpacity];
}

CQF_FP_IMPL(maxHeadroom)

CQF_FP_IMPL(shadowVibrancyContribution)

CQF_FP_IMPL(clamp)

CQF_FP_IMPL(clampPreserveHue)

@end

@implementation CQFQuartzFilter (CQFGlassBackground)

+ (CQFQuartzFilter<CQFGlassBackground> *)glassBackgroundFilter {
    return [self glassBackgroundFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFGlassBackground> *)glassBackgroundFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFGlassBackgroundFilter alloc] initWithFilter:current];
    }
    return [[CQFGlassBackgroundFilter alloc] initWithType:CQFQuartzFilterTypeGlassBackground];
}

@end
