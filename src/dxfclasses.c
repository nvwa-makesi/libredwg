/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --output-file src/dxfclasses.tmp src/dxfclasses.in  */
/* Computed positions: -k'2,6,10,12' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "src/dxfclasses.in"
// -*- mode: c -*-
/*****************************************************************************/
/*  LibreDWG - free implementation of the DWG file format                    */
/*                                                                           */
/*  Copyright (C) 2020 Free Software Foundation, Inc.                        */
/*                                                                           */
/*  This library is free software, licensed under the terms of the GNU       */
/*  General Public License as published by the Free Software Foundation,     */
/*  either version 3 of the License, or (at your option) any later version.  */
/*  You should have received a copy of the GNU General Public License        */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.    */
/*****************************************************************************/

/*
 * dxfclasses.c: create classes, lookup the initial class values from its DXF name.
 *               generated via gperf from dxfclass.in
 *
 * written Reini Urban
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include "config.h"
#include "dwg.h"
#include "common.h"
// other imports
int dwg_add_class (Dwg_Data *restrict dwg, const char *const restrict dxfname,
                   const char *const restrict cppname, const char *const restrict appname,
                   const bool is_entity);
// export
EXPORT int dwg_require_class (Dwg_Data *restrict dwg,
                              const char *const restrict dxfname, const int len);
// internal
const struct Dwg_DXFClass * in_word_set (register const char *str, register size_t len);

enum apptypes {
  ODBXCLASS,
  ODBX_OR_A2000CLASS,
  A2000CLASS,
  SCENEOECLASS,
  ISMCLASS,
  EXPRESSCLASS,
  SPECIALCLASS,
};
#define ODBX ODBXCLASS
#define ISM ISMCLASS
#define SCENEOE SCENEOECLASS
#define EXPRESS EXPRESSCLASS
#define SPECIAL SPECIALCLASS
//%null-strings

#line 60 "src/dxfclasses.in"
struct Dwg_DXFClass {int name; const char *const cppname; unsigned apptype:4; unsigned isent:1;};

#define TOTAL_KEYWORDS 117
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 38
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 277
/* maximum key range = 273, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278,   0, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278,   0,  45,   5,   5,  10,
       10,  20, 125,  65,  60,  20,  60,  15,  95,  90,
       35,   0,  10,   5, 100,   5,   0,  39, 278,  35,
        0, 278, 278, 278, 278,  90,   0, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
      278, 278, 278, 278, 278, 278, 278
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]+1];
#if defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang_major__ && defined __clang_minor__ && __clang_major__ + (__clang_minor__ >= 9) > 3))
      [[fallthrough]];
#elif defined __GNUC__ && __GNUC__ >= 7
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
#if defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang_major__ && defined __clang_minor__ && __clang_major__ + (__clang_minor__ >= 9) > 3))
      [[fallthrough]];
#elif defined __GNUC__ && __GNUC__ >= 7
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
#if defined __cplusplus && (__cplusplus >= 201703L || (__cplusplus >= 201103L && defined __clang_major__ && defined __clang_minor__ && __clang_major__ + (__clang_minor__ >= 9) > 3))
      [[fallthrough]];
#elif defined __GNUC__ && __GNUC__ >= 7
      __attribute__ ((__fallthrough__));
#endif
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

struct stringpool_t
  {
    char stringpool_str5[sizeof("HATCH")];
    char stringpool_str8[sizeof("SUN")];
    char stringpool_str9[sizeof("DATATABLE")];
    char stringpool_str10[sizeof("SCALE")];
    char stringpool_str20[sizeof("IMAGE")];
    char stringpool_str21[sizeof("PDFUNDERLAY")];
    char stringpool_str23[sizeof("IDBUFFER")];
    char stringpool_str25[sizeof("TABLESTYLE")];
    char stringpool_str27[sizeof("XRECORD")];
    char stringpool_str28[sizeof("IMAGEDEF")];
    char stringpool_str30[sizeof("ACDBASSOCACTION")];
    char stringpool_str32[sizeof("TABLECONTENT")];
    char stringpool_str34[sizeof("ACDBASSOCDEPENDENCY")];
    char stringpool_str35[sizeof("ACDBASSOCACTIONPARAM")];
    char stringpool_str36[sizeof("DGNUNDERLAY")];
    char stringpool_str37[sizeof("ACSH_SPHERE_CLASS")];
    char stringpool_str39[sizeof("ACDBASSOCARRAYACTIONBODY")];
    char stringpool_str41[sizeof("ACDBASSOCVERTEXACTIONPARAM")];
    char stringpool_str42[sizeof("ACSH_FILLET_CLASS")];
    char stringpool_str43[sizeof("ACSH_CHAMFER_CLASS")];
    char stringpool_str45[sizeof("ACDBASSOCARRAYMODIFYACTIONBODY")];
    char stringpool_str46[sizeof("ACAD_EVALUATION_GRAPH")];
    char stringpool_str48[sizeof("TABLEGEOMETRY")];
    char stringpool_str49[sizeof("ACDBASSOCFACEACTIONPARAM")];
    char stringpool_str51[sizeof("ACDBPERSSUBENTMANAGER")];
    char stringpool_str54[sizeof("ACDBASSOCROTATEDDIMACTIONBODY")];
    char stringpool_str55[sizeof("DWFUNDERLAY")];
    char stringpool_str56[sizeof("ACDBASSOCSWEPTSURFACEACTIONBODY")];
    char stringpool_str57[sizeof("ACDBASSOCEXTENDSURFACEACTIONBODY")];
    char stringpool_str58[sizeof("ACDB_ALDIMOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str59[sizeof("ACDBASSOCEXTRUDEDSURFACEACTIONBODY")];
    char stringpool_str61[sizeof("ACDBASSOCMLEADERACTIONBODY")];
    char stringpool_str63[sizeof("ACDB_DMDIMOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str65[sizeof("ACDB_MLEADEROBJECTCONTEXTDATA_CLASS")];
    char stringpool_str66[sizeof("ACSH_SWEEP_CLASS")];
    char stringpool_str67[sizeof("ACDBASSOCFILLETSURFACEACTIONBODY")];
    char stringpool_str68[sizeof("ACDB_RADIMOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str70[sizeof("LIGHT")];
    char stringpool_str71[sizeof("VBA_PROJECT")];
    char stringpool_str73[sizeof("MATERIAL")];
    char stringpool_str74[sizeof("ACDBASSOCPATHACTIONPARAM")];
    char stringpool_str75[sizeof("ACSH_WEDGE_CLASS")];
    char stringpool_str76[sizeof("ACDBASSOCPERSSUBENTMANAGER")];
    char stringpool_str77[sizeof("WIPEOUT")];
    char stringpool_str78[sizeof("DIMASSOC")];
    char stringpool_str79[sizeof("OLE2FRAME")];
    char stringpool_str80[sizeof("ACDBASSOC3POINTANGULARDIMACTIONBODY")];
    char stringpool_str81[sizeof("ACDBASSOCPATCHSURFACEACTIONBODY")];
    char stringpool_str83[sizeof("ACSH_PYRAMID_CLASS")];
    char stringpool_str86[sizeof("MULTILEADER")];
    char stringpool_str88[sizeof("ACDBASSOCGEOMDEPENDENCY")];
    char stringpool_str91[sizeof("IMAGEDEF_REACTOR")];
    char stringpool_str93[sizeof("ACDBASSOCREVOLVEDSURFACEACTIONBODY")];
    char stringpool_str94[sizeof("LWPOLYLINE")];
    char stringpool_str95[sizeof("RASTERVARIABLES")];
    char stringpool_str96[sizeof("ACDBASSOCBLENDSURFACEACTIONBODY")];
    char stringpool_str98[sizeof("ACDBASSOCALIGNEDIMACTIONBODY")];
    char stringpool_str99[sizeof("ACDBASSOCALIGNEDDIMACTIONBODY")];
    char stringpool_str100[sizeof("ACSH_EXTRUSION_CLASS")];
    char stringpool_str101[sizeof("ACDB_FCFOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str103[sizeof("ACSH_REVOLVE_CLASS")];
    char stringpool_str104[sizeof("ARCALIGNEDTEXT")];
    char stringpool_str105[sizeof("RTEXT")];
    char stringpool_str106[sizeof("LAYOUT")];
    char stringpool_str110[sizeof("ACAD_PROXY_ENTITY_WRAPPER")];
    char stringpool_str111[sizeof("LAYER_INDEX")];
    char stringpool_str114[sizeof("ACSH_BOX_CLASS")];
    char stringpool_str119[sizeof("SPATIAL_FILTER")];
    char stringpool_str121[sizeof("ACDBASSOCPLANESURFACEACTIONBODY")];
    char stringpool_str122[sizeof("ACDBASSOCLOFTEDSURFACEACTIONBODY")];
    char stringpool_str125[sizeof("ACAD_TABLE")];
    char stringpool_str126[sizeof("ACDBASSOCNETWORK")];
    char stringpool_str127[sizeof("MLEADERSTYLE")];
    char stringpool_str128[sizeof("ARC_DIMENSION")];
    char stringpool_str129[sizeof("ACDB_BLKREFOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str130[sizeof("ACSH_CONE_CLASS")];
    char stringpool_str131[sizeof("ACSH_TORUS_CLASS")];
    char stringpool_str132[sizeof("ACDBASSOCASMBODYACTIONPARAM")];
    char stringpool_str133[sizeof("ACDBASSOCPOINTREFACTIONPARAM")];
    char stringpool_str134[sizeof("ACSH_CYLINDER_CLASS")];
    char stringpool_str135[sizeof("ACAD_PROXY_OBJECT_WRAPPER")];
    char stringpool_str136[sizeof("ACDBASSOCDIMDEPENDENCYBODY")];
    char stringpool_str137[sizeof("CELLSTYLEMAP")];
    char stringpool_str138[sizeof("ACDBASSOCCOMPOUNDACTIONPARAM")];
    char stringpool_str139[sizeof("ACDB_ANGDIMOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str140[sizeof("ACDBASSOCORDINATEDIMACTIONBODY")];
    char stringpool_str141[sizeof("WIPEOUTVARIABLES")];
    char stringpool_str143[sizeof("ACDBASSOCNETWORKSURFACEACTIONBODY")];
    char stringpool_str144[sizeof("ACDB_LEADEROBJECTCONTEXTDATA_CLASS")];
    char stringpool_str146[sizeof("ACDBASSOCOBJECTACTIONPARAM")];
    char stringpool_str148[sizeof("ACDB_ANNOTSCALEOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str152[sizeof("ACDBASSOCOFFSETSURFACEACTIONBODY")];
    char stringpool_str153[sizeof("SPATIAL_INDEX")];
    char stringpool_str154[sizeof("ACDBDETAILVIEWSTYLE")];
    char stringpool_str157[sizeof("ACDBASSOCRESTOREENTITYSTATEACTIONBODY")];
    char stringpool_str163[sizeof("PDFDEFINITION")];
    char stringpool_str164[sizeof("ACDBSECTIONVIEWSTYLE")];
    char stringpool_str168[sizeof("ACSH_BOOLEAN_CLASS")];
    char stringpool_str169[sizeof("ACDBASSOCEDGEACTIONPARAM")];
    char stringpool_str170[sizeof("ACSH_BREP_CLASS")];
    char stringpool_str174[sizeof("ACDBASSOCEDGEFILLETACTIONBODY")];
    char stringpool_str175[sizeof("ACDBASSOCEDGECHAMFERACTIONBODY")];
    char stringpool_str178[sizeof("DGNDEFINITION")];
    char stringpool_str185[sizeof("ACSH_LOFT_CLASS")];
    char stringpool_str190[sizeof("ACDB_RADIMLGOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str196[sizeof("VISUALSTYLE")];
    char stringpool_str197[sizeof("DWFDEFINITION")];
    char stringpool_str200[sizeof("ACDBASSOCTRIMSURFACEACTIONBODY")];
    char stringpool_str213[sizeof("SORTENTSTABLE")];
    char stringpool_str220[sizeof("ACDBPLACEHOLDER")];
    char stringpool_str223[sizeof("ACDBASSOCOSNAPPOINTREFACTIONPARAM")];
    char stringpool_str224[sizeof("ACDBDICTIONARYWDFLT")];
    char stringpool_str229[sizeof("ACDB_ORDDIMOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str238[sizeof("ACSH_HISTORY_CLASS")];
    char stringpool_str247[sizeof("ACDB_TEXTOBJECTCONTEXTDATA_CLASS")];
    char stringpool_str248[sizeof("DICTIONARYVAR")];
    char stringpool_str277[sizeof("PLOTSETTINGS")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "HATCH",
    "SUN",
    "DATATABLE",
    "SCALE",
    "IMAGE",
    "PDFUNDERLAY",
    "IDBUFFER",
    "TABLESTYLE",
    "XRECORD",
    "IMAGEDEF",
    "ACDBASSOCACTION",
    "TABLECONTENT",
    "ACDBASSOCDEPENDENCY",
    "ACDBASSOCACTIONPARAM",
    "DGNUNDERLAY",
    "ACSH_SPHERE_CLASS",
    "ACDBASSOCARRAYACTIONBODY",
    "ACDBASSOCVERTEXACTIONPARAM",
    "ACSH_FILLET_CLASS",
    "ACSH_CHAMFER_CLASS",
    "ACDBASSOCARRAYMODIFYACTIONBODY",
    "ACAD_EVALUATION_GRAPH",
    "TABLEGEOMETRY",
    "ACDBASSOCFACEACTIONPARAM",
    "ACDBPERSSUBENTMANAGER",
    "ACDBASSOCROTATEDDIMACTIONBODY",
    "DWFUNDERLAY",
    "ACDBASSOCSWEPTSURFACEACTIONBODY",
    "ACDBASSOCEXTENDSURFACEACTIONBODY",
    "ACDB_ALDIMOBJECTCONTEXTDATA_CLASS",
    "ACDBASSOCEXTRUDEDSURFACEACTIONBODY",
    "ACDBASSOCMLEADERACTIONBODY",
    "ACDB_DMDIMOBJECTCONTEXTDATA_CLASS",
    "ACDB_MLEADEROBJECTCONTEXTDATA_CLASS",
    "ACSH_SWEEP_CLASS",
    "ACDBASSOCFILLETSURFACEACTIONBODY",
    "ACDB_RADIMOBJECTCONTEXTDATA_CLASS",
    "LIGHT",
    "VBA_PROJECT",
    "MATERIAL",
    "ACDBASSOCPATHACTIONPARAM",
    "ACSH_WEDGE_CLASS",
    "ACDBASSOCPERSSUBENTMANAGER",
    "WIPEOUT",
    "DIMASSOC",
    "OLE2FRAME",
    "ACDBASSOC3POINTANGULARDIMACTIONBODY",
    "ACDBASSOCPATCHSURFACEACTIONBODY",
    "ACSH_PYRAMID_CLASS",
    "MULTILEADER",
    "ACDBASSOCGEOMDEPENDENCY",
    "IMAGEDEF_REACTOR",
    "ACDBASSOCREVOLVEDSURFACEACTIONBODY",
    "LWPOLYLINE",
    "RASTERVARIABLES",
    "ACDBASSOCBLENDSURFACEACTIONBODY",
    "ACDBASSOCALIGNEDIMACTIONBODY",
    "ACDBASSOCALIGNEDDIMACTIONBODY",
    "ACSH_EXTRUSION_CLASS",
    "ACDB_FCFOBJECTCONTEXTDATA_CLASS",
    "ACSH_REVOLVE_CLASS",
    "ARCALIGNEDTEXT",
    "RTEXT",
    "LAYOUT",
    "ACAD_PROXY_ENTITY_WRAPPER",
    "LAYER_INDEX",
    "ACSH_BOX_CLASS",
    "SPATIAL_FILTER",
    "ACDBASSOCPLANESURFACEACTIONBODY",
    "ACDBASSOCLOFTEDSURFACEACTIONBODY",
    "ACAD_TABLE",
    "ACDBASSOCNETWORK",
    "MLEADERSTYLE",
    "ARC_DIMENSION",
    "ACDB_BLKREFOBJECTCONTEXTDATA_CLASS",
    "ACSH_CONE_CLASS",
    "ACSH_TORUS_CLASS",
    "ACDBASSOCASMBODYACTIONPARAM",
    "ACDBASSOCPOINTREFACTIONPARAM",
    "ACSH_CYLINDER_CLASS",
    "ACAD_PROXY_OBJECT_WRAPPER",
    "ACDBASSOCDIMDEPENDENCYBODY",
    "CELLSTYLEMAP",
    "ACDBASSOCCOMPOUNDACTIONPARAM",
    "ACDB_ANGDIMOBJECTCONTEXTDATA_CLASS",
    "ACDBASSOCORDINATEDIMACTIONBODY",
    "WIPEOUTVARIABLES",
    "ACDBASSOCNETWORKSURFACEACTIONBODY",
    "ACDB_LEADEROBJECTCONTEXTDATA_CLASS",
    "ACDBASSOCOBJECTACTIONPARAM",
    "ACDB_ANNOTSCALEOBJECTCONTEXTDATA_CLASS",
    "ACDBASSOCOFFSETSURFACEACTIONBODY",
    "SPATIAL_INDEX",
    "ACDBDETAILVIEWSTYLE",
    "ACDBASSOCRESTOREENTITYSTATEACTIONBODY",
    "PDFDEFINITION",
    "ACDBSECTIONVIEWSTYLE",
    "ACSH_BOOLEAN_CLASS",
    "ACDBASSOCEDGEACTIONPARAM",
    "ACSH_BREP_CLASS",
    "ACDBASSOCEDGEFILLETACTIONBODY",
    "ACDBASSOCEDGECHAMFERACTIONBODY",
    "DGNDEFINITION",
    "ACSH_LOFT_CLASS",
    "ACDB_RADIMLGOBJECTCONTEXTDATA_CLASS",
    "VISUALSTYLE",
    "DWFDEFINITION",
    "ACDBASSOCTRIMSURFACEACTIONBODY",
    "SORTENTSTABLE",
    "ACDBPLACEHOLDER",
    "ACDBASSOCOSNAPPOINTREFACTIONPARAM",
    "ACDBDICTIONARYWDFLT",
    "ACDB_ORDDIMOBJECTCONTEXTDATA_CLASS",
    "ACSH_HISTORY_CLASS",
    "ACDB_TEXTOBJECTCONTEXTDATA_CLASS",
    "DICTIONARYVAR",
    "PLOTSETTINGS"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct Dwg_DXFClass *
in_word_set (register const char *str, register size_t len)
{
  static const struct Dwg_DXFClass wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 65 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str5,		"AcDbHatch",		ODBX,	1},
      {-1}, {-1},
#line 100 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str8, 		"AcDbSun",		SCENEOE, 0},
#line 91 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str9,	"AcDbDataTable",	ODBX,	0},
#line 92 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str10,		"AcDbScale",		ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 94 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str20,		"AcDbRasterImage",	ISM,	1},
#line 114 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str21,		"AcDbPdfReference",	ODBX,	1},
      {-1},
#line 85 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str23,	"AcDbIdBuffer",		ODBX,	0},
      {-1},
#line 87 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str25,	"AcDbTableStyle",	ODBX,	0},
      {-1},
#line 81 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str27,	"AcDbXrecord",		ODBX,	0},
#line 95 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28,	"AcDbRasterImageDef",	ISM,	0},
      {-1},
#line 141 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str30,		"AcDbAssocAction",		ODBX,	0},
      {-1},
#line 88 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32,	"AcDbTableContent",	ODBX,	0},
      {-1},
#line 146 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str34,		"AcDbAssocDependency",		ODBX,	0},
#line 174 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str35,			"AcDbAssocActionParam",		ODBX,	0},
#line 116 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36,		"AcDbDgnReference",	ODBX,	1},
#line 133 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str37,	"AcDbShSphere",		ODBX,	0},
      {-1},
#line 155 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str39,	"AcDbAssocArrayActionBody",		ODBX,	0},
      {-1},
#line 144 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str41,	"AcDbAssocVertexActionParam",	ODBX,	0},
#line 128 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42,	"AcDbShFillet",		ODBX,	0},
#line 124 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str43,	"AcDbShChamfer",	ODBX,	0},
      {-1},
#line 154 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45,	"AcDbAssocArrayModifyActionBody",	ODBX,	0},
#line 113 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str46,	"AcDbEvalGraph",	ODBX,	0},
      {-1},
#line 89 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48,	"AcDbTableGeometry",	ODBX,	0},
#line 178 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49,		"AcDbAssocFaceActionParam",	ODBX,	0},
      {-1},
#line 139 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, 		"AcDbPersSubentManager",	ODBX, 0},
      {-1}, {-1},
#line 152 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54,	"AcDbAssocRotatedDimActionBody",	ODBX,	0},
#line 118 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55,		"AcDbDwfReference",	ODBX,	1},
#line 171 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str56,	"AcDbAssocSweptSurfaceActionBody",	ODBX,	0},
#line 161 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57,	"AcDbAssocExtendSurfaceActionBody",	ODBX,	0},
#line 182 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58,	"AcDbAlignedDimensionObjectContextData",ODBX,	0},
#line 162 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59,	"AcDbAssocExtrudedSurfaceActionBody",	ODBX,	0},
      {-1},
#line 158 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str61,	"AcDbAssocMLeaderActionBody",		ODBX,	0},
      {-1},
#line 186 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63,	"AcDbDiametricDimensionObjectContextData",ODBX,	0},
      {-1},
#line 189 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65,	"AcDbMLeaderObjectContextData",		ODBX,	0},
#line 134 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66,	"AcDbShSweep",		ODBX,	0},
#line 163 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67,	"AcDbAssocFilletSurfaceActionBody",	ODBX,	0},
#line 192 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68,	"AcDbRadialDimensionObjectContextData",	ODBX,	0},
      {-1},
#line 99 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70,		"AcDbLight",		SCENEOE, 1},
#line 80 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71,	"AcDbVbaProject",	ODBX,	0},
      {-1},
#line 109 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73,		"AcDbMaterial",		ODBX,	0},
#line 179 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str74,		"AcDbAssocPathActionParam",	ODBX,	0},
#line 136 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75,	"AcDbShWedge",		ODBX,	0},
#line 138 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76,	"AcDbAssocPersSubentManager",	ODBX,	0},
#line 103 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77,	"AcDbWipeout", 		SPECIAL, 1},
#line 102 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, 	"AcDbDimAssoc",		SPECIAL, 0},
#line 66 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79,	"AcDbOle2Frame",	ODBX,	1},
#line 149 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80,"AcDbAssoc3PointAngularDimActionBody",	ODBX,	0},
#line 168 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81,	"AcDbAssocPatchSurfaceActionBody",	ODBX,	0},
      {-1},
#line 131 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str83,	"AcDbShPyramid",	ODBX,	0},
      {-1}, {-1},
#line 68 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str86,	"AcDbMLeader",		ODBX,	1},
      {-1},
#line 145 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88,	"AcDbAssocGeomDependency",	ODBX,	0},
      {-1}, {-1},
#line 96 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str91,"AcDbRasterImageDefReactor",	ISM,	0},
      {-1},
#line 170 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93,	"AcDbAssocRevolvedSurfaceActionBody",	ODBX,	0},
#line 64 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94,	"AcDbPolyline",		ODBX,	1},
#line 97 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95,"AcDbRasterVariables",	ISM,	0},
#line 160 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96,	"AcDbAssocBlendSurfaceActionBody",	ODBX,	0},
      {-1},
#line 150 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str98,	"AcDbAssocAlignedDimActionBody",	ODBX,	0},
#line 142 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str99,	"AcDbAssocAlignedDimActionBody",	ODBX,	0},
#line 127 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str100,	"AcDbShExtrusion",	ODBX,	0},
#line 187 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str101,	"AcDbFcfObjectContextData",		ODBX,	0},
      {-1},
#line 132 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103,	"AcDbShRevolve",	ODBX,	0},
#line 106 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str104, "AcDbArcAlignedText",	EXPRESS, 1},
#line 105 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str105, 		"AcDbRText", 		EXPRESS, 1},
#line 77 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106,		"AcDbLayout",		A2000CLASS,	0},
      {-1}, {-1}, {-1},
#line 73 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110,	"AcDbProxyEntityWrapper",	ODBX_OR_A2000CLASS,	0},
#line 82 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111,	"AcDbLayerIndex",	ODBX,	0},
      {-1}, {-1},
#line 122 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str114,		"AcDbShBox",		ODBX,	0},
      {-1}, {-1}, {-1}, {-1},
#line 84 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str119,	"AcDbSpatialFilter",	ODBX,	0},
      {-1},
#line 167 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str121,	"AcDbAssocPlaneSurfaceActionBody",	ODBX,	0},
#line 164 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122,	"AcDbAssocLoftedSurfaceActionBody",	ODBX,	0},
      {-1}, {-1},
#line 69 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125,	"AcDbTable",		ODBX,	1},
#line 140 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126,		"AcDbAssocNetwork",		ODBX,	0},
#line 107 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127,	"AcDbMLeaderStyle",	SPECIAL, 0},
#line 67 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128,	"AcDbArcDimension",	ODBX,	1},
#line 185 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str129,	"AcDbBlkrefObjectContextData",		ODBX,	0},
#line 125 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130,	"AcDbShCone",		ODBX,	0},
#line 135 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131,	"AcDbShTorus",		ODBX,	0},
#line 175 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132,		"AcDbAssocAsmbodyActionParam",	ODBX,	0},
#line 181 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133,		"AcDbAssocPointRefActionParam",	ODBX,	0},
#line 126 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str134,	"AcDbShCylinder",	ODBX,	0},
#line 74 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str135,	"AcDbProxyObjectWrapper",	ODBX_OR_A2000CLASS,	0},
#line 147 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str136,	"AcDbAssocDimDependencyBody",	ODBX,	0},
#line 90 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137,	"AcDbCellStyleMap",	ODBX,	0},
#line 176 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138,		"AcDbAssocCompoundActionParam",	ODBX,	0},
#line 183 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139,	"AcDbAngularDimensionObjectContextData",ODBX,	0},
#line 151 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140,	"AcDbAssocOrdinatedDimActionBody",	ODBX,	0},
#line 104 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141,"AcDbWipeoutVariables",	ODBX,	0},
      {-1},
#line 165 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143,	"AcDbAssocNetworkSurfaceActionBody",	ODBX,	0},
#line 188 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144,	"AcDbLeaderObjectContextData",		ODBX,	0},
      {-1},
#line 180 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146,		"AcDbAssocObjectActionParam",	ODBX,	0},
      {-1},
#line 184 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148,	"AcDbAnnotScaleObjectContextData",	ODBX,	0},
      {-1}, {-1}, {-1},
#line 166 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152,	"AcDbAssocOffsetSurfaceActionBody",	ODBX,	0},
#line 83 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153,	"AcDbSpatialIndex",	ODBX,	0},
#line 112 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154,	"AcDbDetailViewStyle",	ODBX,	0},
      {-1}, {-1},
#line 169 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str157,	"AcDbAssocRestoreEntityStateActionBody",	ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 115 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163,		"AcDbPdfDefinition",	ODBX,	0},
#line 111 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164,	"AcDbSectionViewStyle",	ODBX,	0},
      {-1}, {-1}, {-1},
#line 121 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168,	"AcDbShBoolean",	ODBX,	0},
#line 177 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169,		"AcDbAssocEdgeActionParam",	ODBX,	0},
#line 123 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170,	"AcDbShBrep",		ODBX,	0},
      {-1}, {-1}, {-1},
#line 157 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174,	"AcDbAssocEdgeFilletActionBody",	ODBX,	0},
#line 156 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175,	"AcDbAssocEdgeChamferActionBody",	ODBX,	0},
      {-1}, {-1},
#line 117 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178,		"AcDbDgnDefinition",	ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 130 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185,	"AcDbShLoft",		ODBX,	0},
      {-1}, {-1}, {-1}, {-1},
#line 191 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190,	"AcDbRadialDimensionLargeObjectContextData",	ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 86 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196,	"AcDbVisualStyle",	ODBX,	0},
#line 119 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197,		"AcDbDwfDefinition",	ODBX,	0},
      {-1}, {-1},
#line 172 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200,		"AcDbAssocTrimSurfaceActionBody",		ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1},
#line 78 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str213,	"AcDbSortentsTable",	A2000CLASS,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 72 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220,		"AcDbPlaceHolder",		ODBX_OR_A2000CLASS,	0},
      {-1}, {-1},
#line 143 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str223,"AcDbAssocOsnapPointRefActionParam",	ODBX,	0},
#line 71 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str224,		"AcDbDictionaryWithDefault",	ODBX_OR_A2000CLASS,	0},
      {-1}, {-1}, {-1}, {-1},
#line 190 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229,	"AcDbOrdinateDimensionObjectContextData",	ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 129 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238,	"AcDbShHistory",	ODBX,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 193 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247,	"AcDbTextObjectContextData",		ODBX,	0},
#line 76 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248,	"AcDbDictionaryVar",	A2000CLASS,	0},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1},
#line 110 "src/dxfclasses.in"
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277,		"AcDbPlotSettings",	ODBX,	0}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int o = wordlist[key].name;
          if (o >= 0)
            {
              register const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[key];
            }
        }
    }
  return 0;
}
#line 194 "src/dxfclasses.in"


/* Create classes on demand.
   Returns found or new klass->id, -1 on error.
*/
EXPORT int
dwg_require_class (Dwg_Data *restrict dwg, const char *const restrict dxfname, const int len)
{
  const struct Dwg_DXFClass* result;
  for (BITCODE_BL i = 0; i < dwg->num_classes; i++)
    {
      Dwg_Class *klass = &dwg->dwg_class[i];
      if (strEQ (klass->dxfname, dxfname))
        return klass->number;
    }

  result = in_word_set (dxfname, len);
  if (result)
    {
      switch ((enum apptypes)result->apptype)
        {
        case ODBXCLASS:
          dwg_add_class (dwg, dxfname, result->cppname, "ObjectDBX Classes", result->isent);
          break;
        case ODBX_OR_A2000CLASS:
          dwg_add_class (dwg, dxfname, result->cppname,
                         dwg->header.from_version <= R_2000 ? "AutoCAD 2000" : "ObjectDBX Classes",
                         result->isent);
          break;
        case A2000CLASS:
          dwg_add_class (dwg, dxfname, result->cppname, "AutoCAD 2000", result->isent);
          break;
        case SCENEOECLASS:
          dwg_add_class (dwg, dxfname, result->cppname, "SCENEOE", result->isent);
          break;
        case ISMCLASS:
          dwg_add_class (dwg, dxfname, result->cppname, "ISM", result->isent);
          break;
        case EXPRESSCLASS:
          {
            char appname[128];
            strcpy (appname, dxfname);
            strcat (appname, "|AutoCAD Express Tool");
            dwg_add_class (dwg, dxfname, result->cppname, appname, result->isent);
          }
          break;
        case SPECIALCLASS:
          {
            char appname[128];
            if (strEQc (dxfname, "MLEADERSTYLE"))
              strcpy (appname, "ACDB_MLEADERSTYLE_CLASS");
            else if (strEQc (dxfname, "WIPEOUT"))
              strcpy (appname, "Wipeout|Product Desc:     WipeOut Dbx Application");
            else if (strEQc (dxfname, "DIMASSOC"))
              strcpy (appname, "AcDbDimAssoc|Product Desc:     AcDim ARX App For Dimension");
            else
              {
                strcpy (appname, result->cppname);
                strcat (appname, "|Unknown ARX App");
              }
            dwg_add_class (dwg, dxfname, result->cppname, appname, result->isent);
          }
          break;
        default:
          fprintf (stderr, "dxfclass_require: Invalid apptype %d", (int)result->apptype);
          return -1;
        }
      return 500 + dwg->num_classes - 1;
    }
  return -1;
}

/*
 * Local variables:
 *   c-file-style: "gnu"
 * End:
 * vim: expandtab shiftwidth=4 cinoptions='\:2=2' :
 */
