project(ZabbixSender)
cmake_minimum_required(VERSION 2.8)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing -Wno-narrowing -fpermissive ")

find_package( Boost COMPONENTS system thread filesystem regex system signals date_time REQUIRED )
link_directories( ${Boost_LIBRARY_DIRS} )
include_directories( ${Boost_INCLUDE_DIRS} )
include_directories( ./ )

set(SOURCE_FILES
        main.cpp
        zbxsender.cpp
     )


add_executable(ZabbixSender ${SOURCE_FILES})
target_link_libraries(ZabbixSender ${Boost_LIBRARIES} pthread)
