#include<iostream>
#include<stdio.h>
using namespace std;

  long long factorial(int n) {
       long long fact = 1;
       for(int i=1; i<=n; i++){
          fact = fact * i;
       }
       return fact;
  }
  long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
  }

  int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    if(r > n) {
        cout << "Invalid input! r cannot be greater than n.";
    }
    else {
        cout << "nCr = " << nCr(n, r);
    }
  }
