#ifndef RVL_SDK_CX_COMPRESSION_H
#define RVL_SDK_CX_COMPRESSION_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CXStream {
    u8 m_type : 4; // compression type
    u8 pad : 4;
    u32 m_size : 24; // 24-bit uncompressed size, in little-endian
    u32 m_size32; // 32-bit uncompressed size, in little-endian
    // TODO more members?
} CXStream;
// TODO size

typedef struct CXUncompContext {
    u8 unk0[0x30];
} CXUncompContext;
// TODO size

void CXInitUncompContextRL(CXUncompContext* ctx, void* p2);
void CXInitUncompContextLZ(CXUncompContext* ctx, void* p2);
void CXInitUncompContextHuffman(CXUncompContext* ctx, void* p2);

s32 CXReadUncompRL(CXUncompContext* ctx, const CXStream* src, void* dest);
s32 CXReadUncompLZ(CXUncompContext* ctx, const CXStream* src, void* dest);
s32 CXReadUncompHuffman(CXUncompContext* ctx, const CXStream* src, void* dest);

void CXUncompressLZ(void* data, void* destination);
u32 CXGetUncompressedSize(const void* data);

#ifdef __cplusplus
}
#endif
#endif
