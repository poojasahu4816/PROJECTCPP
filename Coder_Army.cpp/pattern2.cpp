#include<iostream>

using namespace std;

int main()
{ // pattern printing line
int n,i,j;
 cout<<"enter a number: ";
 cin >> n;
 for(j=1; j<=n; j++)
{
    for(i=1; i<=j; i++)
    {
       cout <<"  "  ;
    }
    for(i=1; i<=1 ; i++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}

}