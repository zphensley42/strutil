if(NOT TARGET strutil)
    set(strutil_DIR ${CMAKE_CURRENT_LIST_DIR}/../)
    find_package(strutil REQUIRED)
endif()

add_executable(strutil_exec strutil_exec.cc)
target_include_directories(strutil_exec PUBLIC
        ${strutil_INCLUDE_DIRS}
)
target_link_libraries(strutil_exec PRIVATE ${strutil_LIBRARIES})
