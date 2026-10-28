#include <iostream>
using namespace std;

// C++ Recursion: Tower of Hanoi Problem

// Global Variable Declarations
int A = 1;
int B = 2;
int C = 3; // Integral Values of Towers
int count = 0;

void TOH(int n, int A, int B, int C);

int main(){
    int n;
    cout << "Enter the number of discs for which Tower of Hanoi problem is to be solved: ";
    cin >> n;
    cout << "The step-by-step moves are as follows: \n";
    TOH(n, A, B, C);
    cout << "The minimum steps are: " << count << "\n";
    return 0;
}

void TOH(int n, int A, int B, int C){
    if(n > 0){
        TOH(n-1, A, C, B);
        count++;
        cout << count <<  ". Move disc From " << A << " To " << C << "\n";
        TOH(n-1, B, A, C);
    }
}