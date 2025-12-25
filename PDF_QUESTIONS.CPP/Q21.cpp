#include <iostream>
using namespace std;

int main() {
    int km;
    float bill;

    cout << "Enter kilometers covered: ";
    cin >> km;

    if(km <= 10){
        bill = km * 11;
    }
    else if(km <= 100){
        bill = (10 * 11) + (km -10) * 10;
    }
    else if(km > 100){
        bill = (10 * 11) + (90 * 10) + (km - 100)*9;
    }
    cout << "Total bill = Rs. " << bill;
}