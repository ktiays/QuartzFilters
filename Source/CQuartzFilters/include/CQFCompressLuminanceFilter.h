//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFCompressLuminanceFilter_h
#define CQFCompressLuminanceFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CompressLuminance)
@protocol CQFCompressLuminance <NSObject>

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFCompressLuminance)

+ (CQFQuartzFilter<CQFCompressLuminance> *)compressLuminanceFilter;

+ (CQFQuartzFilter<CQFCompressLuminance> * _Nullable)compressLuminanceFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(compressLuminance(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFCompressLuminanceFilter_h */
