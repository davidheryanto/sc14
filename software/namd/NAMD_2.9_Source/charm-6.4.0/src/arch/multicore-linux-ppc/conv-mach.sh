CMK_DEFS=' -D_REENTRANT '
CMK_CPP_CHARM="/lib/cpp -P"
CMK_CPP_C="gcc -E"
CMK_CC="gcc -fPIC $CMK_DEFS "
CMK_CXX="g++ -fPIC $CMK_DEFS "
CMK_CXXPP="$CMK_CXX -x c++ -E "
CMK_RANLIB="ranlib"
CMK_LIBS="-lckqt -lpthread"
#CMK_LD="$CMK_CC -Wl,--allow-multiple-definition "
#CMK_LDXX="$CMK_CXX -Wl,--allow-multiple-definition "
CMK_LD="$CMK_CC  $CMK_DEFS "
CMK_LDXX="$CMK_CXX  $CMK_DEFS "
CMK_LD_SHARED="-shared"
CMK_LD_LIBRARY_PATH="-Wl,-rpath,$CHARMLIBSO/"
CMK_XIOPTS=""
CMK_QT="linux-smp"

# fortran compiler Absoft or gnu f95
CMK_CF77="g77 "
CMK_F77LIBS="-lg2c "
CMK_CF90=`which xlf90_r 2>/dev/null`
if test -n "$CMK_CF90"
then
# xlf
  bindir=`dirname $CMK_CF90`
  libdir="$bindir/../lib"
  CMK_CF90="$CMK_CF90 -qpic=large -qthreaded -qlanglvl=90std -qwarn64 -qspill=32648 -qsuppress=1513-029:1518-012:1518-059 -qsuffix=f=f90:cpp=F90 "
  CMK_CF90_FIXED="$CMK_CF90 -qsuffix=f=f:cpp=F -qfixed=132 "
  CMK_F90LIBS="-L/opt/ibmcmp/xlf/11.1/bin/../../../xlsmp/1.7/lib -L$libdir -lxl -lxlf90 -lxlfmath -lxlopt -lxlsmp"
  CMK_F90_USE_MODDIR=1
  CMK_F90_MODINC="-I"
else
# gnu f95
  CMK_CF90=`which f95 2>/dev/null`
  if test -n "$CMK_CF90"
  then
    CMK_FPP="/lib/cpp -P -CC"
    CMK_CF90="$CMK_CF90 -fpic -fautomatic -fdollar-ok "
    CMK_CF90_FIXED="$CMK_CF90 -ffixed-form "
    CMK_F90LIBS="-lgfortran "
    CMK_F90_USE_MODDIR=1
    CMK_F90_MODINC="-I"
  fi
fi
