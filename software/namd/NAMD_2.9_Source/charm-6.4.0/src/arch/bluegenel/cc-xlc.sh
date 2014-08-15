XLC_PRE=/opt/ibmcmp
XLC_POST=bin/blrts_
CMK_CC="$XLC_PRE/vac/bg/9.0/${XLC_POST}xlc $BGL_INC"
CMK_CXX="$XLC_PRE/vacpp/bg/9.0/${XLC_POST}xlC $BGL_INC"
CMK_LD="$CMK_CC $BGL_LIB"        # -F${HOME}/bgx/vac.base.cfg
CMK_LDXX="$CMK_CXX  $BGL_LIB"    # -F${HOME}/bgx/vac.base.cfg
CMK_C_OPTIMIZE='-O3 -qstrict -Q  '
CMK_CXX_OPTIMIZE='-O3 -qstrict -Q '
CMK_AR='ar cq'
CMK_NM='nm '
CMK_QT="aix"

CMK_NATIVE_CC="xlc"
CMK_NATIVE_CXX="xlC"
CMK_NATIVE_LD="$CMK_NATIVE_CC"
CMK_NATIVE_LDXX="$CMK_NATIVE_CXX"
CMK_RANLIB="ranlib"

XLC_F=$XLC_PRE/xlf/bg/11.1
CMK_CF77="$XLC_F/${XLC_POST}xlf "
CMK_CF90="$XLC_F/${XLC_POST}xlf90 -qsuffix=f=f90"
CMK_CF90_FIXED="$XLC_F/${XLC_POST}xlf90 "
CMK_F90LIBS="-L$XLC_F/blrts_lib -lxlf90 -lxlopt -lxl -lxlfmath"
