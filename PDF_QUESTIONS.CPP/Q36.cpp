#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //factor 
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=10; i++){
      cout << i << " * " << n << " = " << i*n << endl;
    }
}