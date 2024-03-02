#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

int solve(int val1 , int val2 , char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    if(ch=='/') return val1/val2;

    return 0;
}



int main(){
    string s="2+6*4/8-3";
    //infix expression 
    //we need two stacks ,1for vals and 1 for ops
    stack<int> val;
    stack <int> op;
    for(int i=0 ; i<s.length() ; i++)
    {
        //check if s[i] is a digit (0-9)
        int ascii =(int)(s[i]);
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            if(op.size()==0 ||prio(s[i])>prio(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1 , val2 , ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }

        }
    }

    while(op.size()>0)
    {
        char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1 , val2 , ch);
                    val.push(ans);
    }
    cout<<val.top();
}