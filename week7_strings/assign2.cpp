#include <iostream>
#include<algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

//Q1)
// int main()
// {
//     string s="vaidik";
//     string t=s;
//     reverse(s.begin() , s.end());
//     cout<<t+s<<endl;


// }

//Q2)
// int main()
// {
//     string str="2947578";

//     int max=0;
//     int n=str.size();
//     sort(str.begin() , str.end());
//     // for(int i=0 ; i<str.size() ; i++)
//     // {
//     //     if((int)str[i]>max)
//     //     {
//     //         max=str[i];
//     //     }

//     // }
//     cout<<str[n-2]<<endl;
// }

//Q3)
// int main() {
// string s;
// cin >> s;
// int ans = 0, l = 0;
// for (int i = 0; i < (int)s.size(); i++) {
// if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
// l++;
// else {
// ans = l * (l + 1) / 2;
// l = 0;
// }
// }
// ans += l * (l + 1) / 2;
// cout << ans;
// }

//Q4)
// int main()
// {
//     string s="car";
//     string t="arc";
//     sort(s.begin() , s.end());
//         sort(t.begin() , t.end());

//         if(t==s)
//         {
//             cout<<"they are anagram"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }


// }

//Q5
int main()

     {
string str ;
getline(cin , str); //method to input a string with spaces
int n = str.size();
string mx = "", word = "";
for (int i = 0; i < n; i++) {
if (str[i] == ' ') {
mx = max(mx, word);
word = "";
} else {
word += str[i];
}
}
mx = max(mx, word);
cout << mx << '\n';
}


