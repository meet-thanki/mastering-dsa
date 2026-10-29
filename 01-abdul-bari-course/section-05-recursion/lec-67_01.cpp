#include <iostream>
using namespace std;

// C++ Recursion: Taylor Series (with and without Horner's Rule)

double e1(int x, int n); // using definition -> O(n^2)
double e2(int x, int n); // using horner's rule -> O(n)
double e3(int x, int n); // iteratively using loop -> O(n)

int main(){
    int x, n;
    cin >> x;
    cin >> n;
    double res1;
    double res2, res3;
    res1 = e1(x, n);
    res2 = e2(x, n);
    res3 = e3(x, n);
    cout << res1 << "\n" << res2 << "\n" << res3 << "\n";
    return 0;
}

double e1(int x, int n){
    static double p = 1;
    static double f = 1;
    double r;

    if(n==0){
        return 1;
    }

    r = e1(x, n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
}

double e2(int x, int n){
    static double s = 1;
    if(n==0){
        return s;
    }

    else{
        s = 1+ (double)x*s/n;
        return e2(x, n-1);
    }
}

double e3(int x, int n){
    double s = 1;

    for(;n > 0; n--){
        s = 1 + (double)x*s/n;
    }

    return s;
}