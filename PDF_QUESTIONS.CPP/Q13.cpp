#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(a <= c && c <= b)
    {
        cout << "Given number is in range";
    }
    else{
        cout << "Given number is not in range";
    }
}