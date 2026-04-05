cmake_minimum_required(VERSION 3.8)

project(mvp_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 17)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(ament_index_cpp REQUIRED)

find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(geographic_msgs REQUIRED)

find_package(rosidl_default_generators REQUIRED)

file(GLOB MSG_FILES ${CMAKE_CURRENT_SOURCE_DIR}/**/*.msg)
file(GLOB SRV_FILES ${CMAKE_CURRENT_SOURCE_DIR}/**/*.srv)
file(GLOB ACT_FILES ${CMAKE_CURRENT_SOURCE_DIR}/**/*.action)

set(INTERFACE_FILES "")


foreach(I IN ITEMS ${MSG_FILES})
  get_filename_component(ITEM_NAME ${I} NAME)
  list(APPEND INTERFACE_FILES msg/${ITEM_NAME})
endforeach()

foreach(I IN ITEMS ${SRV_FILES})
  get_filename_component(ITEM_NAME ${I} NAME)
  list(APPEND INTERFACE_FILES srv/${ITEM_NAME})
endforeach()

foreach(I IN ITEMS ${ACT_FILES})
  get_filename_component(ITEM_NAME ${I} NAME)
  list(APPEND INTERFACE_FILES action/${ITEM_NAME})
endforeach()

rosidl_generate_interfaces(${PROJECT_NAME}
  ${INTERFACE_FILES}
  DEPENDENCIES
    geometry_msgs
    std_msgs
    action_msgs
    nav_msgs
    geographic_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

# rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")


# # install(DIRECTORY 
# #   msg
# #   srv
# #   # config
# #   DESTINATION share/${PROJECT_NAME}
# # )


# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

# ament_package()