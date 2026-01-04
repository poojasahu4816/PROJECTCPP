#include<iostream>
#include<stdio.h>
using namespace std;

  long long evenfactorial(int n) {
       long long result = 1;
       for(int i=2; i<=n; i += 2){
          result = result * i;
       }
       return result;
    }
    long long oddfactorial(int n) {
        long long result = 1;
        for(int i=1 ; i<=n; i+=2){
            result = result * i;
        }
        return result;
    }
    int main(){
        int n;
        cout << "Enter n: ";
        cin >> n;

        cout << "Even factorial of " << n << " = " << evenfactorial(n) << endl;
        cout << "Odd factorial of " << n << " = " << oddfactorial(n) << endl;

        return 0;
    }