#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two points: ";
    cin >> x >> y;
    if(x>0 && y>0){
        cout << "First quadrant";
    }
    else if(x<0 && y>0){
        cout << "Second quadrant";
    }
    else if(x<0 && y<0){
        cout << "Third quadrant";
    }
    else if(x>0 && y<0){
        cout << "Fourth quadrant";
    }
    else{
        cout << "origin";
    }


}