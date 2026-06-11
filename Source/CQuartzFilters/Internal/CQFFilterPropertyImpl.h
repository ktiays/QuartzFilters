//
//  Created by ktiays on 2026/5/28.
//  Copyright (c) 2026 ktiays. All rights reserved.
//
//  KVC-backed accessor templates for the property kinds enumerated in
//  `CQFFilterProperty.h`. Inside an `@implementation` body, use:
//
//      CQF_FP_IMPL(amount)
//
//  The dispatcher reads `CQF_FP_amount_KIND` from `CQFFilterProperty.h`,
//  pre-expands it to a kind tag (e.g. `NUMBER`), then token-pastes the
//  matching `CQF_FP_IMPL_NUMBER_` template and expands it. Inside the
//  template, `CQF_FP_##NAME##_KEY` is re-expanded once more to derive both
//  the input-key constant (`CQFQuartzFilterInputKey<KEY>`) and the setter
//  selector (`set<KEY>`).
//

#ifndef CQFFilterPropertyImpl_h
#define CQFFilterPropertyImpl_h

#import "CQFColorMatrixValue.h"
#import "CQFFilterProperty.h"

#pragma mark - Internal helpers (double-indirect token paste)

// Expand `KEY` once, then paste to form the input-key constant
// `CQFQuartzFilterInputKey<KEY>`.
#define CQF_FP_INPUT_KEY_(KEY)     CQF_FP_INPUT_KEY__(KEY)
#define CQF_FP_INPUT_KEY__(KEY)    CQFQuartzFilterInputKey##KEY

// Expand `KEY` once, then paste to form the setter selector `set<KEY>`.
#define CQF_FP_SETTER_(KEY)        CQF_FP_SETTER__(KEY)
#define CQF_FP_SETTER__(KEY)       set##KEY

#pragma mark - IMPL templates (one per kind)

#define CQF_FP_IMPL_NUMBER_(NAME)                                                             \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        return [[(NSObject *) self.caFilter                                                   \
                valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)] doubleValue];             \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:@(value)                                         \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_BOOL_(NAME)                                                               \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        return [[(NSObject *) self.caFilter                                                   \
                valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)] boolValue];               \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:@(value)                                         \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_STRING_(NAME)                                                             \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        return [(NSObject *) self.caFilter                                                    \
                valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];                          \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:value                                            \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_CGTYPE_(NAME)                                                             \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        return (__bridge CQF_FP_##NAME##_TYPE) [(NSObject *) self.caFilter                    \
                valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];                          \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:(__bridge id) value                              \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_POINT_(NAME)                                                              \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        id value = [(NSObject *) self.caFilter                                                \
                    valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];                      \
        if (![value isKindOfClass:[NSValue class]]) {                                         \
            return CGPointZero;                                                               \
        }                                                                                     \
        CGPoint point = CGPointZero;                                                          \
        [(NSValue *) value getValue:&point];                                                   \
        return point;                                                                         \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:[NSValue valueWithBytes:&value                   \
                                                            objCType:@encode(CGPoint)]        \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_ARRAY_(NAME)                                                              \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        return [(NSObject *) self.caFilter                                                    \
                valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)] ?: @[];                   \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:value                                            \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#define CQF_FP_IMPL_COLOR_MATRIX_(NAME)                                                       \
    - (CQF_FP_##NAME##_TYPE)NAME {                                                            \
        id value = [(NSObject *) self.caFilter                                                \
                    valueForKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];                      \
        if (![value isKindOfClass:[NSValue class]]) {                                         \
            return CQFColorMatrixIdentity;                                                    \
        }                                                                                     \
        return CQFColorMatrixFromNSValue(value);                                              \
    }                                                                                         \
    - (void)CQF_FP_SETTER_(CQF_FP_##NAME##_KEY):(CQF_FP_##NAME##_TYPE)value {                 \
        [(NSObject *) self.caFilter setValue:CQFNSValueFromColorMatrix(value)                 \
                                      forKey:CQF_FP_INPUT_KEY_(CQF_FP_##NAME##_KEY)];         \
    }

#pragma mark - IMPL dispatch (double-indirect token paste)

#define CQF_FP_IMPL(NAME)                       CQF_FP_IMPL_DISPATCH_(CQF_FP_##NAME##_KIND, NAME)
#define CQF_FP_IMPL_DISPATCH_(KIND, NAME)       CQF_FP_IMPL_DISPATCH__(KIND, NAME)
#define CQF_FP_IMPL_DISPATCH__(KIND, NAME)      CQF_FP_IMPL_##KIND##_(NAME)

#endif /* CQFFilterPropertyImpl_h */
