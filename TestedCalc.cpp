#include <iostream>
#include "Calculator.h"

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

int main()
{
    bool test = false;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
 cout << "Testing calculator..." << endl;
    Calculator c;

    cout << "Testing calculator..." << endl;

    test = unitTest();

    if (!test) {
        cout << "Tests failed...Quit" << endl;
        return 0;
    };
   
    cout << "Tests passed...OK" << endl;

    cout << "Enter expression in one of the following formats: a+b | a-b | a*b | a/b" << endl;

    
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 \a" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }

    return 0;
}
