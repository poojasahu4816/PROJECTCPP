#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //factor 
{
    int sum = 0;

    for(int i=2; i<=20; i+=2){
        sum = sum + i;
    }
    cout << "Sum of even numbers from 1 to 20: " << sum;
}