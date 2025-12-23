#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;

    if(a<b && b<c)
    cout << "Increasing order ";
    else if(a>b && b>c)
    cout << "Decreasing order ";
    else
    cout << "Noting";
}