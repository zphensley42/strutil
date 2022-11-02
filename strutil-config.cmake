set(STRUTILHDRS ${CMAKE_CURRENT_LIST_DIR}/include)

add_library(strutil)
target_sources(strutil PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/strutil.cc
)
target_include_directories(strutil PUBLIC
        ${STRUTILHDRS}
)

set(strutil_INCLUDE_DIRS ${STRUTILHDRS})
set(strutil_LIBRARIES strutil)
