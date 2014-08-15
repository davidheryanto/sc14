COMMENT="Enable 64-bit mode (-q64)"
if [ "$OBJECT_MODE" != "64" ]
then
        echo "WARNING: Charm built in 64-bit mode, but OBJECT_MODE=$OBJECT_MODE"
fi

CMK_CC='mpcc_r -q64 -qcpluscmt -qhalt=e '
CMK_CXX='mpCC_r -q64 -qhalt=e '
CMK_LD="mpcc_r -q64 -brtl"
CMK_LDXX="mpCC_r -q64 -brtl"
CMK_NATIVE_CC='xlc_r -q64'
CMK_NATIVE_LD='xlc_r -q64'
CMK_NATIVE_CXX='xlC_r -q64'
CMK_NATIVE_LDXX='xlC_r -q64'
CMK_SEQ_CC='xlc_r -q64'
CMK_SEQ_LD='xlc_r -q64'
CMK_SEQ_CXX='xlC_r -q64'
CMK_SEQ_LDXX='xlC_r -q64'
CMK_CF77='mpxlf_r -q64 '
CMK_CF90='mpxlf90_r -q64 -qsuffix=f=f90' 
CMK_CF90_FIXED='mpxlf90_r -q64 ' 
CMK_AR='ar -X 64 cq'
CMK_QT='aix64'
CMK_NM='nm -X 64'
