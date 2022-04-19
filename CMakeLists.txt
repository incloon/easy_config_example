cmake_minimum_required(VERSION 3.5)
project(easy_config_example VERSION 0.0.1 LANGUAGES CXX)

if(CMAKE_SYSTEM_NAME STREQUAL Linux)
	include(GNUInstallDirs)
endif()

set(EZCFG_STRUCT_HEADER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/str.h)
add_subdirectory(easy_config)
add_executable(easy_config_example  main.cpp)
target_link_libraries(easy_config_example PRIVATE ezcfg::ezcfg)