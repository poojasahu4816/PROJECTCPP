#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter value of angle:  ";
    cin >> x >> y >> z;
    if((x+y+z) == 180){
        cout << "They are tringle";
    }
    else{
        cout << "They are not tringle";
    }
}