COMMENT="This configure assumes using native compiler (i.e. compile directly on a BG/L instead of using cross compiler)"

CMK_CPP_CHARM="cpp -P "
CMK_CPP_C="cpp -E "
CMK_CC=mpcc
CMK_CXX=mpCC
CMK_CXXPP="mpCC -E"
CMK_C_OPTIMIZE='-g -O -qmaxmem=-1 -qarch=440  -Q  '
CMK_CXX_OPTIMIZE='-g -O -qmaxmem=-1 -qarch=440  -Q '
CMK_CF77=mpxlf
CMK_CF90=mpxlf90
CMK_LD="$CMK_CC "
CMK_LDXX="$CMK_CXX "
CMK_LIBS='-lckqt'
CMK_LD_LIBRARY_PATH=""
CMK_NATIVE_CC='gcc '
CMK_NATIVE_LD='gcc '
CMK_NATIVE_CXX='g++ -Wno-deprecated '
CMK_NATIVE_LDXX='g++'
CMK_F90LIBS=' '
CMK_RANLIB=ranlib
CMK_AR="ar rv"
CMK_QT="aix"
