//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//

#import "CQFFilterPropertyImpl.h"
#import "CQFMultiplyColorFilter.h"

@interface CQFMultiplyColorFilter : CQFQuartzFilter <CQFMultiplyColor>
@end

@implementation CQFMultiplyColorFilter

CQF_FP_IMPL(color)

@end

@implementation CQFQuartzFilter (CQFMultiplyColor)

+ (CQFQuartzFilter<CQFMultiplyColor> *)multiplyColorFilter {
    return [self multiplyColorFilterWithCurrent:nil];
}

+ (CQFQuartzFilter<CQFMultiplyColor> *)multiplyColorFilterWithCurrent:(id<CQFCAFilterProtocol>)current {
    if (current) {
        return [[CQFMultiplyColorFilter alloc] initWithFilter:current];
    }
    return [[CQFMultiplyColorFilter alloc] initWithType:CQFQuartzFilterTypeMultiplyColor];
}

@end
