file(GLOB GAME "*.cpp")

find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)

add_library(Game OBJECT ${GAME})
set_target_properties(Game PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/game)
set_target_properties(Game PROPERTIES OUTPUT_NAME library${BUILD_POSTFIX})

