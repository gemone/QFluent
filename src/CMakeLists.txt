cmake_minimum_required(VERSION 3.27)

project(QFluentUI VERSION ${QFluentUI_VERSION} LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core)
message(STATUS ${CMAKE_PREFIX_PATH})

qt_standard_project_setup(REQUIRES ${QT_VERSION_MAJOR})
