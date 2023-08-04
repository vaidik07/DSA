#include <iostream>
using namespace std;

int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int k=3;
    int n=9;
    int i=1;
    int j=k;
    int maxsum=0;
    int prevsum=0;
    for(int i=0 ; i<k ; i++)
    {
        prevsum+=arr[i];
    }
    maxsum=prevsum;
    while(j<n)
    {
        int cursum=prevsum+arr[j]-arr[i-1];
        if(maxsum<cursum)
        {
            maxsum=cursum;
        }
        prevsum=cursum;
        i++;
        j++;

    }

    cout<<maxsum<<endl;

}