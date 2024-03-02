#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;


}