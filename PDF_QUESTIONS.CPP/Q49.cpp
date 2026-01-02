#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Enter a number: ";
    cin >> n;
    //char num = 'A';
    for(i=n; i>=2; i--){ 
        for(j=1; j<=1; j++){
            cout << "*";
        }
        for(k=i; k>=2; k--){
            cout << " ";
        }
    cout << "*" << endl;
}
}