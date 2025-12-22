#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a, b;          // check karna hai
    int ope;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Enter any operator(+, -, *, /, %): ";
    cin >> ope ;              

    switch(ope)
    {
        case '+':
        cout << "Result is: " << a + b;
        break;
        case '-':
        cout << "Result is: " << a - b;
        break;
        case '*':
        cout << "Result is: " << a * b;
        break;
        case '/':
        if(b != 0)
        cout << "Result is: " << a / b;
        else 
        cout << "Error! division by zero." ;
        break;
        case '%':
        if(b != 0)
        cout << "Result is: " << a % b;
        else
        cout << "Error! division by zero.";
        break;
        default:
        cout << "Invailid Operator!";
    }
   return 0;
}