cmake_minimum_required(VERSION 3.5)

project(thesaurus_qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(MODEL_SRC
    src/model/lit_entry.h
    src/model/lit_entry.cpp
    src/model/lit_entries_repository.h
    src/model/lit_entries_repository.cpp
    src/model/article.h
    src/model/article.cpp
)

set(DB_ACCESS_SRC
    src/db/abstract_repository.h
)

set(UI_SRC
    src/ui/main_window.cpp
    src/ui/main_window.h
    src/ui/main_window.ui
    src/ui/entry_view_model.cpp
    src/ui/entry_view_model.h
)

add_executable(thesaurus_qt
    src/main.cpp
    ${DB_ACCESS_SRC}
    ${MODEL_SRC}
    ${UI_SRC}
)

target_link_libraries(thesaurus_qt PRIVATE Qt5::Widgets)
