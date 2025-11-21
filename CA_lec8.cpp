#include<iostream>
using namespace std;

int main()
{ //pattern printing
int n,i,j;
 cout<<"enter a number: ";
 cin >> n;
 for(j=1; j<=n; j++)
{
    for(i=1; i<=n-j; i++)
     cout<<"  ";
    
    for(i=j; i>=1 ; i--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}

}