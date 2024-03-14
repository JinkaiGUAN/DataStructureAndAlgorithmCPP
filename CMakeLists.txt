cmake_minimum_required(VERSION 3.26)
project(DataStructureAndAlgorithmCPP)

set(CMAKE_CXX_STANDARD 14)

file(GLOB CPP_SOURCE_FILES *.cpp)
foreach (CPP_FILE ${CPP_SOURCE_FILES})
    get_filename_component(EXECUTABLE_NAME ${CPP_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${CPP_FILE})
endforeach (CPP_FILE ${CPP_SOURCE_FILES})
