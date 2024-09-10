#include <iostream>
// add the file with class declaration
#include "calculator.h"

using namespace std;

// functions
int calculator::add(int a, int b) {
    return a+b;
}
int calculator::subtract(int a, int b) {
    return a-b;
}
double calculator::divide(int a, int b) {
    // check the division by 0
    if (b != 0) {
        return (double) a/b;
    } else {
        cout << "Division by 0 is not possible.";
        return 0; //need to return as its not a non-void functino (error handling)
    }
}
int calculator::multiply(int a, int b) {
    return a*b;
}

//write the concole operation
int main() {
    calculator calc;
    int a,b;
    // char variable for operation storing
    char op;

    cout << "Welcome to simple c++ calculator!\n" << "Here you can: add (+), substract(-), divide (/), and multiply(*) integer numbers!\n";

    // get the values and operation from user
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter an operation you want to perform: ";
    cin >> op;
    cout << "Enter second value: ";
    cin >> b;
    cout << "Result: ";

    switch (op) {
        case '+':
            cout << calc.add(a,b) << "\n";
            break;
        case '-':
            cout << calc.subtract(a,b) << "\n";
            break;
        case '*':
            cout << calc.multiply(a,b) << "\n";
            break;
        case '/':
            cout << calc.divide(a,b) << "\n";           
            break;
        default:
                cout << "Invalid operation.";
    }
    return 0;
}