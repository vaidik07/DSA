#include <iostream>
#include <stack>
using namespace std;

//copy stack into another stack in same order
void display(stack <int> temp)
{
    cout<<temp.size()<<endl;
//     for(int i=0 ; i<temp.size() ; i++)
//     {
//         cout<<i<<endl;
//     cout<<temp.top()<<endl;
//     temp.pop();
//     }
 }


int main()
{
    stack<int> a;
    stack<int> b;
    stack<int> c;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    display(a);
    cout<<a.size()<<endl;

}