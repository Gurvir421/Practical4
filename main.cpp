#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;
int main() {
    Reverse R;
    Truckloads T;
    cout <<R.reverseDigit(12) <<endl;
    
    cout << R.reverseString("abc") <<endl;
        cout << R.reverseString("") <<endl;

    
    cout << T.numTrucks(10,0) <<endl;

    vector<int> table;
    table.push_back(1);
    
    cout <<table.size() <<endl;
    
    return 0;
}