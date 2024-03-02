#include <iostream>
using namespace std;
int main()
{
    int n;
    n=4;
//   for(int i=1;i<=n;i++)
//   {
//       cout<<endl;

//     for(int j=1;j<=i;j++)
//     cout<<"*";
//   } 
for(int i=1;i<=n;i++)
{
    //spaces
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";

    }
    //stars
    for(int k=1;k<=n;k++)
    {
        cout<<"*";
    }
    cout<<endl;
} 
}

