#include<iostream>
#include<stdio.h>
using namespace std;

int main()  
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    for(int i=1; i<=n; i++){
      sum = sum * i;
    }
    cout << "Fibonacci series of the number is: " << sum;
}