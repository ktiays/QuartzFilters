//
//  Created by ktiays on 2026/11/25.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFMeteorFilter_h
#define CQFMeteorFilter_h

#import "CQFFilterProperty.h"
#import "CQFQuartzFilter.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Meteor)
@protocol CQFMeteor <NSObject>

CQF_FP_DECL(amount);

CQF_FP_DECL(scale);

@end

@interface CQFQuartzFilter (CQFMeteor)

+ (CQFQuartzFilter<CQFMeteor> *)meteorFilter;

+ (CQFQuartzFilter<CQFMeteor> * _Nullable)meteorFilterWithCurrent:(nullable id)current NS_SWIFT_NAME(meteor(with:));

@end

NS_ASSUME_NONNULL_END

#endif /* CQFMeteorFilter_h */
