cmake_minimum_required(VERSION 3.16)

project(QFluentUIPlayground VERSION ${QFluentUI_VERSION} LANGUAGES CXX)

aux_source_directory(. PLAYGROUND_SOURCES)
add_executable(QFluentUIPlayground ${PLAYGROUND_SOURCES})
