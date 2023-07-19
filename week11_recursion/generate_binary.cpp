#include <iostream>
using namespace std;

void generate(string s , int n)
{
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    generate(s+'1',n-1);

}

void not_cons_ones(string s , int n)
{
     if(n==0){
        cout<<s<<endl;
        return;
    }
    not_cons_ones(s+'0',n-1);
    if(s=="")    not_cons_ones(s+'1',n-1);
    else if(s[s.length()-1]=='0')
    {
            not_cons_ones(s+'1',n-1);

    }

}

int main()
{
    int n=4;
    //generate("",n);
    not_cons_ones("" , n);
}