#include<iostream>
using namespace std;

int sum_odd(int a , int b)
{
    //Q1
    if(a==b)return b;
    if(a%2==1)
    {
        return (a+sum_odd(a+1 , b));

    }
    if(a%2==0)
    {
        return sum_odd(a+1 , b);
    }
}

int stairs(int n)
{
    //Q2
}

int pow(int a)
{
    if(a==1)return true;
    if(a%2==1)
    {
        return false;
    }

    pow((float)a/2); 
}

int findNumberOfWays(int n) {
if(n < 0) return 0;
if(n == 0)return 1;
return findNumberOfWays(n-1) + findNumberOfWays(n-2) +findNumberOfWays(n-3);
}

int main()
{
    //Q1
    //cout<<sum_odd(2,5);
    cout<<pow(16)<<endl;

}
