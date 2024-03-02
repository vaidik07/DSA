#include <iostream>
#include <algorithm>
using namespace std ;

//implemented using an array

class minHeap{
public:
int arr[50];
int idx;
minHeap(){
    idx=1;
}

int size()
{
    return idx-1;
}
int top()
{
    return arr[1];
}
void push(int x)
{
    arr[idx]=x;
    int i=idx;
    idx++;
    //swapping of i with parent till i==1
    //left child = 2*i
    //right child = 2*i+1
    //parent = i/2
    while(i!=1)
    {
        int parent =i/2;
        if(arr[i]<arr[parent])
        {
            swap(arr[i] , arr[parent]);
        }
        else break;

        i=parent;

    }
}
void pop()
{
    idx--;
    arr[1] = arr[idx];
    int i=1;
    while(true)
    {
        int left = 2*i;
        int right = 2*i+1;
        if(left>idx-1) break;
        if(right>idx-1){
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

void display()
{
    for(int i=1 ; i<idx ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

};


int main()
{
    minHeap m;
    m.push(10);
    m.push(20);
    m.push(30);
    m.push(40);
    m.push(50);
   
    m.push(1);
    m.pop();
     m.display();

}