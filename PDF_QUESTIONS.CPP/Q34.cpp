#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //factor 
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 1;

    for(int i=1; i<=n; i++){
      sum = sum * i;
    }
    cout << "Factorial of the number is: " << sum;
}