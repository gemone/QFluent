cmake_minimum_required(VERSION 3.16)

project(QFluentUI VERSION ${QFluentUI_VERSION} LANGUAGES CXX)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
message(STATUS "Using Qt ${QT_VERSION_MAJOR}.")
qt_standard_project_setup(REQUIRES ${QT_VERSION_MAJOR})
