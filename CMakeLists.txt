cmake_minimum_required(VERSION 3.26)
project(AI_BFSvsDFS C)

set(CMAKE_C_STANDARD 11)

add_executable(AI_BFSvsDFS
        main.c
        ObjectHandlers/FileManager.c
        ObjectHandlers/FileManager.h
        Objects/Network.c
        Objects/Network.h
        Objects/Node.c
        Objects/Node.h)
