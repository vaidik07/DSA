#include <iostream>
using namespace std;

 int main()
 {
    int a1=2 , b1=3 , a2=3 , b2=4;

    
    
    int A[a1][b1]={{1,2,3},{4,5,6}};
    int b[a2][b2]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int result[a1][b2];

    for(int i=0 ; i<a1 ; i++)
    {
        for(int j=0 ; j<b2 ; j++)
        {
                    result[i][j] = 0;

            for(int k=0 ; k<b1 ; k++)
            result[i][j] += A[i][k]*b[k][j];

        }
    }

    //print result
     for(int i=0 ; i<a1 ; i++)
    {
        for(int j=0 ; j<b2 ; j++)
        {
            cout<<result[i][j]<<" ";

        }
        cout<<endl;
    }
 }