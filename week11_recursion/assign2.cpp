#include <iostream>
using namespace std;

void rev(int arr[] , int n)
{
    if(n==0)return;
    cout<<arr[n-1]<<" ";
    rev(arr , n-1);

}

void search(int arr[] , int n , int target)
{
    if(n==0)return;
    if(arr[n-1]==target)
    {
    cout<<n-1<<endl;
    }
    search(arr , n-1 , target);

}


void trisum(int arr[] , int n)
{
    if(n==1)return;
    for(int i=0 ; i<n-1 ; i++)
    {
        arr[i]=arr[i]+arr[i+1];
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    trisum(arr , n-1);
}

int main()
{
    //Q1
    //int A[4]={1,2,3,4};
    //rev(A , 4);

    //Q2
    // int A[4]={1,2,3,4};
    // search(A , 4 , 4);

    //Q3 leetcode 1342

    //Q4)
    int A[5]={5,4,3,2,1};
    trisum(A , 5);

}