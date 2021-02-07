set( TARGET_NAME ApplicationController )

set( HEADERS
  ApplicationController.h
)

set( SOURCES
  ApplicationController.cpp
)

include_directories( ../.. )

add_library( ${TARGET_NAME} OBJECT ${SOURCES} ${HEADERS} )
target_link_libraries( ${TARGET_NAME} Qt5::Core Qt5::Widgets)
