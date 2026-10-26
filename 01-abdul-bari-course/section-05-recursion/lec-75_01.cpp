#include <iostream>
using namespace std;

// C++ Rescursion: Combinations

int factorial(int k);
int nchooser1(int n, int r);
int nchooser2(int n, int r);
void print_pascal(int n);

int main(){
    int comb1, comb2;
    comb1 = nchooser1(5, 3);
    comb2 = nchooser2(5, 4);
    cout << comb1 << "\n";
    cout << comb2 << "\n";
    print_pascal(10);
    return 0;
}

int factorial(int k){
    if(k > 0){
        return k*factorial(k-1);
    }
    
    else{
        return 1;
    }
}

// Evaluating using iterative calls
int nchooser1(int n, int r){
    if(n > 0 && r > 0 && r<n){
        return factorial(n)/(factorial(n-r)*factorial(r));
    }
    else{
        return 0;
    }
}

// Recursively using pascal triangle definition
int nchooser2(int n, int r){
    if(n>0 && r>0 && r<n){
        return nchooser2(n-1, r-1) + nchooser2(n-1, r);
    }

    else if(n>0 && (r == 0 || r==n)){
        return 1;
    }

    else{
        return 1;
    }
}

void print_pascal(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }

        for(int j = 1; j <=i; j++){
            int res = nchooser2(i-1, j-1);
            cout << res << " ";
        }

        cout << "\n";
    }
}