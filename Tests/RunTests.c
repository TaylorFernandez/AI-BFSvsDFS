//
// Created by Taylor Fernandez on 9/1/23.
//
#include <stdio.h>
#include "../Tests/Objects/NodeTests.h"
#include "ObjectHandlers/StringManagerTests.h"
#include "ObjectHandlers/FileManagerTests.h"
#include "Objects/NetworkTests.h"

void RunAllTests(){
    testNodeInit();
    testNodeFill();
    testPrintNode();
    testFreeNode();
    testStringSplitting();
    testLoadFile("../Tests/ObjectHandlers/testFile");
    testCountLines();
    testCountValuesInArray();
    testInit();
    testLoadNetwork();
    testFreeNetwork();
}