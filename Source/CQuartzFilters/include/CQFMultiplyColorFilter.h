//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFMultiplyColorFilter_h
#define CQFMultiplyColorFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(MultiplyColor)
@protocol CQFMultiplyColor <NSObject>

CQF_FP_DECL(color);

@end

@interface CQFQuartzFilter (CQFMultiplyColor)

+ (CQFQuartzFilter<CQFMultiplyColor> *)multiplyColorFilter;

+ (CQFQuartzFilter<CQFMultiplyColor> *)multiplyColorFilterWithCurrent:(nullable id<CQFCAFilterProtocol>)current;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFMultiplyColorFilter_h */
