
add_executable(cchat client.c cchat.c)
target_include_directories(cchat PUBLIC include ${IOCOLORS_INCLUDE_DIR})
target_link_libraries(cchat iocolors.lib)

add_executable(cchatd server.c cchat.c)
target_include_directories(cchatd PUBLIC include ${IOCOLORS_INCLUDE_DIR})
target_link_libraries(cchatd iocolors.lib)