#include <iostream>
using namespace std;

// C++ Recursion: Finding Power 

int pow1(int m, int n);
int pow2(int m, int n);
int pow3(int m, int n);

int main(){
    int power1, power2, power3;
    power1 = pow1(2, 9);
    power2 = pow2(2, 9);
    power3 = pow3(2, 9);
    cout << power1 << "\n";
    cout << power2 << "\n";
    cout << power3 << "\n";
    return 0;
}

// more no. of multiplications: total 9
int pow1(int m, int n){
    if(n > 0){
        return m*pow1(m, n-1);
    }

    else{
        return 1;
    }
}

// lesser no. of multiplications involved here: total 6
int pow2(int m, int n){
    if(n == 0){
        return 1;
    }

    else if(n%2 == 0){
        return pow2(m*m, n/2);
    }

    else{
        return m*pow2(m*m, (n-1)/2);
    }
}

// using for loop
int pow3(int m, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result = result*m;
    }
    return result;
}