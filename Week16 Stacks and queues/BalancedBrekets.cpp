//Balanced Brakets
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string s)
{
    if(s.length()%2 != 0) return false;

    stack<int> st;

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='(') st.push(s[i]);

        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}

// bool isBalanced(string s){
//     if(s.length()%2 != 0 ) return false;
//     stack <char> st;
//     for(int i=0 ; i<s.length() ; i++){
//         if(s[i]== '(' ) st.push(s[i]);
//         else{
//             if(st.size()==0) return 0;
//             else st.pop();
//         }
//     }
//     if(st.size()==0) return true;
//     else return false;
// }

int main(){
    string s="(()())";
    cout<<isBalanced(s);

}


