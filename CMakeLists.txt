# Copyright (c) 2022 Virtuous. All rights reserved.
# Use of this source code is governed by a MIT License that can be found in the LICENSE.md file. 

cmake_minimum_required(VERSION 3.5)
project(levelgd)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 

# C++ standard can be overridden when this is used as a sub-project.
if(NOT CMAKE_CXX_STANDARD)
  # This project requires C++11.
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif(NOT CMAKE_CXX_STANDARD)

set (PROJECT_SOURCE 
  # C++ Source files.
  gd/geodesic_dome_application.cc
  gd/geodesic_dome_icosahedron.cc 
  gd/geodesic_dome_logger.cc 
  gd/geodesic_dome_main.cc
  gd/geodesic_dome_manager.cc 
  gd/geodesic_dome_subdivision.cc 
  gd/geodesic_dome_trace.cc

  # Header Source files.
  gd/geodesic_dome_application.h
  gd/geodesic_dome_icosahedron.h
  gd/geodesic_dome_logger.h 
  gd/geodesic_dome_manager.h 
  gd/geodesic_dome_subdivision.h 
  gd/geodesic_dome_trace.h
)

add_executable(gd ${PROJECT_SOURCE})

target_include_directories (gd 
 PRIVATE 
  ${PROJECT_SOURCE_DIR}/
)

target_precompile_headers(gd PRIVATE gd/precompiled_headers.h)