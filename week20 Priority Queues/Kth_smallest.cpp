#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq; //max heap will be used for kth smallest 
    for(int i=0 ; i<n ; i++)
    {
        pq.push(arr[i]);
        if(pq.size() >k) pq.pop();

    }
    cout<<pq.top()<<endl;
    //TC n*log(k)

}