//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFColorMatrixValue_h
#define CQFColorMatrixValue_h

#import <Foundation/Foundation.h>

#import "CQFColorMatrix.h"

NS_ASSUME_NONNULL_BEGIN

/// Boxes a `CQFColorMatrix` into an `NSValue` suitable for `CAFilter` KVC storage.
///
/// Prefers the private `+[NSValue valueWithCAColorMatrix:]` SPI used by Core Animation;
/// falls back to a generic `+valueWithBytes:objCType:` boxing when the SPI is unavailable.
FOUNDATION_EXPORT NSValue *CQFNSValueFromColorMatrix(CQFColorMatrix matrix);

/// Unboxes a `CQFColorMatrix` from a Core Animation `NSValue`.
///
/// Returns `CQFColorMatrixIdentity` when `value` is `nil` or does not respond to the
/// private `-[NSValue CAColorMatrixValue]` SPI.
FOUNDATION_EXPORT CQFColorMatrix CQFColorMatrixFromNSValue(NSValue *_Nullable value);

NS_ASSUME_NONNULL_END

#endif /* CQFColorMatrixValue_h */
