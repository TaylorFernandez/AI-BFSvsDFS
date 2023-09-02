//
// Created by Taylor Fernandez on 9/1/23.
//

#include <string.h>
#include <assert.h>
#include <stdio.h>
#include "NetworkTests.h"
#include "../../Objects/Network.h"

network_t *testNetwork;

void testInit(){
    testNetwork = createNewNetwork();
    assert(testNetwork != NULL);
}

void testLoadNetwork(){
    FILE *fp = fopen("/Users/taylorfernandez/Desktop/AI-BFSvsDFS/Tests/Objects/testNetworkFile.csv", "r");
    loadNetwork(testNetwork, fp);
    printNetwork(testNetwork);
}