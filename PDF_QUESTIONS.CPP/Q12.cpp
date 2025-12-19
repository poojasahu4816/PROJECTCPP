#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int month;
    cout<<"Enter a month number: ";
    cin >> month;
    if(3 <= month <= 5)
    {
        cout <<"Spring";
    }
     else if(6 <= month <= 8)
     {
        cout <<"Summer";
     }
     else if(9 <= month <= 11)
     {
        cout <<"Autumn";
     }
     else{
        cout <<"winter";
     }
}