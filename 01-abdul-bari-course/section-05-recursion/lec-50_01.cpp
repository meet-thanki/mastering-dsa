#include <iostream>
using namespace std;

// C++ Tail and Head Recursions
// Demonstration: Calling and Returning Phase

// example of a tail function
void fun_t(int n){
    if(n>0){
        printf("%d ", n); 
        fun_t(n-1);
    }
}

// example of a head recursion
void fun_h(int n){
    if(n>0){
        fun_h(n-1);
        printf("%d ", n); // here printf is being executed in returning time
    }
}

int main(){
    int n;
    cin >> n;
    fun_t(n); // understand how this runs in stack using debug
    cout << "\n";
    fun_h(n); // understand how this runs in stack using debug
    return 0;
}