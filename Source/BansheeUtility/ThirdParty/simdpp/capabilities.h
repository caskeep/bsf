/*  Copyright (C) 2017  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMD_CAPABILITIES_H
#define LIBSIMDPP_SIMD_CAPABILITIES_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif
#include <simdpp/setup_arch.h>

#if SIMDPP_USE_SSE2 || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT8_SIMD 1
#define SIMDPP_HAS_INT16_SIMD 1
#define SIMDPP_HAS_INT32_SIMD 1
#else
#define SIMDPP_HAS_INT8_SIMD 0
#define SIMDPP_HAS_INT16_SIMD 0
#define SIMDPP_HAS_INT32_SIMD 0
#endif

#if SIMDPP_USE_SSE2 || SIMDPP_USE_NEON || SIMDPP_USE_VSX_207 || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT64_SIMD 1
#else
#define SIMDPP_HAS_INT64_SIMD 0
#endif

#if SIMDPP_USE_SSE2 || SIMDPP_USE_NEON_FLT_SP || (SIMDPP_USE_NEON && SIMDPP_64_BITS) || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_FLOAT32_SIMD 1
#else
#define SIMDPP_HAS_FLOAT32_SIMD 0
#endif

#if SIMDPP_USE_SSE2 || (SIMDPP_USE_NEON && SIMDPP_64_BITS) || SIMDPP_USE_VSX_206 || SIMDPP_USE_MSA
#define SIMDPP_HAS_FLOAT64_SIMD 1
#else
#define SIMDPP_HAS_FLOAT64_SIMD 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_AVX512F || (SIMDPP_USE_NEON && SIMDPP_64_BITS) || SIMDPP_USE_VSX_206 || SIMDPP_USE_MSA
#define SIMDPP_HAS_FLOAT64_TO_UINT32_CONVERSION 1
#else
#define SIMDPP_HAS_FLOAT64_TO_UINT32_CONVERSION 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_AVX512DQ || (SIMDPP_USE_NEON && SIMDPP_64_BITS) || SIMDPP_USE_VSX_207 || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT64_TO_FLOAT64_CONVERSION 1
#define SIMDPP_HAS_INT64_TO_FLOAT32_CONVERSION 1
#define SIMDPP_HAS_UINT64_TO_FLOAT64_CONVERSION 1
#define SIMDPP_HAS_UINT64_TO_FLOAT32_CONVERSION 1

#define SIMDPP_HAS_FLOAT32_TO_INT64_CONVERSION 1
#define SIMDPP_HAS_FLOAT32_TO_UINT64_CONVERSION 1

#define SIMDPP_HAS_FLOAT64_TO_INT64_CONVERSION 1
#define SIMDPP_HAS_FLOAT64_TO_UINT64_CONVERSION 1
#else
#define SIMDPP_HAS_INT64_TO_FLOAT64_CONVERSION 0
#define SIMDPP_HAS_INT64_TO_FLOAT32_CONVERSION 0
#define SIMDPP_HAS_UINT64_TO_FLOAT64_CONVERSION 0
#define SIMDPP_HAS_UINT64_TO_FLOAT32_CONVERSION 0

#define SIMDPP_HAS_FLOAT32_TO_INT64_CONVERSION 0
#define SIMDPP_HAS_FLOAT32_TO_UINT64_CONVERSION 0

#define SIMDPP_HAS_FLOAT64_TO_INT64_CONVERSION 0
#define SIMDPP_HAS_FLOAT64_TO_UINT64_CONVERSION 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_SSSE3 || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT8_SHIFT_L_BY_VECTOR 1
#define SIMDPP_HAS_UINT8_SHIFT_L_BY_VECTOR 1
#define SIMDPP_HAS_INT16_SHIFT_L_BY_VECTOR 1
#define SIMDPP_HAS_UINT16_SHIFT_L_BY_VECTOR 1
#else
#define SIMDPP_HAS_INT8_SHIFT_L_BY_VECTOR 0
#define SIMDPP_HAS_UINT8_SHIFT_L_BY_VECTOR 0
#define SIMDPP_HAS_INT16_SHIFT_L_BY_VECTOR 0
#define SIMDPP_HAS_UINT16_SHIFT_L_BY_VECTOR 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_SSE2 || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT32_SHIFT_L_BY_VECTOR 1
#define SIMDPP_HAS_UINT32_SHIFT_L_BY_VECTOR 1
#else
#define SIMDPP_HAS_INT32_SHIFT_L_BY_VECTOR 0
#define SIMDPP_HAS_UINT32_SHIFT_L_BY_VECTOR 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_SSSE3 || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT8_SHIFT_R_BY_VECTOR 1
#define SIMDPP_HAS_UINT8_SHIFT_R_BY_VECTOR 1
#define SIMDPP_HAS_UINT16_SHIFT_R_BY_VECTOR 1
#else
#define SIMDPP_HAS_INT8_SHIFT_R_BY_VECTOR 0
#define SIMDPP_HAS_UINT8_SHIFT_R_BY_VECTOR 0
#define SIMDPP_HAS_UINT16_SHIFT_R_BY_VECTOR 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_AVX512BW || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT16_SHIFT_R_BY_VECTOR 1
#else
#define SIMDPP_HAS_INT16_SHIFT_R_BY_VECTOR 0
#endif

#if SIMDPP_USE_NULL || SIMDPP_USE_SSE2 || SIMDPP_USE_NEON || SIMDPP_USE_ALTIVEC || SIMDPP_USE_MSA
#define SIMDPP_HAS_INT32_SHIFT_R_BY_VECTOR 1
#define SIMDPP_HAS_UINT32_SHIFT_R_BY_VECTOR 1
#else
#define SIMDPP_HAS_INT32_SHIFT_R_BY_VECTOR 0
#define SIMDPP_HAS_UINT32_SHIFT_R_BY_VECTOR 0
#endif

#endif
