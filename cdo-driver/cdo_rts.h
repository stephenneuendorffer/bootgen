#include "stdint.h"

void cdo_Write32(uint64_t, uint32_t);
void cdo_MaskWrite32(uint64_t , uint32_t, uint32_t);
void cdo_MaskPoll(uint64_t , uint32_t, uint32_t, uint32_t);
void cdo_BlockWrite32(uint64_t, const uint32_t*, uint32_t);
void cdo_BlockSet32(uint64_t, uint32_t, uint32_t);