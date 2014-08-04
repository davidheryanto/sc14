CMK_CPP_CHARM="/lib/cpp -P"
CMK_CPP_C="cc -E $CMK_DEFS "
CMK_CXXPP="CC -E $CMK_DEFS "
CMK_CC="cc $CMK_DEFS "
CMK_CXX="CC  $CMK_DEFS "
CMK_LD="$CMK_CC $CMK_LD_DEFS"
CMK_LDXX="$CMK_CXX $CMK_LD_DEFS"
CMK_LIBS="-lckqt -lrca"

CMK_LD_LIBRARY_PATH="-Wl,-rpath,$CHARMLIBSO/"

# compiler for compiling sequential programs
CMK_SEQ_CC="gcc "
CMK_SEQ_LD="gcc "
CMK_SEQ_CXX="g++ "
CMK_SEQ_LDXX="g++ "
CMK_SEQ_LIBS=""

# compiler for native programs
CMK_NATIVE_CC="gcc "
CMK_NATIVE_LD="gcc "
CMK_NATIVE_CXX="g++ "
CMK_NATIVE_LDXX="g++ "
CMK_NATIVE_LIBS=""

CMK_RANLIB="ranlib"
CMK_QT="generic64"

# for F90 compiler
CMK_CF77="ftn "
CMK_CF90="ftn "
CMK_F90LIBS=""
CMK_F90_USE_MODDIR=1
CMK_F90_MODINC="-p"

CMK_NO_BUILD_SHARED=true

