cmake_minimum_required(VERSION 3.17)
project(SFML_GAME_1)

set(CMAKE_CXX_STANDARD 20)

set(SFML_GAME_1_SOURCES
        src/temp.cpp
        src/player.cpp
        src/simple_logic.cpp
        src/physics.cpp)
set(SFML_DIR ${PROJECT_SOURCE_DIR}/lib/sfml/lib/cmake/SFML)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

add_executable(SFML_GAME_1 main.cpp ${SFML_GAME_1_SOURCES})
include_directories(include)
include_directories(${PROJECT_SOURCE_DIR}/lib/sfml/include)
target_link_libraries(SFML_GAME_1 sfml-system sfml-window sfml-graphics)

