add_subdirectory(include)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/libglsl)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/glm)
include_directories(include)
include_directories(${EQUALIZER_INCLUDE_DIRS})

set(example01_SOURCES Renderer.cpp Application.cpp main.cpp)

add_executable(example01 ${example01_SOURCES})
target_link_libraries(example01 libglsl ${EQUALIZER_SEQUEL_LIBRARY} ${EQUALIZER_LIBRARIES})
