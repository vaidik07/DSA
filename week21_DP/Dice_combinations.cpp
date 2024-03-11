#include <iostream>
#include <vector>
#include <climits>
#define mod 1000000007
using namespace std;

vector<long long int> dp(1000005 , -1);
int helper(int n )
{

    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    long long int sum=0;
    for(int i=1 ; i<=6 ; i++)
    {
        if(n-i <0) break;
        sum = (sum%mod + helper(n-i)%mod)%mod;
    }
    return dp[n] = sum%mod;
}

int main()
{
    int n ;
    cin>>n;
    cout<<helper(n)<<endl;
    return 0;
}
