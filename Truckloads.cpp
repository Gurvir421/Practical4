#include <iostream>
#include <math.h>
#include <string>
#include "Truckloads.h"

Truckloads::Truckloads() {
    
}

int Truckloads::numTrucks(int numCrates , int loadSize){
    
    if (numCrates<=loadSize) {
        return 1;
    }
    int value1;
    int value2;
        
    if (numCrates%2==0) {
        value1=numCrates/2;
        value2=value1;
    }
    else {
        value1=(numCrates-1)/2;
        value2=(numCrates+1)/2;
    }
    std::cout << value1 << " " << value2 <<std::endl;
    return numTrucks(value1,loadSize) + numTrucks(value2,loadSize);
}