//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFColorMatrixValue.h"

NSValue *CQFNSValueFromColorMatrix(CQFColorMatrix matrix) {
    SEL selector = NSSelectorFromString(@"valueWithCAColorMatrix:");
    if ([NSValue respondsToSelector:selector]) {
        NSMethodSignature *signature = [NSValue methodSignatureForSelector:selector];
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        invocation.target = (id) [NSValue class];
        invocation.selector = selector;
        [invocation setArgument:&matrix atIndex:2];
        [invocation invoke];
        __unsafe_unretained NSValue *result = nil;
        [invocation getReturnValue:&result];
        if (result) {
            return result;
        }
    }
    return [NSValue valueWithBytes:&matrix objCType:@encode(CQFColorMatrix)];
}

CQFColorMatrix CQFColorMatrixFromNSValue(NSValue *value) {
    if (!value) {
        return CQFColorMatrixIdentity;
    }
    SEL selector = NSSelectorFromString(@"CAColorMatrixValue");
    if ([value respondsToSelector:selector]) {
        NSMethodSignature *signature = [value methodSignatureForSelector:selector];
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        invocation.target = value;
        invocation.selector = selector;
        [invocation invoke];
        CQFColorMatrix result;
        [invocation getReturnValue:&result];
        return result;
    }
    return CQFColorMatrixIdentity;
}
