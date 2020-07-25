cmake_minimum_required(VERSION 3.5)

project(thesaurus_qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)


add_executable(thesaurus_qt
    src/main.cpp
    src/ui/main_window.cpp
    src/ui/main_window.h
    src/ui/main_window.ui
)

target_link_libraries(thesaurus_qt PRIVATE Qt5::Widgets)
