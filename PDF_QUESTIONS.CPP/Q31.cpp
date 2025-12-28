#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //factor 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Factor of " << n << " are: ";
    for(int i=1; i<=n; i++){
        if(n % i == 0)
        cout << i << " ";
    }
}