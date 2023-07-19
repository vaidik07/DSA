#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string s , int i , int j)
{
    if(i>j)return true;
    if(s[i]!=s[j]) return false;

    else return ispalindrome(s,i+1,j-1);
}

int main()
{
    string s= "racecar";
    cout<<ispalindrome(s,0,s.length()-1);
}
