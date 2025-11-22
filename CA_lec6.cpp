#include<iostream>
using namespace std;

int main()
{
int n,i,j;
 cout<<"enter a number: ";
 cin >> n; 
for(j=1 ; j<=n ; j++)
{
    for(i=1 ; i<=n ; i++)
    {
        char name = 'a'+i-1;
        cout<<name<<" ";
    }
    cout<<endl;
}
   
  
}
