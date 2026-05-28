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

__DEF_CQFFILTER_INPUT_KEY__(Amount);
__DEF_CQFFILTER_INPUT_KEY__(BackdropAware);
__DEF_CQFFILTER_INPUT_KEY__(Clamp);
__DEF_CQFFILTER_INPUT_KEY__(ClampPreserveHue);
__DEF_CQFFILTER_INPUT_KEY__(Color);
__DEF_CQFFILTER_INPUT_KEY__(ColorMap);
__DEF_CQFFILTER_INPUT_KEY__(ColorMatrix);
__DEF_CQFFILTER_INPUT_KEY__(Dither);
__DEF_CQFFILTER_INPUT_KEY__(Fade);
__DEF_CQFFILTER_INPUT_KEY__(HardEdges);
__DEF_CQFFILTER_INPUT_KEY__(MaskImage);
__DEF_CQFFILTER_INPUT_KEY__(NormalizeEdges);
__DEF_CQFFILTER_INPUT_KEY__(OverlayOpacity);
__DEF_CQFFILTER_INPUT_KEY__(Quality);
__DEF_CQFFILTER_INPUT_KEY__(Radius);
__DEF_CQFFILTER_INPUT_KEY__(SourceSublayerName);
__DEF_CQFFILTER_INPUT_KEY__(Values);

NS_ASSUME_NONNULL_END

#endif /* CQFQuartzFilterInputKey_h */
