set(LIB_NAME lib)
set(LIB_SRC 
    linked_list.c
    version.c)

add_library(${LIB_NAME} STATIC ${LIB_SRC})

target_include_directories(
    ${LIB_NAME}
    PRIVATE
    ${CMAKE_BINARY_DIR}/linux/include/
    ./)
