#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

//Q1)
// int main()
// {
//     string s;
//     getline(cin , s);
//     for(int i=0 ; i<s.size() ; i++)
//     {
//         if(i%2==1)
//         {
//             s[i]='#';
//         }
        

//     }
//     cout<<s<<endl;
// }

//Q2)
// int main()
// {
//     string s;
//     getline(cin , s);
//     int count=0;
//     for(int i=0 ; i<s.size() ; i++)
//     {
//         if(s[i]!='a' && s[i]!='e'&& s[i]!='i' && s[i]!='o' && s[i]!='u' )
//         {
//             count++;
//         }
//     }

//         cout<<count<<endl;
//}

//Q3)
// int main()
// {
//         string s;
//     getline(cin , s);
//     string reverse;
//     int count=0;
//     for(int i=s.size()-1 ; i>=0 ; i--)
//     {
//         reverse.push_back(s[i]);
//     }

//     if(reverse==s)
//     {
//         cout<<"yes"<<endl;

//     }
//     else
// {
//     cout<<"No"<<endl;
// }
// }

//Q4)
// int main()
// {
//         string s;
//     getline(cin , s);
//     int count=0;
//     reverse(s.begin() +s.size()/2 , s.end() );
//     cout<<s<<endl;
// }

//Q5)
// int main()
// {
//     string s;
//     getline(cin , s);
//     int val=0;
//     int pw=1;
//     while(s.size())
//     {
//         val += pw *(s.back() - '0');
//         s.pop_back();
//         pw *= 10;
//     }
//     cout<<val;
// }

