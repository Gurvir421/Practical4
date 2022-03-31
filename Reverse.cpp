#include <iostream>
#include <math.h>
#include <string>
#include "Reverse.h"

Reverse::Reverse() {
    
}

int Reverse::reverseDigit(int value) {
    value=abs(value);
    if (value==0) {
        return 0;
    }
    int lastvalue=value%10;
    int length=log10(value);
    int range=pow(10,length);

    return (lastvalue*range)+reverseDigit(value/10);
   
}

std::string Reverse::reverseString(std::string letters) {
    int length=letters.length()-1;
    if (length<0) {
        return "";
    }
    std::string nextLetters=letters;
    nextLetters.erase (length,1);
    return letters.back () + reverseString(nextLetters);
}