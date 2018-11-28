cmake_minimum_required(VERSION 2.8.11)
project(smtp)

add_definitions(-std=c++11)

FIND_PACKAGE(CURL)

file(GLOB CXX_FILES *.cpp)
file(GLOB HEAD_FILES *.hpp)

ADD_EXECUTABLE(${PROJECT_NAME} ${CXX_FILES})
target_link_libraries(${PROJECT_NAME} ${CURL_LIBRARIES})

