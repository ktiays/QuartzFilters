//
//  Created by ktiays on 2025/10/20.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

#ifndef CQFColorMatrix_h
#define CQFColorMatrix_h

#import <Foundation/Foundation.h>

typedef struct CQFColorMatrix {
    float m11, m12, m13, m14, m15;
    float m21, m22, m23, m24, m25;
    float m31, m32, m33, m34, m35;
    float m41, m42, m43, m44, m45;
} CQFColorMatrix;

FOUNDATION_EXPORT const CQFColorMatrix CQFColorMatrixIdentity;

#endif /* CQFColorMatrix_h */

