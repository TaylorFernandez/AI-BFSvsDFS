cmake_minimum_required(VERSION 3.26)
project(AI_BFSvsDFS C)

set(CMAKE_C_STANDARD 11)

add_executable(AI_BFSvsDFS
        main.c
        Code/ObjectHandlers/FileManager.c
        Code/ObjectHandlers/FileManager.h
        Code/Objects/Network.c
        Code/Objects/Network.h
        Code/Objects/Node.c
        Code/Objects/Node.h
        "Tests/Objects/NodeTests.c"
        Tests/RunTests.c
        Tests/RunTests.h
        "Tests/Objects/NodeTests.h"
        Code/ObjectHandlers/StringManager.c
        Code/ObjectHandlers/StringManager.h
        Tests/ObjectHandlers/StringManagerTests.c
        Tests/ObjectHandlers/StringManagerTests.h
        Tests/ObjectHandlers/FileManagerTests.c
        Tests/ObjectHandlers/FileManagerTests.h
        Tests/Objects/NetworkTests.c
        Tests/Objects/NetworkTests.h
        Code/Algorithms/BFS.c
        Code/Algorithms/BFS.h
        Code/Objects/Stack.c
        Code/Objects/Stack.h
        Code/Objects/Queue.c
        Code/Objects/Queue.h
        Tests/Objects/StackTests.c
        Tests/Objects/StackTests.h
        Tests/Objects/testQueue.c
        Tests/Objects/testQueue.h)
