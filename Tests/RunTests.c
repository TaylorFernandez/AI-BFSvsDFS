//
// Created by Taylor Fernandez on 9/1/23.
//
#include <stdio.h>
#include "/Users/taylorfernandez/Desktop/AI-BFSvsDFS/Tests/Objects/NodeTests.h"
#include "ObjectHandlers/StringManagerTests.h"
#include "ObjectHandlers/FileManagerTests.h"
#include "Objects/NetworkTests.h"

void RunAllTests(){
    testNodeInit();
    testNodeFill();
    testPrintNode();
    testStringSplitting();
    testLoadFile("/Users/taylorfernandez/Desktop/AI-BFSvsDFS/Tests/ObjectHandlers/testFile");
    testCountLines();
    testCountValuesInArray();
    testInit();
    testLoadNetwork();
}