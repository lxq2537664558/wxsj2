//---------------------------------------------------------------------------
// Script Engine by FireFox
// Desc:	Header File
//---------------------------------------------------------------------------
#ifndef FoxDebug_H
#define FoxDebug_H
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#define SAFE_FREE(a)	if (a) {g_MemFree(a); (a)=NULL;}
#define SAFE_RELEASE(a)	if (a) {(a)->Release(); (a)=NULL;}
//---------------------------------------------------------------------------
#ifdef _DEBUG
	#define KASSERT(x)	NULL
//	#define KASSERT(x)	if (!(x)) g_AssertFailed(__FILE__, __LINE__)
#else
	#define KASSERT(x)	NULL
#endif
//---------------------------------------------------------------------------
#endif