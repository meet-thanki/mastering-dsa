#include <iostream>
using namespace std;

double sine(double x, int n);
double cosine(double x, int n);
double ln(double x, int n);

int main(){
    double x;
    int n;
    double res1, res2, res3;
    cin >> x;
    cin >> n;
    res1 = sine(x, n);
    res2 = cosine(x, n);
    res3 = res1/res2;

    cout << "sin(" << x << ") = "<< res1 << "\n";
    cout << "cos(" << x << ") = "<< res2 << "\n";
    cout << "tan(" << x << ") = "<< res3 << "\n";

    if( x > 0){
        double res4 = ln(x, n);
        cout << "ln(" << x << ") = " << res4 << " (Accuracy Limited to 0 <= x <= 2) as series is centred at x = 1" << "\n";
    }

    return 0;
}

double sine(double x, int n){
    if(n == 1){
        return x;
    }

    double sign = (n%2 == 0)? -1.0 : 1.0;
    int power = 2*n - 1;

    double num = 1.0;
    double den = 1.0;
    for(double j = 1; j <= power; j++){
        num *= x;
        den *= j;
    }

    return (sign*(num/den)) + sine(x, n-1);
}

double cosine(double x, int n){
    if(n == 1){
        return 1;
    }

    double sign = (n%2 == 0)? -1.0 : 1.0;
    int power = 2*(n-1);

    double num = 1.0;
    double den = 1.0;
    for(double j = 1; j <= power; j++){
        num *= x;
        den *= j;
    }

    return (sign*(num/den)) + cosine(x, n-1);
}

double ln(double x, int n){
    if(n == 1){
        return x-1;
    }

    double sign = (n%2 == 0)? -1.0 : 1.0;

    double num = 1.0;
    double den = (double)n;
    for(int j = 1; j <= n; j++){
        num *= x-1;
    }

    return (sign*(num/den)) + ln(x, n-1);
}