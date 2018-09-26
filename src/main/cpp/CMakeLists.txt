cmake_minimum_required(VERSION 3.4.1)

# build application's shared lib
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_library(hello-jni SHARED
            hello-jni.cpp)

target_link_libraries(hello-jni
                      android
                      log)
