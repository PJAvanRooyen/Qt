set( TARGET_NAME Core )

add_subdirectory( ApplicationController )
add_subdirectory( ModuleManager )

set( OBJ_FILES
    $<TARGET_OBJECTS:ApplicationController>
    $<TARGET_OBJECTS:ModuleManager>
    )

add_library( ${TARGET_NAME} STATIC ${OBJ_FILES})
