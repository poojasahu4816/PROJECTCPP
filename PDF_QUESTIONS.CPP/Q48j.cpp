#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n = 8, i, j, k;
    // cout << "Enter a number: ";
    // cin >> n;
    for(i=1; i<=n; i++)
     { 
        for(j=1; j<=i; j++)
      { 
        cout<<"*" ;
      }
     for(k=i; k>=1; k--)
      {
        cout<<"*";
       }
     cout<< endl;
     }
}