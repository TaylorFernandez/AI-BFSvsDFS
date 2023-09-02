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
        Objects/Node.h
        "Tests/Objects/NodeTests.c"
        Tests/RunTests.c
        Tests/RunTests.h
        "Tests/Objects/NodeTests.h"
        ObjectHandlers/StringManager.c
        ObjectHandlers/StringManager.h
        Tests/ObjectHandlers/StringManagerTests.c
        Tests/ObjectHandlers/StringManagerTests.h
        Tests/ObjectHandlers/FileManagerTests.c
        Tests/ObjectHandlers/FileManagerTests.h
        Tests/Objects/NetworkTests.c
        Tests/Objects/NetworkTests.h)
