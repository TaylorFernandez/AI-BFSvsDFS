How to Use:
You'll have to run this program using CLion
First, open the project and let it do its thing
Next, click the play button (I am writing this on Mac OS so there might be errors when compiling if you're on any other platform)
The first thing you'll be prompted for is whether you want to run tests or not. Input 'Y' if you'd like it to run tests and input 'N' if you want to run the program.
When prompted for a file name, you'll have to right click on the BFS_DFS.csv file and copy the absolute path. Once its copied, just paste it into the terminal.
The program will output each node and the nodes it connected to(mainly used to debug filling the network)
Once the network is loaded, you'll be prompted to input the number for the starting node and the target node. Once this is input, the program will search for a path from the starting node to the target node using BFS. 
At this point, I've realized I messed up choosing to do this in C and have officially given up on this assignment so in order to save you some time, there is no implementation of DFS and Mac OS doesn't have a valgrind type of application so I'm sure there are memory leaks everywhere in the search algorithm (I was able to test everywhere but in the BFS function). 