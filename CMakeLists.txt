cmake_minimum_required(VERSION 3.5)

project(example)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -s -Wall -Wextra")

set(CMAKE_PREFIX_PATH ~/Qt5.12.12/5.12.12/gcc_64/lib/cmake)

find_package(Qt5 COMPONENTS Widgets VirtualKeyboard REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

file(GLOB QT_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${C_SOURCES} ${QT_HEADER})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::VirtualKeyboard)
