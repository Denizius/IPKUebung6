cmake_minimum_required(VERSION 3.1)
project(Plot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(Plot plot.cc pgm.cc)
