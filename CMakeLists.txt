cmake_minimum_required(VERSION 3.15)
project(adpss_testadpssmodel260402 C)

set(MODEL_DIR ${CMAKE_SOURCE_DIR}/testadpssmodel260402_ert_shrlib_rtw)

add_library(adpss_testadpssmodel260402 SHARED
    adpss_wrapper.c
    ${MODEL_DIR}/testadpssmodel260402.c
)

target_include_directories(adpss_testadpssmodel260402 PRIVATE
    ${MODEL_DIR}
)

target_compile_definitions(adpss_testadpssmodel260402 PRIVATE
    _WINDOWS
    _DLLAPI
    UNICODE
    _UNICODE
    MODEL=testadpssmodel260402
    NUMST=1
    NCSTATES=0
    CLASSIC_INTERFACE=0
    ALLOCATIONFCN=0
    TERMFCN=1
    ONESTEPFCN=1
    MAT_FILE=0
    MULTI_INSTANCE_CODE=0
    INTEGER_CODE=0
    MT=0
    TID01EQ=0
)

# Static link MinGW runtime (only when building locally with MinGW)
if(MINGW)
    target_link_options(adpss_testadpssmodel260402 PRIVATE -static-libgcc -static)
endif()

set_target_properties(adpss_testadpssmodel260402 PROPERTIES
    PREFIX ""
    OUTPUT_NAME "adpss_testadpssmodel260402"
)
