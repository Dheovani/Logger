project(Logger)

set(CMAKE_CXX_STANDARD 20)
set(SOURCES Main.cpp Logger.h Logger.cpp)

add_executable(Logger ${SOURCES})
