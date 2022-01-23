cmake_minimum_required(VERSION 3.21)
project(Assignment9)

set(CMAKE_CXX_STANDARD 20)

add_executable(Assignment9 src/main.cpp src/month_factory.cpp src/month.cpp src/months.cpp src/weekday.cpp src/year.cpp)
target_include_directories(Assignment9 PRIVATE src src/include)