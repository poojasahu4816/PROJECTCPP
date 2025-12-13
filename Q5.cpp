#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int Age;
    cout << "Enter a number: ";
    cin >> Age;
    if(Age <= 12){
        cout << "Child";
    }
    else if(Age <= 19){
        cout << "Teenager";
    }
    else if(Age <= 64){
        cout << "Adult";
    }
    else{
        cout << "Senior";
    }
}