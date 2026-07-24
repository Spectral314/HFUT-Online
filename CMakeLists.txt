cmake_minimum_required(VERSION 3.14)

project(raygame C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)       # C++标准，按需改成11/14/17/20
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    raylib
    URL "${CMAKE_SOURCE_DIR}/raylib-6.0.tar.gz"
    DOWNLOAD_EXTRACT_TIMESTAMP True
)
FetchContent_MakeAvailable(raylib)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_executable(main main.cpp src/core/game.cpp src/scene/scene.cpp src/entity/character.cpp src/entity/player.cpp)

target_link_libraries(main raylib)

target_include_directories(main PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${raylib_SOURCE_DIR}/src"
    "${raylib_SOURCE_DIR}/extras"
)

if (EMSCRIPTEN)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lidbfs.js -s USE_GLFW=3 --shell-file ${CMAKE_CURRENT_LIST_DIR}/web/minshell.html")
    set(CMAKE_EXECUTABLE_SUFFIX ".html")
endif ()