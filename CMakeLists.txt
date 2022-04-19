cmake_minimum_required(VERSION 3.21)
project(POO2022_StrategyExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(POO2022_StrategyExample
        src/main.cpp src/repo/IRepo.h src/repo/RepoInMemory.cpp src/repo/RepoInMemory.h src/repo/RepoInFile.cpp src/repo/RepoInFile.h)
