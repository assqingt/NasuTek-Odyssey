/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         Odyssey ReactX
 * FILE:            dll/directx/d3d9/d3d9_callbacks.h
 * PURPOSE:         Direct3D9's callback structs and constants
 * PROGRAMERS:      Gregor Gullwi <gbrunmar (dot) ros (at) gmail (dot) com>
 */
#ifndef _D3D9_CALLBACKS_H_
#define _D3D9_CALLBACKS_H_

typedef enum _D3D9_GETAVAILDRIVERMEMORY_TYPE
{
    D3D9_GETAVAILDRIVERMEMORY_TYPE_ALL      = 0,
    D3D9_GETAVAILDRIVERMEMORY_TYPE_LOCAL    = 4,
    D3D9_GETAVAILDRIVERMEMORY_TYPE_NONLOCAL = 5,
} D3D9_GETAVAILDRIVERMEMORY_TYPE;

#define D3D9_TEXTURETYPE_HALSURFACE     1
#define D3D9_TEXTURETYPE_BACKBUFFER     2

typedef struct _D3D9_GETAVAILDRIVERMEMORYDATA
{
/* 0x0000 */    struct _D3D9_Unknown6BC* pUnknown6BC;
/* 0x0004 */    D3D9_GETAVAILDRIVERMEMORY_TYPE dwMemoryType;
/* 0x0008 */    DWORD dwTextureType;
/* 0x000c */    DWORD dwFree;
} D3D9_GETAVAILDRIVERMEMORYDATA, FAR* LPD3D9_GETAVAILDRIVERMEMORYDATA;

typedef DWORD (WINAPI FAR* LPD3D9_GETAVAILDRIVERMEMORY)(LPD3D9_GETAVAILDRIVERMEMORYDATA);

DWORD WINAPI D3d9GetAvailDriverMemory(LPD3D9_GETAVAILDRIVERMEMORYDATA pData);

#endif // _D3D9_CALLBACKS_H_
