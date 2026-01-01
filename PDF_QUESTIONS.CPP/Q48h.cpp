#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter a number: ";
    cin >> n;
    for(i=0; i<n; i++)
     { 
        for(j=n-i; j>=0; j--)
      { 
        cout<<" " ;
      
      }
      for(k=0; k<=i; k++)
      {
        cout<<"*";
      }
     cout<< endl;
     }
}