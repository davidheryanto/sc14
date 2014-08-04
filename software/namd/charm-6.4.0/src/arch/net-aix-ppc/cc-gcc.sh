CMK_CPP_C="gcc -E "
CMK_CC="gcc -fPIC "
CMK_LD="gcc -fPIC "
CMK_CXX="g++ -fPIC -Wno-deprecated "
CMK_CXXPP="g++ -E "
CMK_LDXX="g++ -fPIC "

# native compiler for compiling charmxi, etc
CMK_NATIVE_CC="$CMK_CC"
CMK_NATIVE_CXX="$CMK_CXX"
CMK_NATIVE_LD="$CMK_CC"
CMK_NATIVE_LDXX="$CMK_CXX"

# native compiler for compiling charmxi, etc
CMK_SEQ_CC="$CMK_CC"
CMK_SEQ_CXX="$CMK_CXX"
CMK_SEQ_LD="$CMK_CC"
CMK_SEQ_LDXX="$CMK_CXX"

# remove -lhC
CMK_LIBS='-lckqt '
CMK_F90LIBS='-lxlf90_r '

CMK_LD_SHARED='-shared -Wl,-G'

CMK_QT='aix32-gcc'

