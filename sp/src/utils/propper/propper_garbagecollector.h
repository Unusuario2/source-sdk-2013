//========= Mapbase - https://github.com/mapbase-source/source-sdk-2013 =================//
//
// Purpose: Contains all the vbsp code that is needed for propper to compile.
//
// Author(s): Unusuario2
//
// $NoKeywords: $
//=======================================================================================//

#ifndef PROPPER_GARBAGECOLLECTOR_H
#define PROPPER_GARBAGECOLLECTOR_H

#ifdef _WIN32
#pragma once
#endif

#include "bsplib.h"

//-------------------------------+---------------+---------------------------------------//
//-------------------------------| vbsp.cpp code |---------------------------------------//
//-------------------------------+---------------+---------------------------------------//
typedef int qboolean;
typedef float vec_t;

extern vec_t	microvolume;
extern qboolean	noprune;
extern qboolean	glview;
extern qboolean	nodetail;
extern qboolean	fulldetail;
extern qboolean	onlyents;
extern bool		onlyprops;
extern qboolean	nomerge;
extern qboolean	nomergewater;
extern qboolean	nowater;
extern qboolean	nocsg;
extern qboolean	noweld;
extern qboolean	noshare;
extern qboolean	nosubdiv;
extern qboolean	notjunc;
extern qboolean	noopt;
extern qboolean	leaktest;
extern qboolean	verboseentities;
extern qboolean	dumpcollide;
extern qboolean	g_bLowPriority;
extern qboolean	g_DumpStaticProps;
extern qboolean	g_bSkyVis;			
extern bool		g_bLightIfMissing;
extern bool		g_snapAxialPlanes;
extern bool		g_bKeepStaleZip;
extern bool		g_NodrawTriggers;
extern bool		g_DisableWaterLighting;
extern bool		g_bAllowDetailCracks;
extern bool		g_bNoVirtualMesh;

extern float	g_defaultLuxelSize;
extern float	g_luxelScale;
extern float	g_minLuxelScale;
extern bool		g_BumpAll;
extern bool		g_bNoHiddenManifestMaps;

extern int			g_nDXLevel; 
extern CUtlVector<int> g_SkyAreas;

extern bool		g_bNoDefaultCubemaps;
extern bool		g_bSkyboxCubemaps;
extern bool		g_bPropperInsertAllAsStatic;
extern bool		g_bPropperStripEntities;
extern int		g_iDefaultCubemapSize;
extern int		noleaktest;


bool Is3DSkyboxArea(int area);
//--------------------------------+-------------------+----------------------------------//
//--------------------------------| End vbsp.cpp code |----------------------------------//
//--------------------------------+-------------------+----------------------------------//



//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



//--------------------------------+---------------+--------------------------------------//
//--------------------------------|  vbsp.h code  |--------------------------------------//
//--------------------------------+---------------+--------------------------------------//


//--------------------------------+-------------------+----------------------------------//
//--------------------------------|  End vbsp.h  code |----------------------------------//
//--------------------------------+-------------------+----------------------------------//
#endif //PROPPER_GARBAGECOLLECTOR_H