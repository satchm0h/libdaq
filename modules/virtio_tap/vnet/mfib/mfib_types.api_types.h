#ifndef included_mfib_types_api_types_h
#define included_mfib_types_api_types_h
/* Imported API files */
#include <vnet/fib/fib_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef enum {
    MFIB_API_ITF_FLAG_NONE = 0,
    MFIB_API_ITF_FLAG_NEGATE_SIGNAL = 1,
    MFIB_API_ITF_FLAG_ACCEPT = 2,
    MFIB_API_ITF_FLAG_FORWARD = 4,
    MFIB_API_ITF_FLAG_SIGNAL_PRESENT = 8,
    MFIB_API_ITF_FLAG_DONT_PRESERVE = 16,
} vl_api_mfib_itf_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_mfib_path {
    vl_api_mfib_itf_flags_t itf_flags;
    vl_api_fib_path_t path;
} vl_api_mfib_path_t;

#endif
