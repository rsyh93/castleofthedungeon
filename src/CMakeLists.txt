set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

#include_directories(${CMAKE_SOURCE_DIR}/game)
#link_directories(${CMAKE_BINARY_DIR}/game)
add_subdirectory(game)

file(GLOB SOURCES "*.cpp")

find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)

link_libraries (
    ${SDL_LIBRARY}
    ${SDLIMAGE_LIBRARY}
    SDLmain
)

add_executable (
    castleofthedungeon
    WIN32
    MACOSX_BUNDLE
    ${SOURCES}
    $<TARGET_OBJECTS:Game>
)

set_target_properties(castleofthedungeon PROPERTIES DEBUG_POSTFIX "_d")
set_target_properties(castleofthedungeon PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

