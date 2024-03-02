//no of setbits are number of zeroes in a binary number
// function if __buildin_popcount(n)
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int no_of_setbits(int n)//direct method
{
    return __builtin_popcount(n);
}
int count_setbits(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n=n&&(n-1);
    }
    return count;
    
}

int main()
{
    cout<<no_of_setbits(3)<<endl;
    cout<<count_setbits(3);
}