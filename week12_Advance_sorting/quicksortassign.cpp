#include <iostream>
using namespace std;
int main()
{
    int arr[7]={3,8,6,7,5,9,10};
    int idx1=0;
    int idx2=0;
    for(int i=0 ; i<7 ; i++)
    {
        if(arr[i]>arr[i+1])
        {
            idx1=i;
            break;
        }
        
    }
    for(int i=1 ; i<7 ; i++)
    {
        if(arr[i]<arr[i-1] && i!=idx1+1)
        {
            idx2=i;
            break;
        }
        
    }
    swap(arr[idx1] , arr[idx2]);
    for(int i=0 ; i<7 ; i++)
    {
        cout<<arr[i]<<" ";
        
    }
}