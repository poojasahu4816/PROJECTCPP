#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter a number: ";
    cin >> n;
    for(i=1; i<=n; i++)
     { 
        for(j=1; j<=i; j++)  //left triangle
      { 
        cout<< "*" ;
      
      }
      for(k=1; k<= 2*(n-i); k++)  //spaces
    {
        cout << " ";
    }
      for(j=1; j<=i; j++)  //right triangle
      {
        cout<<"*";
      }
     cout<< endl;
     }
}