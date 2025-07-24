cmake_minimum_required(VERSION 3.27)

project(QFluentUIPlayground VERSION ${QFluentUI_VERSION} LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
message(STATUS ${CMAKE_PREFIX_PATH})

set(PROJECT_SOURCE main.cpp)

qt_add_executable(${PROJECT_NAME} MANUAL_FINALIZATION ${PROJECT_SOURCE})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
