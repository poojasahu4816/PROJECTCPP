#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "enter a number: ";
  cin >> a >> b >> c;
  if(a>b){
     cout << " a is greater ";
  }
  else if(b>c){
    cout << " b is greater ";
  }
  else if(c>a){
    cout << " c is greater ";
  }
  else{
    cout << "these are same ";
  }
}
