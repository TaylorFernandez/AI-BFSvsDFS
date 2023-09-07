//
// Created by Taylor Fernandez on 9/1/23.
//

#include <string.h>
#include <assert.h>
#include <stdio.h>
#include "NetworkTests.h"
#include "../../Code/Objects/Network.h"

network_t *testNetwork;

void testInit(){
    testNetwork = createNewNetwork();
    assert(testNetwork != NULL);
}

void testLoadNetwork() {
    FILE *fp = fopen("/Users/taylorfernandez/Desktop/AI-BFSvsDFS/Tests/Objects/testNetworkFile.csv", "r");
    loadNetwork(testNetwork, fp);
    printf("\n\nPrinting Loaded Network:\n");
    printNetwork(testNetwork);
    printf("\n\n");
    fclose(fp);
}

void testFreeNetwork(){
    freeNetwork(testNetwork);
}