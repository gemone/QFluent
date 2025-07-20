cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

# Default use Debug build type if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  message(STATUS
  "Setting build type to '${CMAKE_BUILD_TYPE}' as none was specified.")
endif()

set(QFluentUI_VERSION 0.0.1)
project(QFluentUI_SLN VERSION ${QFluentUI_VERSION})

add_subdirectory(src)

option(BUILD_GALLERY "Build the QFluentUI Gallery" ON)

if(BUILD_GALLERY)
  add_subdirectory(gallery)
endif()

# development playground
option(BUILD_PLAYGROUND "Build the QFluentUI Playground" OFF)
if(BUILD_PLAYGROUND)
  add_subdirectory(playground)
endif()

# Adding tests
option(BUILD_TESTS "Build the QFluentUI tests" OFF)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  set(BUILD_TESTS ON CACHE BOOL "Build the QFluentUI tests" FORCE)
endif()

if(BUILD_TESTS)
  include(CTest)
  list(APPEND VCPKG_MANIFEST_FEATURES "tests")
  add_subdirectory(tests)
endif()
