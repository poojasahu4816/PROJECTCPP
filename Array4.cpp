#include<iostream>
#include<stdio.h>
using namespace std;

int main()  // Missing number in array
{
    int arr[5] = {1, 3, 4, 5, 6};
    int sum = 0;

    for(int i=0; i<4; i++)
    sum += arr[i];
    
    int ans = (5*(5+1))/2;
    cout << ans - sum;
    return ans - sum;
}