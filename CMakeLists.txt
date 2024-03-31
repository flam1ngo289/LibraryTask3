cmake_minimum_required(VERSION 3.22.0)
project(Leaver)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(LeaverDynamicLibrary SHARED DynamicLeaver.h DynamicLeaver.cpp)

add_executable(LeaverExe LeaverApp.cpp)
target_link_libraries(LeaverExe LeaverDynamicLibrary)