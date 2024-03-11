//Roy and Coin Boxes
//https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/roy-and-coin-boxes-1/?purpose=login&source=problem-page&update=google
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    vector<int> f(n+1 , 0);
    int m ;
    cin>>m;
    vector<int> L(n+1 , 0);
    vector<int> R(n+1 , 0);
    for(int i=0 ; i<m ; i++)
    {
        int l , r;
        cin>>l>>r;
        L[l]++;
        R[r]++;
    }
    f[1] = L[1];
    for(int i=1 ; i<=n ; i++)
    {
        f[i] = L[i] - R[i-1] + f[i-1];
    }
    vector<int> c(10000005 , 0);
    for(int i=0 ; i<=n ; i++)
    {
        c[f[i]]++;
    }
    for(int i = c.size()-2 ; i>=0 ; i--)
    {
        c[i] = c[i] + c[i+1];
    }
    int q ;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<c[num]<<endl;
    }
    return 0;
}