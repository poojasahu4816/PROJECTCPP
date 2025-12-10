#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //second largest
{
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    int ans = 0;
    for(int i=0; i<7; i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
    int sec = 0;
    for(int i =0; i<7 ; i++)
    {
        if(arr[i] != ans)
        sec = max(sec,arr[i]);
    }
    cout << sec ;
    return sec;
}