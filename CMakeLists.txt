cmake_minimum_required(VERSION 3.28.1)
project(add_pybind11)

set(CMAKE_CXX_STANDARD 14)

# 指定python版本及路径
set(PYTHON_EXECUTABLE "F:\\conda\\envs\\RL\\python.exe")
set(PYTHON_INCLUDE_DIR "F:\\conda\\envs\\RL\\include")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/extern/pybind11)
# 添加源文件
file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/cpp/*.cpp)

pybind11_add_module(add_pybind11 ${SRC_FILES})
