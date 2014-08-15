PMI_CFLAGS=`pkg-config --cflags cray-pmi`
PMI_LIBS=`pkg-config --libs cray-pmi`
UGNI_CFLAGS=`pkg-config --cflags cray-ugni`
UGNI_LIBS=`pkg-config --libs cray-ugni`

PGCC=`CC -V 2>&1 | grep pgCC`
ICPC=`CC -V 2>&1 | grep Intel`

CMK_CPP_CHARM='/lib/cpp -P'
CMK_CPP_C="cc -E"
CMK_CC="cc $PMI_CFLAGS $UGNI_CFLAGS "
CMK_CXX="CC $PMI_CFLAGS $UGNI_CFLAGS"
CMK_CXXPP="$CMK_CXX -x c++ -E  "
CMK_LD="eval $CMK_CC "
CMK_LIBS='-lckqt'
CMK_LD_LIBRARY_PATH="-rpath $CHARMLIBSO/ $PMI_LIBS $UGNI_LIBS"

CMK_QT="generic64"

# compiler for compiling sequential programs
if test -n "$PGCC"
then
CMK_CC="$CMK_CC -DCMK_FIND_FIRST_OF_PREDICATE=1 "
CMK_CXX="$CMK_CXX -DCMK_FIND_FIRST_OF_PREDICATE=1 "
# gcc is needed for building QT
CMK_SEQ_CC="gcc "
CMK_SEQ_CXX="pgCC "
elif test -n "$ICPC"
then
CMK_SEQ_CC="icc -fPIC "
CMK_SEQ_CXX="icpc -fPIC "
else
CMK_SEQ_CC="gcc "
CMK_SEQ_CXX="g++ "
fi
CMK_SEQ_LD="$CMK_SEQ_CC "
CMK_SEQ_LDXX="$CMK_SEQ_CXX "
CMK_SEQ_LIBS=""

# compiler for native programs
CMK_NATIVE_CC="gcc "
CMK_NATIVE_LD="gcc "
CMK_NATIVE_CXX="g++ "
CMK_NATIVE_LDXX="g++ "
CMK_NATIVE_LIBS=""

CMK_RANLIB="ranlib"

# for F90 compiler
CMK_CF77="ftn "
CMK_CF90="ftn "
CMK_F90LIBS=""
CMK_F90_USE_MODDIR=1
CMK_F90_MODINC="-I"
CMK_MOD_EXT="mod"

. $CHARMINC/conv-mach-pxshm.sh
