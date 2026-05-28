//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#import "CQFCAFilterProtocol.h"
#import "CQFQuartzFilterInputKey.h"
#import "CQFQuartzFilterType.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(QuartzFilter)
@interface CQFQuartzFilter : NSObject

@property (nonatomic, strong, nullable) id<CQFCAFilterProtocol> caFilter;

@property (nonatomic, readonly) NSString *name;

@property (nonatomic, readonly) CQFQuartzFilterType type;

@property (nonatomic, readonly) NSArray<CQFQuartzFilterInputKey> *inputKeys;

@property (nonatomic, readonly) NSArray<NSString *> *outputKeys;

+ (instancetype)filterWithType:(CQFQuartzFilterType)filterType;

+ (NSArray<CQFQuartzFilterType> *)filterTypes;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithType:(CQFQuartzFilterType)filterType NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithFilter:(nullable id)filter NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
