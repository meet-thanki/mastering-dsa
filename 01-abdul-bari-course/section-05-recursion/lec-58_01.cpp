#include <iostream>
using namespace std;

// C and C++ Indirect Recursion

// function prototype declaration
void funA(int n);
void funB(int n);

int main(){
    int n;
    cin >> n;

    funA(n);
    return 0;
}

void funA(int n){
    if(n>0){
        cout << n << " ";
        funB(n-1);
    }
}
 
void funB(int n){
    if(n>1){
        cout << n << " ";
        funA(n/2);
    }
}