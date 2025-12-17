#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter sides of tringle: ";
  cin >> a >> b >> c;
  if(a == b && b == c && c == a)
  {
    cout << "Tringle is equilateral";
  }
  else if(a==b || b==c || c==a){
    cout << "Tringle is isosceles";
  }
  else if(a != b != c){
    cout << "Tringle is scalene";
  }
}
