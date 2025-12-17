#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout <<"Enter a year:  ";
    cin >> year;
    if(year % 100 == 0)
    {
        cout << "it's a century year";
    }
    else{
        cout << "It's not a century year";
    }
}