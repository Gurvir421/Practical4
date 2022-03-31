#include <iostream>
#include <math.h>
#include <string>
#include "Reverse.h"

using namespace std;
int main() {
    Reverse R;

    cout <<R.reverseDigit(123) <<endl;
    
    cout << R.reverseString("abc") <<endl;
    
    return 0;
}