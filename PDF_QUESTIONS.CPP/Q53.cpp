#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a, b, choice;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "choice operation:\n";
    cout << "1. Sum\n";
    cout << "2. Multiplication\n";
    cout << "3. Sub\n";
    cout << "4. Division\n";
    cin >> choice;

    switch (choice)
    {
        case 1 :
           cout << "Sum = " << (a + b);
           break;
        case 2 :
            cout << "Multiplication = " << (a * b);
            break;
        case 3 :
             cout << "Subtraction = " << (a - b);
             break;
        case 4 :
          if(b != 0){
             cout << "Division = " << (a / b);
            }
          else
            {
             cout << "Error: ";
             }
            break;
        default:
        cout << "invalid";
    }
}