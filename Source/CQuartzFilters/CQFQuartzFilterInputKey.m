//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFQuartzFilterInputKey.h"

#ifndef __IMPL_CQFFILTER_INPUT_KEY__
#define __IMPL_CQFFILTER_INPUT_KEY__(__NAME, __VAL) CQFQuartzFilterInputKey const CQFQuartzFilterInputKey##__NAME = @#__VAL
#endif

__IMPL_CQFFILTER_INPUT_KEY__(Amount, inputAmount);
__IMPL_CQFFILTER_INPUT_KEY__(BackdropAware, inputBackdropAware);
__IMPL_CQFFILTER_INPUT_KEY__(Clamp, inputClamp);
__IMPL_CQFFILTER_INPUT_KEY__(ClampPreserveHue, inputClampPreserveHue);
__IMPL_CQFFILTER_INPUT_KEY__(Color, inputColor);
__IMPL_CQFFILTER_INPUT_KEY__(ColorMap, inputColorMap);
__IMPL_CQFFILTER_INPUT_KEY__(ColorMatrix, inputColorMatrix);
__IMPL_CQFFILTER_INPUT_KEY__(Dither, inputDither);
__IMPL_CQFFILTER_INPUT_KEY__(Fade, inputFade);
__IMPL_CQFFILTER_INPUT_KEY__(HardEdges, inputHardEdges);
__IMPL_CQFFILTER_INPUT_KEY__(MaskImage, inputMaskImage);
__IMPL_CQFFILTER_INPUT_KEY__(NormalizeEdges, inputNormalizeEdges);
__IMPL_CQFFILTER_INPUT_KEY__(OverlayOpacity, inputOverlayOpacity);
__IMPL_CQFFILTER_INPUT_KEY__(Quality, inputQuality);
__IMPL_CQFFILTER_INPUT_KEY__(Radius, inputRadius);
__IMPL_CQFFILTER_INPUT_KEY__(SourceSublayerName, inputSourceSublayerName);
__IMPL_CQFFILTER_INPUT_KEY__(Values, inputValues);
