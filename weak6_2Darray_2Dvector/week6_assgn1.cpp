#include <iostream>
using namespace std;
//Q1)
// int main()
// {
//     int arr[5][5];

//     for(int i=0 ; i<5 ; i++)
//     {
//         for(int j=0 ; j<5 ; j++)
//         {
//             arr[i][j]=10;

//         }

//     }

//     for(int i=0 ; i<5 ; i++)
//     {
//         for(int j=0 ; j<5 ; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }

//         cout<<endl;
//     }
// }

//Q2
// int main()
// {
//     int arr1[3][3]={{1,2,3} , {4,5,6} , {7,8,9}};
//     int arr2[3][3]={{4,5,8} , {0,0,8} , {1,2,0}};

//     //Adding

// for(int i=0 ; i<3 ; i++)
//     {
//         for(int j=0 ; j<3 ; j++)
//         {
//             arr1[i][j]=arr1[i][j] + arr2[i][j];

//         }
//     }


// //printing

//     for(int i=0 ; i<3 ; i++)
//     {
//         for(int j=0 ; j<3 ; j++)
//         {
//             cout<<arr1[i][j]<<" ";
//         }

//         cout<<endl;
//     }
// }


//Q3
// int main()
// {
//     int arr[4][4]={{1,2,-3,4} , 
//                      {0,0,-4,2} , 
//                     {1,-1,2,3} ,
//                     {-4 , -5 , -7 , 0}};

//     int sum=0;

//     int l1=1;
//     int r1=2;

//     int l2=3;
//     int r2=3;

//    for(int i=l1 ; i<=l2 ; i++)
//     {
//         for(int j=r1 ; j<=r2 ; j++)
//         {
//             sum+=arr[i][j];
//         }/
//     }

   

//     cout<<sum<<endl;


// }

//Q4)

// int main()
// {
//         int arr[4][4]={{1,3,4,6},
//                      {2,4,5,7},
//                      {3,5,6,8},
//                      {4,6,7,9}   };

//         int max=arr[0][0];

//            for(int i=0 ; i<4 ; i++)
//     {
//         for(int j=0 ; j<4 ; j++)
//         {
            
//             if(arr[i][j]>max)
//             {
//             max=arr[i][j];
//             }
//         }

//     }

//             cout<<max<<endl;

// }

//Q5)

// int main()
// {
//     int maximum[3];
//     int max=0;
//     int x=0;

//     int arr[3][4]={{1,3,5,7} ,
//                     {3,4,7,8},
//                     {1,4,12,3}};

//     for(int i=0 ; i<3 ; i++)
//     {
//                     int sum=0;

//         for(int j=0 ; j<4 ; j++)
//         {
//             sum+=arr[i][j];
         
//          } maximum[x]=sum;
//         x++;

// }

//     for(int i=0 ; i<3 ; i++)
// {
//     if(maximum[i]>max)
//     max=maximum[i];
// }

// cout<<max<<endl;

//  for(int i=0 ; i<3 ; i++)
// {
//     if(maximum[i]==max)
//     cout<<"row is "<<i<<endl;
// }


// }

//Q6

//  int main()
//  {
//     int n=5;
//     int m=5;
//     int middle_n=(n/2);
//     int middle_m=(m/2);

//     int arr[5][5]={{1,2,3,4,5},
//                     {3,4,5,6,7},
//                     {7,6,5,4,3},
//                     {8,7,6,5,4},
//                     {1,2,37,8,0}};

//                for(int i=0 ; i<n ; i++)
//     {
//         for(int j=0 ; j<m ; j++)
//         {
            
//             if(j==middle_m||i==middle_n)
//             {
//             cout<<arr[i][j]<<" ";
//             }
//             else{cout<<" ";}
//         }
//         cout<<endl;

//     }


//  }
    
