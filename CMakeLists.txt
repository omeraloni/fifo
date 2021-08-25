cmake_minimum_required(VERSION 3.14.0)
project(fifo VERSION 1.0 LANGUAGES C)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_library(fifo STATIC ${SOURCES})

#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
install(TARGETS fifo DESTINATION /usr/lib)

include(cmake/FetchCMocka.cmake)
#target_link_libraries(fifo PRIVATE cmocka-static)