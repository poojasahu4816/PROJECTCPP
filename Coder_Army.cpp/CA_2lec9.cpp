#include<iostream>

using namespace std;

int main()
{ //complex pattern printing
int n,i,j;
 cout<<"enter a number: ";
 cin >> n;
 for(j=n; j>=1; j--)
{
    for(i=1; i<=n-j; i++)
    {
       cout <<"  "  ;
    }
    for(i=1; i<=2*j-1 ; i++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}

}