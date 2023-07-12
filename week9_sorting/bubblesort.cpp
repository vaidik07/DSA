#include <iostream>
using namespace std;

int main()
{
    int arr[6]={1,4,2,3,6,5};
    int n=6;
    for(int i=0 ; i<n-1 ; i++)
    {
        bool flag =true;
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j] , arr[j+1]);
            flag = false;
            }
        }
        if(flag==true)
    {
            break;
    }
    }
    for(int i=0 ; i<n-1 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// Time Complexity

// Best Case : O(n)
// Avg. case : O(n^2)
// worst case : O(n^2)