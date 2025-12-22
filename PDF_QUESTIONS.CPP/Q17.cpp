#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int weak_number;
    cout << "Enter any weak number: ";
    cin>>weak_number;
    if(weak_number == 1){
        cout << "Saturday";
    }
    else if(weak_number == 2){
        cout << "Day name is: "<< "Monday";
    }
    else if(weak_number == 3){
        cout << "Day name is: " << "Teusday";
    }
    else if(weak_number == 4){
        cout << "Day name is: " << "Wednesday";
    }
    else if(weak_number == 5){
        cout << "Day name is: " << "Thursday";
    }
    else if(weak_number == 6){
        cout << "Day name is: " << "Friday";
    }
    else if(weak_number == 7){
        cout << "Day name is: " << "Sunday";
    }
    else{
        cout<<"It is not a weak number.";
    }

}