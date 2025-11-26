#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if((n % 2) == 0) {
        cout << "This is a even number";
    }
    else {
        cout << "this is a odd number";
    }
}