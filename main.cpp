#include "city.h"
#include "algorithms.h"
#include <iostream>
#include <deque>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[])
{
    srand(time(0));  
    
    if (argc == 3)
    {
        tsp test(argv[1], argv[2], "", "");              // read in command line input
        test.nearest_neighbor_fast();        // run nearest neighbor function
    }
    else if (argc == 5)     
    {
        cout << "im here" << endl;
        tsp test(argv[1], argv[2], argv[3], argv[4]);              // read in command line input
        test.nearest_neighbor_fast_based(); 
    }
    return 0;
}
