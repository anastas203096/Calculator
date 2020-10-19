#include "iostream"
#include "Calculator.h"
#define CATCH_CONFIG_MAIN

using namespace std;


bool unitTest() {
    Calculator c;

    cout << "-Check sum " << endl;
        if (c.Calculate(10, '+', 10) != 20) return false;
   cout << "-Check substraction " << endl;
        if (c.Calculate(10, '-', 10) != 0) return false;
  cout << "-Check multiplying " << endl;
        if (c.Calculate(10, '*', 10) != 100) return false;
    cout << "-Check division " << endl;
        if (c.Calculate(10, '/', 10) != 1) return false;
    return true;
}

int main(){
    unitTest();
    return 0;
}    
