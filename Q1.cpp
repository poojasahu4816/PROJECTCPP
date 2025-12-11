#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n != 0) {
    if((n % 2) == 0){
    cout << "Number is positive.";
    }
    else{
     cout << "Number is negative.";
    }
    }
      else {
        cout << "Number is zero.";
      } 

}