#include <iostream>
using namespace std;

// C++ Tree Recursion

void fun(int n){
    if(n>0){
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    fun(n);
    return 0;
}