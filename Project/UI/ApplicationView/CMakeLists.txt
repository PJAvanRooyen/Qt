set( TARGET_NAME ApplicationView )

set( UI
  mainwindow.ui
)

set( HEADERS
  ApplicationView.h
)

set( SOURCES
  ApplicationView.cpp
)

add_library( ${TARGET_NAME} OBJECT ${SOURCES} ${HEADERS} ${UI} )
target_link_libraries( ${TARGET_NAME} Qt5::Core Qt5::Widgets )

