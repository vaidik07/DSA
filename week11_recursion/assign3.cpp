#include <iostream>
#include <vector>
using namespace std;

//Q1
void reverse(int n , int &ans)
{
    if(n==0)
    {
        return;
    }
    ans =ans*10 + n%10;
    reverse(n/10 , ans);

}


    void printIncreasingSequences(int curr, int n, int k, vector<int> &ans) {
if(ans.size() == k) {
for(int i = 0; i < k; ++i) {
cout << ans[i] << " ";
}
cout << endl;
return;
}
for(int i = curr+1; i <= n; ++i) {
ans.push_back(i);
printIncreasingSequences(i, n, k, ans);
ans.pop_back();
}
}

void two(int n , vector<int> a , vector<int> b)
{
    int k=b.size();

    // for(int i=0 ; i<k ; i++)
    // {
    //     if()
    //}
}


int main()
{
    // int n=1000344;
    // int ans=0;
    // reverse(n,ans);
    // cout<<ans;
    vector<int> v;
    printIncreasingSequences(0 , 10 , 2 ,v );
}