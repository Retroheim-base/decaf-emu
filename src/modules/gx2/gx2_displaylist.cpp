#include "gx2_displaylist.h"

void
GX2BeginDisplayListEx(GX2DisplayList *displayList, uint32_t size, BOOL unk1)
{
}

void
GX2BeginDisplayList(GX2DisplayList *displayList, uint32_t size)
{
}

uint32_t
GX2EndDisplayList(GX2DisplayList *displayList)
{
   return 0;
}

void
GX2DirectCallDisplayList(GX2DisplayList *displayList, uint32_t size)
{
}

void
GX2CallDisplayList(GX2DisplayList *displayList, uint32_t size)
{
}

BOOL
GX2GetDisplayListWriteStatus()
{
   return FALSE;
}

BOOL
GX2GetCurrentDisplayList(be_val<uint32_t> *outDisplayList, be_val<uint32_t> *outSize)
{
   return FALSE;
}

void
GX2CopyDisplayList(GX2DisplayList *displayList, uint32_t size)
{
}
