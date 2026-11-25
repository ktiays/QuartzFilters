//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFSRLFilter_h
#define CQFSRLFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(SRL)
@protocol CQFSRL <NSObject>

CQF_FP_DECL(amount);

@end

@interface CQFQuartzFilter (CQFSRL)

+ (CQFQuartzFilter<CQFSRL> *)srlFilter;

+ (CQFQuartzFilter<CQFSRL> * _Nullable)srlFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(srl(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFSRLFilter_h */
