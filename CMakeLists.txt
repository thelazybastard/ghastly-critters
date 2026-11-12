cmake_minimum_required(VERSION 3.29)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
project(gc)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_program(MOLD_LINKER mold)

if (MOLD_LINKER)
  set(CMAKE_LINKER_TYPE "MOLD")
endif()

set(RAYLIB_VERSION 6.2)
find_package(raylib ${RAYLIB_VERSION} QUIET)
if (NOT raylib_FOUND) 
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_MakeAvailable(raylib)
  endif()
endif()

set(CMAKE_C_FLAGS )

add_executable(${PROJECT_NAME} 
  src/main.c
)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)





