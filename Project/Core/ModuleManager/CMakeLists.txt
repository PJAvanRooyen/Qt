set( TARGET_NAME ModuleManager )

set( HEADERS
  ModuleManager.h
)

set( SOURCES
  ModuleManager.cpp
)

# needed to find WidgetManager
include_directories( ../.. )
#include_directories( . ../.. ../../.. ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

add_library( ${TARGET_NAME} OBJECT ${SOURCES} ${HEADERS} )
target_link_libraries( ${TARGET_NAME} Qt5::Core )


