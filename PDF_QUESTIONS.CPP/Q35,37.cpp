#include<iostream>
#include<stdio.h>
using namespace std;

int main()  //factor 
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int evennum = 1;
    int oddnum = 1;
     
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
      evennum = evennum * i;
    }else{
        oddnum = oddnum * i;
    }
}
    cout << "Factorial of the even number is: " << evennum << endl;
    cout << "Factorial of the odd number is: " << oddnum << endl;

}