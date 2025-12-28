#include<iostream>
#include<stdio.h>
using namespace std;

int main() 
{
    int sum = 0;

    for(int i=1; i<=20; i+=2){
        sum = sum + i;
    }
    cout << "Sum of even numbers from 1 to 20: " << sum;
}