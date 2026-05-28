//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import <objc/runtime.h>

#import "CQFQuartzFilter.h"

static NSString * const kCAFilterClassName = @"CAFilter";

@implementation CQFQuartzFilter

- (instancetype)initWithType:(CQFQuartzFilterType)filterType {
    self = [super init];
    if (self) {
        Class filterClass = NSClassFromString(kCAFilterClassName);
        SEL constructorSelector = sel_registerName("initWithType:");
        Method constructorMethod = class_getInstanceMethod(filterClass, constructorSelector);
        IMP constructorImpl = method_getImplementation(constructorMethod);
        if (constructorImpl) {
            id filter = ((id (*)(id, SEL, NSString *)) constructorImpl)([filterClass alloc], constructorSelector, filterType);
            _caFilter = filter;
        }
    }
    return self;
}

+ (instancetype)filterWithType:(CQFQuartzFilterType)filterType {
    return [[CQFQuartzFilter alloc] initWithType:filterType];
}

- (instancetype)initWithFilter:(id)filter {
    self = [super init];
    if (self) {
        NSAssert([NSStringFromClass([filter class]) isEqualToString:kCAFilterClassName], @"");
        _caFilter = filter;
    }
    return self;
}

+ (NSArray<CQFQuartzFilterType> *)filterTypes {
    return [((id<CQFCAFilterProtocol>) NSClassFromString(kCAFilterClassName)) filterTypes];
}

- (NSString *)name {
    return [_caFilter name];
}

- (CQFQuartzFilterType)type {
    return (CQFQuartzFilterType) [_caFilter type];
}

- (NSArray<CQFQuartzFilterInputKey> *)inputKeys {
    return [_caFilter inputKeys];
}

- (NSArray<NSString *> *)outputKeys {
    return [_caFilter outputKeys];
}

@end
