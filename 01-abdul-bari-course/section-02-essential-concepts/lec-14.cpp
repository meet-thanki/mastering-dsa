#include <iostream>
using namespace std;

// C and C++ Functions

// We define functions to reduce the load from the main function
int add(int a, int b){ // formal parameters. The values of actual parameters are copied in formal parameters.
    int c;
    c = a+b;
    return c; // return is must as return datatype has been defined to be int
}

int main(){
    int num1 = 9;
    int num2 = 8;
    int sum;

    sum = add(num1, num2); // actual parameters
    cout << "Sum is: " << sum << "\n";
}