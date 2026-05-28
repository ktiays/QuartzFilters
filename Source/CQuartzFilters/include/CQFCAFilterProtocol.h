//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#ifndef CQFCAFilterProtocol_h
#define CQFCAFilterProtocol_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CAFilterProtocol)
@protocol CQFCAFilterProtocol <NSObject>

@property (nonatomic, readonly) NSString *type;

@property (nonatomic, readonly) NSString *name;

@property (nonatomic, assign, getter=isEnabled) BOOL enabled;

+ (NSArray<NSString *> *)filterTypes;

- (instancetype)initWithType:(NSString *)type;

- (instancetype)initWithName:(NSString *)name;

- (NSArray<NSString *> *)inputKeys;

- (NSArray<NSString *> *)outputKeys;

@end

NS_ASSUME_NONNULL_END

#endif /* CQFCAFilterProtocol_h */
