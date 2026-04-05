# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_world_of_stonefish_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED world_of_stonefish_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(world_of_stonefish_FOUND FALSE)
  elseif(NOT world_of_stonefish_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(world_of_stonefish_FOUND FALSE)
  endif()
  return()
endif()
set(_world_of_stonefish_CONFIG_INCLUDED TRUE)

# output package information
if(NOT world_of_stonefish_FIND_QUIETLY)
  message(STATUS "Found world_of_stonefish: 0.0.0 (${world_of_stonefish_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'world_of_stonefish' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${world_of_stonefish_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(world_of_stonefish_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${world_of_stonefish_DIR}/${_extra}")
endforeach()
