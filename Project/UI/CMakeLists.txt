set( TARGET_NAME UI )

add_subdirectory( ApplicationView )
add_subdirectory( WidgetManager )

set( OBJ_FILES
    $<TARGET_OBJECTS:ApplicationView>
    $<TARGET_OBJECTS:WidgetManager>
    )

add_library( ${TARGET_NAME} STATIC ${OBJ_FILES})
