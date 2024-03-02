#include <iostream>
#include <algorithm>
using namespace std ;



void heapify(int i ,int arr[] , int n)
{
    while(true)
    {
        int left = 2*i;
        int right = 2*i+1;
        if(left>=n) break;
        if(right>=n){
            if(arr[left]<arr[i]){
                swap(arr[left] , arr[i]);
                i=left;
            }
            break;
        }
        if(arr[left]<arr[right])
        {
            if(arr[left]<arr[i]){
                swap(arr[left] , arr[i]);
                i=left;
            }
            else break;
        }
        else {
            if(arr[right]<arr[i]){
                swap(arr[right] , arr[i]);
                i=right;
            }
            else break;
        }

    }
}


int main()
{
    int arr[] = {-1 , 10 , 2 ,14 , 11, 1 ,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=n/2 ; i>=1 ; i--)
    {
        heapify(i , arr , n);
    }
    for(int i=1 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}