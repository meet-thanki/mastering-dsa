#include <iostream>
using namespace std;

// C++ Recursion: Fibonacci series - Memoisation

int fib(int n);
int fibonacci(int n);
int memoisation_fibonacci(int n);

int F[100] = {-1};

int main(){
    int n, result1, result2, result3;
    cin >> n;
    result1 = fib(n);
    result2 = fibonacci(n);
    result3 = memoisation_fibonacci(n);
    cout << "The fibonacci series (fib) term " << n << " is: " <<  result1 << "\n";
    cout << "The fibonacci series (fibonacci) term " << n << " is: " <<  result1 << "\n";
    cout << "The fibonacci series (memoisation_fibonacci) term " << n << " is: " <<  result1 << "\n";
    return 0;
}
 // Iterative function -> Time complexity is O(n)
int fib(int n){
    int t0 = 0;
    int t1 = 1;
    int result;

    if(n <= 1) return n;

    for(int i = 2; i < n; i++){
        result = t0 + t1;
        t0 = t1;
        t1 = result;
    }
    return result;
}

// Excessive Recursion: It makes multiple recursive calls for the same value -> O(2^n) time complexity
int fibonacci(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// Using memoisation, the time complexity reduces to O(n), as the calls are not made when its value is already stored in array F.
int memoisation_fibonacci(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }

    else{
        if(F[n-1] == -1){
            F[n-1] = memoisation_fibonacci(n-1);
        }

        if(F[n-2] == -1){
            F[n-2] = memoisation_fibonacci(n-2);
        }

        return F[n-1] + F[n-2];
    }
}