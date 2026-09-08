#include <iostream>
using namespace std;

// C and C++ Call by value

int add(int a, int b){ 
    // int c;
    // c = a+b;
    // return c
    a++; // modifications in formal parameters are not reflected in actual parameters
    cout << a << "\n";
    return 0;
} // for call by address which modifies the actual parameters, return is not necessary

int main(){
    int num1 = 10;
    int num2 = 15;
    int sum;

    sum = add(num1, num2); // call by value -> used when computation is used to return results
    cout << num1;
    return 0;
}