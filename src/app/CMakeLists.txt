set(APP_NAME adt)
set(APP_SRC adt.c)

add_executable(${APP_NAME} ${APP_SRC})

target_include_directories(
    ${APP_NAME}
    PRIVATE
    ./)

target_link_libraries(
    ${APP_NAME}
    PRIVATE
    lib)

