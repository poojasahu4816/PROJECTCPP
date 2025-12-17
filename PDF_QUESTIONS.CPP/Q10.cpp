#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c ;
    if(a==b & b==c & c==a){
        cout << " Numbers are equal. ";
    }
    else{
        cout << "These are not equal." ;
    }
}