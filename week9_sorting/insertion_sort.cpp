#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5]={5,3,1,4,2};
    int n=5;
    for(int i=1 ; i<n ; i++)
    {
        int j=i;
        while(arr[j]<arr[j-1] && j>=1)
        {
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
     for(int i=0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}

}

// best case O(n)
// worst     O(n^2)
// avg case  O(n^2)
//stable