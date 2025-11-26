#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n != 0) {
    if((n % 2) == 0){
    cout << "no. is positive: ";
    }
    else{
     cout << "no. is negative";
    }
    }
      else {
        cout << " no. is zero";
      } 

}