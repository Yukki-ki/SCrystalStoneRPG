cmake_minimum_required (VERSION 3.8)

if(POLICY CMP0069) # Allow CMAKE_INTERPROCEDURAL_OPTIMIZATION (lto) to be set
    cmake_policy(SET CMP0069 NEW)
    set(CMAKE_POLICY_DEFAULT_CMP0069 NEW)
endif()

if(POLICY CMP0079) # Allow linking subprojects against each other
    cmake_policy(SET CMP0079 NEW)
    set(CMAKE_POLICY_DEFAULT_CMP0079 NEW)
endif()

project ("SCrystalStoneRPG" LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE FALSE)

add_executable (SCrystalStoneRPG
    "main.cpp"
    "game.cpp"
    "game.h"
    "constants.h"
    "console.h"
    "console.cpp"
    "scenes.cpp"
    "scenes.h"
)
