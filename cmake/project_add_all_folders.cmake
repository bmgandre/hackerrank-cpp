macro(project_add_all_folders)
    list_folders(SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR})
    foreach(subdir ${SUBDIRS})
        add_subdirectory(${subdir})
    endforeach()
endmacro()
