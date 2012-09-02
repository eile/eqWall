add_subdirectory(include)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/libglsl)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/glm)
include_directories(include)
include_directories(${EQUALIZER_INCLUDE_DIRS})

set(hello_SOURCES Renderer.cpp Application.cpp main.cpp)

add_executable(hello ${hello_SOURCES})
target_link_libraries(hello libglsl ${EQUALIZER_SEQUEL_LIBRARY} ${EQUALIZER_LIBRARIES})
