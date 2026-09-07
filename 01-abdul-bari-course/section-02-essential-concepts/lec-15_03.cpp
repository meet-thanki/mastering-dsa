#include <iostream>
using namespace std;

// 3. Call by reference

void swap(int &x, int &y){ // formal parameters passed as reference variables
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(a, b); // actual parameters are changed as formal parameters act as alias for actual parameters, thus occupying same memory address.
    cout << "a is: " << a << "\n" << "b is: " << b;
    return 0;
}