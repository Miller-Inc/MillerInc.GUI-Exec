cmake_minimum_required(VERSION 3.29)
project(MillerInc_GUI_Exec)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libs/MillerInc.GUI-Library)

add_executable(MillerInc_GUI_Exec main.cpp)

target_link_libraries(MillerInc_GUI_Exec MillerInc_GUI_Library)
