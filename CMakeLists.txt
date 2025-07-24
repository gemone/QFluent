cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

# Default use Debug build type if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  message(STATUS
  "Setting build type to '${CMAKE_BUILD_TYPE}' as none was specified.")
endif()

option(BUILD_GALLERY "Build the QFluentUI Gallery" ON)
option(BUILD_PLAYGROUND "Build the QFluentUI Playground" OFF)
option(BUILD_TESTS "Build the QFluentUI tests" OFF)

set(QFluentUI_VERSION 0.0.1)
project(QFluentUI_SLN VERSION ${QFluentUI_VERSION})

add_subdirectory(src)

if(BUILD_GALLERY)
  add_subdirectory(gallery)
endif()

# development playground
if(BUILD_PLAYGROUND)
  add_subdirectory(playground)
endif()

# Adding tests
if(BUILD_TESTS)
  include(CTest)
  add_subdirectory(tests)
endif()
