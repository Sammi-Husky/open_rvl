#ifndef RVL_SDK_SC_SCAPI_PRDINFO_H
#define RVL_SDK_SC_SCAPI_PRDINFO_H
#include <types.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    SC_AREA_JPN,
    SC_AREA_USA,
    SC_AREA_EUR,
    SC_AREA_AUS,
    SC_AREA_BRA,
    SC_AREA_TWN,
    SC_AREA_KOR,
    SC_AREA_HKG,
    SC_AREA_ASI,
    SC_AREA_LTN,
    SC_AREA_SAF,
} SCProductArea;

typedef struct SCRegion {
    s8 area;      // at 0x0
    char name[4]; // at 0x1
} SCRegion;

BOOL __SCF1(const char*, char*, u32);
BOOL SCGetProductAreaString(char*, u32);
s8 SCGetProductArea(void);

#ifdef __cplusplus
}
#endif
#endif
