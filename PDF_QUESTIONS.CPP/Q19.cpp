#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int qty;
    float price, total;

    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> price;

    total = qty * price;

    if(qty > 100){
        total = total - (0.10 * total);
    }
    cout << "total expenses = Rs. " << total;
}