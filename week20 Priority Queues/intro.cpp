#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //MAX HEAP
    // priority_queue<int> qp;
    // qp.push(10);
    // qp.push(100);
    // qp.push(30);
    // qp.push(80);
    // cout<<qp.top()<<endl;
    // qp.pop();
    // cout<<qp.top()<<endl;
    // qp.pop();
    // cout<<qp.top()<<endl;
    // qp.pop();

    //MIN HEAP
    priority_queue<int, vector<int> , greater<int> > qp;
    qp.push(10);
    qp.push(100);
    qp.push(30);
    qp.push(80);
    cout<<qp.top()<<endl;
    qp.pop();
    cout<<qp.top()<<endl;
    qp.pop();
    cout<<qp.top()<<endl;
    qp.pop();

    // PROBLEM IDENTIFICATION 
    // 1) KTH smallest and kth largest, top k frequent elements closest k
    // 2)At any point of time min and max elements are required
    // 3)sorting (sometimes)
}