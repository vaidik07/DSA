#include <iostream>
using namespace std;

//pointer and array 
int main()
{
    int arr[]={1,2,3,4};
    int *ptr= arr;
    cout<<ptr[1]<<endl;
}
//*ptr is same as ptr[0]

//Q1)
// int main()
// {
//     int a[4]={1,2,5,4};
//     int x;
//     cout<<"enter x"<<endl;
//     cin>>x;

//     for(int i=0 ; i<4 ; i++)
//     {
//         if(a[i]>x)
//         {
//         cout<<"index="<<i<<endl;
//         cout<<"Element ="<<a[i]<<endl;}
//     }
// }

//Q2)
// int main()
// {

//     int a[4]={1,4,3,5};
//     int max;
//     for(int i=0 ; i<4 ; i++)
//     {

//     }
// }

//Q3)
// int main()
// {
//     int a[5]={1,2,9,4,5};
//     bool sorted;

//      for(int i=0 ; i<4 ; i++)
//      {
        
//         if(a[i]<a[i+1])
//         {

//                 continue;
//         }
//         else{
//             cout<<"not sorted"<<endl;
//             break;
//         }
//      }


// }

//Q4)
// int main()
// {
//     int sum_even=0;
//     int sum_odd=0;
//     int a[5]={1,2,3,4,5};
//     for(int i=0 ; i<5 ; i=i+2)
//     {
//         sum_even+=a[i];

//     }

//     for(int j=1 ; j<5 ; j=j+2 )
//     {
//         sum_odd+=a[j];
//     }

//     cout<<sum_even-sum_odd<<endl;
// }

//Q5
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     for(int i=0 ; i<5 ; i=i+2)
//     {
//         a[i]= a[i]+10;
//     }

//     for(int i=1 ; i<5 ; i=i+2)
//     {
//         a[i]=a[i]*2;
//     }

//     for(int i=0 ; i<5 ; i++)
//     {
//         cout<<a[i]<<endl;
//     }

// }

//Q6)
// int main()
// {
//     int a[5]={1,1,2,2,3};
//     int repeat;

//     for(int i=0 ; i<5 ; i++)
//     {
//         for(int j=0 ; j<5 ; j++)
//         {
//             if(a[i]==a[j]&&j!=i)
//             {
//                 break;
//             }
//             else{
//                 cout<<i<<endl;
//             }
//         }
//     }
// }

// int main()
// {

//     //program for palindrome
//     int a[5]={1,1,2,1,1};
//     int x=4;
//     int forward[5];
//     int reverse[5];
//     for(int i=0 ; i<5 ; i++)
//     {
//         forward[i]=a[i];
//         reverse[i]=a[x-i];


//     }
//     for(int i=0 ; i<5 ; i++)
// {
//     if(forward[i]==reverse[i])
//     {
//         continue;
//     }
//     else {
//         cout<<"Not a palidrome"<<endl;
//     }
// }

// }

//Q8)
//average display of all numbers