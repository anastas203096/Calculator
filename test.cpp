#include "iostream"
#include "Calculator.h"
#define CATCH_CONFIG_MAIN




bool unitTest() {
    Calculator c;

   std::cout << "-Check sum " << std::endl;
        if (c.Calculate(10, '+', 10) != 20) return false;
   std::cout << "-Check substraction " << std::endl;
        if (c.Calculate(10, '-', 10) != 0) return false;
   std:cout << "-Check multiplying " << std::endl;
        if (c.Calculate(10, '*', 10) != 100) return false;
    std::cout << "-Check division " << std::endl;
        if (c.Calculate(10, '/', 10) != 1) return false;
    return true;
}

int main(){
    unitTest();
    return 0;
}    
