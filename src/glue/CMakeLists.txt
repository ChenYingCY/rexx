#rexx glue module CmakeLists.txt -- librexx_glue.a

set(LIB_REXX_GLUE rexx_glue)

#Automatically get src files from the specified directory
aux_source_directory(${REXX_SRC_DIR}/glue/ GLUE_SRC)

#Generate static library files
add_library(${LIB_REXX_GLUE} ${GLUE_SRC})

#Specify compiling options for target objects
target_compile_options(${LIB_REXX_GLUE}
    PUBLIC -std=c++11 
    PUBLIC -DASIO_STANDALONE
    PUBLIC -D_WEBSOCKETPP_CPP11_STL_
    PUBLIC -D${OS_NAME}
)
