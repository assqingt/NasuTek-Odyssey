/*
 * Miscellaneous Marshaling Routines
 *
 * Copyright 2006 Robert Shearman (for CodeWeavers)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdarg.h>
#include <string.h>

#define COBJMACROS
#define NONAMELESSUNION
#define NONAMELESSSTRUCT

#include "windef.h"
#include "winbase.h"
#include "wingdi.h"
#include "winuser.h"
#include "winerror.h"
#include "objbase.h"
#include "servprov.h"
#include "comcat.h"
#include "docobj.h"

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(actxprxy);

HRESULT CALLBACK IServiceProvider_QueryService_Proxy(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    void** ppvObject)
{
    TRACE("(%p, %s, %s, %p)\n", This, debugstr_guid(guidService),
        debugstr_guid(riid), ppvObject);

    return IServiceProvider_RemoteQueryService_Proxy(This, guidService, riid,
        (IUnknown **)ppvObject);
}

HRESULT __RPC_STUB IServiceProvider_QueryService_Stub(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    IUnknown** ppvObject)
{
    TRACE("(%p, %s, %s, %p)\n", This, debugstr_guid(guidService),
        debugstr_guid(riid), ppvObject);

    return IServiceProvider_QueryService(This, guidService, riid,
        (void **)ppvObject);
}

HRESULT CALLBACK ICatInformation_EnumClassesOfCategories_Proxy(
    ICatInformation *This,
    ULONG cImplemented,
    CATID rgcatidImpl[],
    ULONG cRequired,
    CATID rgcatidReq[],
    IEnumCLSID** ppenumClsid )
{
    TRACE("(%p)\n", This);
    return ICatInformation_RemoteEnumClassesOfCategories_Proxy( This, cImplemented, rgcatidImpl,
                                                                cRequired, rgcatidReq, ppenumClsid );
}

HRESULT __RPC_STUB ICatInformation_EnumClassesOfCategories_Stub(
    ICatInformation *This,
    ULONG cImplemented,
    CATID rgcatidImpl[],
    ULONG cRequired,
    CATID rgcatidReq[],
    IEnumCLSID** ppenumClsid )
{
    TRACE("(%p)\n", This);
    return ICatInformation_EnumClassesOfCategories( This, cImplemented, rgcatidImpl,
                                                    cRequired, rgcatidReq, ppenumClsid );
}

HRESULT CALLBACK ICatInformation_IsClassOfCategories_Proxy(
    ICatInformation *This,
    REFCLSID rclsid,
    ULONG cImplemented,
    CATID rgcatidImpl[],
    ULONG cRequired,
    CATID rgcatidReq[] )
{
    TRACE("(%p)\n", This);
    return ICatInformation_RemoteIsClassOfCategories_Proxy( This, rclsid, cImplemented, rgcatidImpl,
                                                            cRequired, rgcatidReq );
}

HRESULT __RPC_STUB ICatInformation_IsClassOfCategories_Stub(
    ICatInformation *This,
    REFCLSID rclsid,
    ULONG cImplemented,
    CATID rgcatidImpl[],
    ULONG cRequired,
    CATID rgcatidReq[] )
{
    TRACE("(%p)\n", This);
    return ICatInformation_IsClassOfCategories( This, rclsid, cImplemented, rgcatidImpl,
                                                cRequired, rgcatidReq );
}

HRESULT CALLBACK IPrint_Print_Proxy(
    IPrint *This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **ppPageSet,
    STGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage )
{
    TRACE("(%p)\n", This);
    return IPrint_RemotePrint_Proxy( This, grfFlags, pptd, ppPageSet, (RemSTGMEDIUM *)pstgmOptions,
                                     pcallback, nFirstPage, pcPagesPrinted, pnLastPage );
}

HRESULT __RPC_STUB IPrint_Print_Stub(
    IPrint *This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **ppPageSet,
    RemSTGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage )
{
    TRACE("(%p)\n", This);
    return IPrint_Print( This, grfFlags, pptd, ppPageSet, (STGMEDIUM *)pstgmOptions,
                         pcallback, nFirstPage, pcPagesPrinted, pnLastPage );
}

HRESULT CALLBACK IEnumOleDocumentViews_Next_Proxy(
    IEnumOleDocumentViews *This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched )
{
    TRACE("(%p)\n", This);
    return IEnumOleDocumentViews_RemoteNext_Proxy( This, cViews, rgpView, pcFetched );
}

HRESULT __RPC_STUB IEnumOleDocumentViews_Next_Stub(
    IEnumOleDocumentViews *This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched )
{
    TRACE("(%p)\n", This);
    return IEnumOleDocumentViews_Next( This, cViews, rgpView, pcFetched );
}
