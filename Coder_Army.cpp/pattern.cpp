#include<iostream>
using namespace std;

int main()
{
    int i,j;
    //cout<<"Enter a  number";

    for(j=1; j<=5 ; j++){
      for(i=1 ; i<=5; i++){
        if (i==1 || i==5) 
        {
          cout <<" *";
        }
        else{
          if( j==1 || j==5)
        {
          cout<<" *"; 
        }
        else{
          cout<<"  ";
        }
      } 
    } 
    cout<< endl;   
}
}