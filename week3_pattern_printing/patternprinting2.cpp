#include<iostream>
using namespace std;

int main()
{
    int n=5;
      for(int i=1;i<=n;i++)
      {
                  for(int j=n-2;j>=i-1;j--)
                  {
                        cout<<" ";
                  }
                for(int k=1;k<=i;k++)
                 {
                        cout<<k;

                 }
                 if(i==1)
                 {
                    cout<<" ";
                 }else{
                 for(int l=i-2 ; l<=i-1 ;)
                 {
                    cout<<l+3;
                 }
                 }
                 cout<<endl;

      }

}