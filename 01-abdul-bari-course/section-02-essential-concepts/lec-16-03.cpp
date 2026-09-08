#include <iostream>
using namespace std;

void swap(int &x, int &y){ // one of them could be a reference and other one not as well. others could be call by address or call by value too.
    int temp;
    temp = x;
    x = y;
    y = temp;
} // compiler could be converted to inline functions, or could convert to pointers

int main(){
    int num1, num2;
    num1 = 10;
    num2 = 15;
    swap(num1, num2);

    cout << num1 << "\n";
    cout << num2;

    return 0;
}