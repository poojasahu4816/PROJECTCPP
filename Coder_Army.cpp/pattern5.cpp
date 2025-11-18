#include<iostream>
using namespace std;

int main()
{
    int i,n,j;
    cout << "Enter a number: ";
    cin >> n;

    for(j=1 ; j<=n ; j++)
    {
        for(i=1 ; i<=n-j ; i++){
        cout <<" ";
        }
        {
        for(i=1 ; i<=j ; i++)
        cout <<"* ";
        }
    cout <<endl;
}                                     //       *
    for(j=n-1 ; j>=1 ; j--)           //      * *
      {                               //     * * *
        for(i=1 ; i<=n-j ; i++){      //      * * 
        cout <<" ";                   //       *
        }                            
        {
        for(i=1 ; i<=j ; i++)
        cout <<"* ";
        }
        
    cout <<endl;
}
}