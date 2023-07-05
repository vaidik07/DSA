#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int m=3;
    int n=3;
    vector<int> v;
    int arr[m][n]={{1,1,1} , {1,0,1} , {1,1,1}};
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]==0)
            {
               
                v.push_back(i);
                v.push_back(j);
            }
            
        }
    }

    int y=0;

    
    for(int i=0 ; i<(v.size()/2) ; i++)
    {

        for(int k=0 ; k<n ; k++)
        {
        int a=v[2*y];
        arr[a][k]=0;
        }

        for(int k=0 ; k<m ; k++)
        {
        int b=v[2*y +1];
        arr[k][b]=0;
        }
        y++;
    }






     for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}