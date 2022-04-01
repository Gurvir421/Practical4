#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <vector>


class EfficientTruckLoads {
    public:
    EfficientTruckLoads();
    void print();
    int numTrucks(int numCrates , int loadSize);
    
    std::vector<int> table;
    
};
#endif