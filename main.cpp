#include <iostream>
#include <math.h>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;
int main() {
    Reverse R;
    Truckloads T;
    cout <<R.reverseDigit(12) <<endl;
    
    cout << R.reverseString("abc") <<endl;
    
    cout << T.numTrucks(10,2) <<endl;
    return 0;
}