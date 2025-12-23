#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int electricity_unit ;
    float bill;
    cout << "Enter electricity unit: ";
    cin >> electricity_unit ;

    if(electricity_unit <= 50){
        bill = electricity_unit * 0.50;
    }
    else if(electricity_unit <= 200){
        bill = (50 * 0.50) + (electricity_unit - 50) * 0.75;
    }
    else if(electricity_unit <= 450){
        bill = (50 * 0.50) + (150 * 0.75) + (electricity_unit - 200) * 1.20;
    }
    else{
        bill = (50 * 0.50) + (150 * 0.75) + (250 * 1.20) + (electricity_unit - 450) * 1.50;
    }
    bill = bill + (0.20 * bill);

    cout << "Total electricity bill = Rs. " << bill;
}