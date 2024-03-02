// compress string 
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

string compress_string(string s){
    stack<char> st;
    string ans;
    st.push(s[0]);
    for(int i=1 ; i<s.size() ; i++)
    {
        if(s[i]!=st.top()) st.push(s[i]);
        
    }
    ans="";
    while(st.size()>0){
        ans=ans+st.top();
        st.pop();
    }
    reverse(ans.begin() , ans.end());
return ans;

}


string remove_duplicates(string s)
{
    string ans = "";
    stack<char> st;
    int i=0;
    st.push(s[i]);
    for(int i=1 ; i<s.length() ; i++)
    {
        if(st.top() != s[i]){
            ans = ans + st.top();
            st.pop();
            st.push(s[i]);
        } 
    }
    ans = ans + s[s.length()-1];

    return ans;
}

int main()
{
    string s={"aaabbcddaabffg"};
    cout<<remove_duplicates(s);

    
}