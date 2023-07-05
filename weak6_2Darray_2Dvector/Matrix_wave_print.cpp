#include <iostream>
using namespace std;

// int main()
// {
//     //column wise printing 
//     //1 2 3
//     //4 5 6
//     //7 8 9
//     //output should be 
//     //1,4,7,2,5,8,3,6,9

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0 ; i<3 ; i++)
//     {
//         if(i%2==0)
//         {
//         for(int j=0 ; j<3 ; j++)
//         {
//             cout<<arr[j][i]<<" , ";
//         }
//         }
//         else{
//             for(int j=2 ; j>=0 ; j--)
//             {
//                 cout<<arr[j][i]<<" , ";
//             }
//         }
//     }
// }

//spiral printing of matrix

//output = 1,2,3,6,9,8,7,4,5


int main()
{
    int m=3 , n=3;
    int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc)
    {
        //right
        for(int j=minc ; j<= maxc ; j++)
        {
            cout<<arr[minr][j]<<" ";
        }minr++;
        if(minr>maxr||minc>maxc) break;

        //down
        for(int i=minr ; i<=maxr ; i++)
        {
            cout<<arr[i][maxc]<<" ";
        }maxc--;
                if(minr>maxr||minc>maxc) break;

        //left

        for(int j=maxc ; j>=minc ; j--)
        {
            cout<<arr[maxr][j]<<" ";
        }maxr--;
        if(minr>maxr||minc>maxc) break;


        //up
        for(int i=maxr ; i>=minr ; i--)
        {
            cout<<arr[i][minc]<<" ";

        }minc++;

    }



    


}

