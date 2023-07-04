#include <iostream>
using namespace std;
int main()
{
    // for(int i=5;i>=0;i--)
    // {
    //     for(int j=1;j<i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=65 ; i<=68 ; i++)
    {
        for(int j=65 ; j<=i ; j++)
        {
            if(i%2 != 0)
            {
                cout<<j-64;
            }else{
            cout<<(char)j;
            }
        }
        cout<<endl;
    }
}