#include<iostream>
using namespace std;

int main()
{
int i,n,j;
cout<<"Enter a number: ";
cin>>n;

for(j=1; j<=n; j++)
{
    for(i=1; i<=n; i++)
    { 
  cout <<(j-1)*n + i <<" ";
 // count = count+1;
    }
    cout<<endl;
}

}