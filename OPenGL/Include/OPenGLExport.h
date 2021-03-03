#ifndef OPenGLExport_h__
#define OPenGLExport_h__

#if defined(WIN32)
#ifdef OPenGL_EXPORTS
#define OPenGL_EXPORT __declspec(dllexport)
#else
#define  OPenGL_EXPORT __declspec(dllimport)
#endif

#pragma warning( disable: 4251 )

#elif __linux__
#define OPenGL_EXPORT

#else
#define OPenGL_EXPORT 
#endif
#endif // ExtendStructureExport_h__
