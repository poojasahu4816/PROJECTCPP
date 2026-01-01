#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{   int n = 5;
    int i, j, k;
    for(i=0; i<2; i++)
     { 
        for(j=0; j<i; j++)
      { 
        cout<<" " ;
      }
      for(k=0; k<n-i; k++)
      {
        cout<<"*";
      }
     cout<< endl;
     }
}