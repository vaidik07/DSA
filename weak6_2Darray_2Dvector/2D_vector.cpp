#include <iostream>
#include <vector>
using namespace std;


// int main()
// {
//     vector <vector<int>> v(5);
//     v.push_back(vector<int> (1));
//     v.push_back(vector<int> (2));
//     v.push_back(vector<int> (3));
//     v.push_back(vector<int> (4));
//     v.push_back(vector<int> (5));

//     for(int i=0 ; i<5 ; i++)
//     {
//         v[i][0]=1;
//         v[i][i]=1;
//     }

int main()
{
    int numRows=3;
    
     vector<vector<int>> v;
        
        for(int i=1 ; i<=numRows ; i++)
        {
            vector<int> a(i);
            v.push_back(a);

        }
        
        for(int i=0 ; i<numRows ; i++)
        {
            for(int j=0 ;j<=i ; j++ )
            {
        
                 if(j==0 || j==i)
                    {
                         v[i][j]=1;
                     }
                 else{
                      v[i][j]=v[i-1][j]+v[i-1][j-1];
                     }
            }
        }
        
        
         for(int i=0 ; i<numRows ; i++)
        {
            for(int j=0 ;j<=i ; j++ )
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }

        
    
}


