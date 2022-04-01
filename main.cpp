#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

using namespace std;
int main() {
    
    Reverse R;
    TruckLoads T;
    //cout <<R.reverseDigit(12) <<endl;
    //cout << R.reverseString("abc") <<endl;
    cout << T.numTrucks(18,4) <<endl;

    EfficientTruckLoads E;
    
    cout << E.numTrucks(18,4) <<endl;
    //cout<<endl;
    //.print();
    return 0;
}