cmake_minimum_required(VERSION 3.22)
project(ManoSync LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_standard_project_setup()

add_executable(ManoSync
        main.cpp
)

target_link_libraries(ManoSync
        PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets
)
