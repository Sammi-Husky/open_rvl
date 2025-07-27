#ifndef RVL_SDK_CX_COMPRESSION_H
#define RVL_SDK_CX_COMPRESSION_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

void CXUncompressLZ(void* data, void* destination);
u32 CXGetUncompressedSize(void* data);

#ifdef __cplusplus
}
#endif
#endif
