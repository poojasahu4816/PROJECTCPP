#include<iostream>
#include<stdio.h>
using namespace std;

int  main()
{
    int ans = 0;
    int ans2 = 0;
    int cost_price;
    int selling_price;
    cout << "Enter cost price of your product: " << endl;
    cin >> cost_price;
    cout << "Enter sell price of your product: " << endl;
    cin >> selling_price;
    if(cost_price < selling_price){
        ans = selling_price - cost_price;
        cout << "Profit:  " << ans;
    }
    else{
        ans2 = cost_price - selling_price;
        cout << "Loss:  " << ans2;
    }
}