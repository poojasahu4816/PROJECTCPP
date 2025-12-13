#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 3 == 0 && num % 5 == 0){
        cout << num << " is divisible by both 3 and 5" << endl;
    }
    else if(num % 3 == 0 && num % 5 != 0){
        cout << num << " is divisible by 3 only ";
    }
    else if(num % 5 == 0 && num % 3 != 0){
        cout << num << " is divisible by 5 only ";
    }
    else{
        cout << num << " is not divisible by 3 or 5";
    }

}