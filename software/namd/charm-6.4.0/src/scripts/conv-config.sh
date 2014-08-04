#!/bin/sh
#
# Generic converse configuration script:
#   Reads various configuration scripts and sets defaults.

if [ -z "$CHARMINC" ]
then
	echo "conv-config.sh: CHARMINC must point to the charm include dir"
	exit 1
fi

if [ -r $CHARMINC/conv-mach-pre.sh ]
then
. $CHARMINC/conv-mach-pre.sh
fi

if [ -r $CHARMINC/conv-common.sh ]
then
. $CHARMINC/conv-common.sh
fi

if [ ! -r $CHARMINC/conv-mach.sh ]
then
	echo "Can't find conv-mach.sh in $CHARMINC directory."
	exit 1
fi

CMK_LD_SHARED="-shared"

. $CHARMINC/conv-mach.sh

[ -z "$CMK_C_OPTIMIZE" ] && CMK_C_OPTIMIZE="-O"
[ -z "$CMK_C_DEBUG" ] && CMK_C_DEBUG="-g"
[ -z "$CMK_CXX_OPTIMIZE" ] && CMK_CXX_OPTIMIZE="$CMK_C_OPTIMIZE"
[ -z "$CMK_CXX_DEBUG" ] && CMK_CXX_DEBUG="$CMK_C_DEBUG"
[ -z "$CMK_F90_OPTIMIZE" ] && CMK_F90_OPTIMIZE="-O"
[ -z "$CMK_F90_DEBUG" ] && CMK_F90_DEBUG="-O"

[ -z "$CMK_CC" ] && CMK_CC='cc '
[ -z "$CMK_CXX" ] && CMK_CXX='c++ '
[ -z "$CMK_SUF" ] && CMK_SUF='o'
[ -z "$CMK_AR" ] && CMK_AR='ar q'
[ -z "$CMK_QT" ] && CMK_QT='generic'
[ -z "$CMK_LD" ] && CMK_LD="$CMK_CC"
[ -z "$CMK_LDXX" ] && CMK_LDXX="$CMK_CXX"
[ -z "$CMK_NM" ] && CMK_NM='nm '
[ -z "$CMK_SHARED_SUF" ] && CMK_SHARED_SUF='so'

[ -z "$CMK_FPP" ] && CMK_FPP="$CMK_CF90"
[ -z "$CMK_CF90_FIXED" ] && CMK_CF90_FIXED="$CMK_CF90"
[ -z "$CMK_CC_RELIABLE" ] && CMK_CC_RELIABLE="$CMK_CC"
[ -z "$CMK_CC_FASTEST" ] && CMK_CC_FASTEST="$CMK_CC"
[ -z "$CMK_CC_RELIABLE" ] && CMK_CC_RELIABLE="$CMK_CC"
[ -z "$CMK_CF77" ] && CMK_CF77_FIXED="$CMK_CF90"
[ -z "$CMK_CF77_FIXED" ] && CMK_CF77_FIXED="$CMK_CF77"

# set default earlier because option configs may need these value
[ -z "$CMK_NATIVE_CC" ] && CMK_NATIVE_CC="$CMK_CC"
[ -z "$CMK_NATIVE_CXX" ] && CMK_NATIVE_CXX="$CMK_CXX"
[ -z "$CMK_NATIVE_LD" ] && CMK_NATIVE_LD="$CMK_LD"
[ -z "$CMK_NATIVE_LDXX" ] && CMK_NATIVE_LDXX="$CMK_LDXX"
[ -z "$CMK_NATIVE_F90" ] && CMK_NATIVE_F90="$CMK_CF90"
[ -z "$CMK_NATIVE_AR" ] && CMK_NATIVE_AR="$CMK_AR"

if [ -r $CHARMINC/conv-mach-opt.sh ]
then
. $CHARMINC/conv-mach-opt.sh
fi

OPTS_CC="$OPTS_CC $USER_OPTS_CC"
OPTS_CXX="$OPTS_CXX $USER_OPTS_CXX"
OPTS_LD="$OPTS_LD $USER_OPTS_LD"
OPTS_LDXX="$OPTS_LDXX $USER_OPTS_LDXX"

if [ -n "$CMK_CC64" ] 
then
  QT=`echo $CMK_QT | sed -e 's/64$//'`
  if test $QT = $CMK_QT
  then
    if echo $CMK_QT | grep '-' > /dev/null 2> /dev/null
    then
      CMK_QT=`echo $CMK_QT | sed -e 's/-/64-/'`
    else
      CMK_QT="${CMK_QT}64"
    fi
  fi
fi

[ -z "$CMK_PIC" ] && CMK_PIC='-fpic'

[ -z "$CMK_SEQ_CC" ] && CMK_SEQ_CC="$CMK_CC"
[ -z "$CMK_SEQ_CXX" ] && CMK_SEQ_CXX="$CMK_CXX"
[ -z "$CMK_SEQ_LD" ] && CMK_SEQ_LD="$CMK_LD"
[ -z "$CMK_SEQ_LDXX" ] && CMK_SEQ_LDXX="$CMK_LDXX"
[ -z "$CMK_SEQ_F90" ] && CMK_SEQ_F90="$CMK_CF90"
[ -z "$CMK_SEQ_AR" ] && CMK_SEQ_AR="$CMK_AR"
[ -z "$CMK_SEQ_RANLIB" ] && CMK_SEQ_RANLIB="$CMK_RANLIB"
[ -z "$CMK_SEQ_LIBS" ] && CMK_SEQ_LIBS="$CMK_NATIVE_LIBS"

[ -z "$CMK_CELL" ] && CMK_CELL=0

# apply incdir and libdir
CMK_CC="$CMK_CC $CMK_INCDIR "
CMK_CXX="$CMK_CXX $CMK_INCDIR "
CMK_CXXPP="$CMK_CXXPP $CMK_INCDIR "
CMK_CPP_C="$CMK_CPP_C $CMK_INCDIR "
CMK_CC_FASTEST="$CMK_CC_FASTEST $CMK_INCDIR "
CMK_CC_RELIABLE="$CMK_CC_RELIABLE $CMK_INCDIR "
CMK_LD="$CMK_LD $CMK_LIBDIR "
CMK_LDXX="$CMK_LDXX $CMK_LIBDIR "

# native compiler skips incdir and libdir at build
# chances are they may be different compilers
#CMK_NATIVE_CC="$CMK_NATIVE_CC $CMK_INCDIR "
#CMK_NATIVE_CXX="$CMK_NATIVE_CXX $CMK_INCDIR "
#CMK_NATIVE_LD="$CMK_NATIVE_LD $CMK_LIBDIR "
#CMK_NATIVE_LDXX="$CMK_NATIVE_LDXX $CMK_LIBDIR "


