#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5]={5,3,1,4,2};
    int n=5;
    

    for(int i=0 ; i<n ; i++)
    {
        int min=1000;
    int minindex=0;
        for(int j=i ; j<n ; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minindex=j;
            }
        }

    swap(arr[i] , arr[minindex]);    

    }

        for(int i=0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";
}

}
//Time complexity
//O(n^2)