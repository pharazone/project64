#pragma once
#include "types.h"

void gfxColorMask(bool rgb, bool a);
void gfxClipWindow(uint32_t minx, uint32_t miny, uint32_t maxx, uint32_t maxy);
gfxContext_t gfxSstWinOpen(gfxColorFormat_t color_format, gfxOriginLocation_t origin_location, int nColBuffers, int nAuxBuffers);
bool gfxSstWinClose(gfxContext_t context);
void gfxTextureBufferExt(gfxChipID_t tmu, uint32_t startAddress, gfxLOD_t lodmin, gfxLOD_t lodmax, gfxAspectRatio_t aspect, gfxTextureFormat_t fmt, uint32_t evenOdd);
void gfxRenderBuffer(gfxBuffer_t buffer);
void gfxBufferSwap(uint32_t swap_interval);
bool gfxLfbLock(gfxLock_t type, gfxBuffer_t buffer, gfxLfbWriteMode_t writeMode, gfxOriginLocation_t origin, bool pixelPipeline, gfxLfbInfo_t *info);
void gfxAuxBufferExt(gfxBuffer_t buffer);
void gfxBufferClear(gfxColor_t color, gfxAlpha_t alpha, uint32_t depth);
bool gfxLfbReadRegion(gfxBuffer_t src_buffer, uint32_t src_x, uint32_t src_y, uint32_t src_width, uint32_t src_height, uint32_t dst_stride, void *dst_data);
bool gfxLfbWriteRegion(gfxBuffer_t dst_buffer, uint32_t dst_x, uint32_t dst_y, gfxLfbSrcFmt_t src_format, uint32_t src_width, uint32_t src_height, bool pixelPipeline, int32_t src_stride, void *src_data);
