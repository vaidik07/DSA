// class Solution {
// public:

//     bool prime(int a)
//     {
//         if(a==1) return false;

//         for(int i=2 ; i<=sqrt(a) ; i++)
//         {


//              if(a%i==0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int smallestValue(int n) {

//         while(prime(n)==false)
//         {
//             int sum=0;

//             for(int i=2 ; i<=sqrt(n) ; i++)
//             {

//                 if(n%i==0)
//                 {
//                     if(prime(i)==true)
//                     {
//                         int a=n;
//                         while(a%i==0)
//                         {
//                             sum+=i;
//                             a=a/i;
//                         }
//                         if(a==1) return sum;
//                     }

//                     if(i!=n/i){
//                     if(prime(n/i)==true){
//                         int k=n/i;
//                         int a=n;
//                         while(a%k==0)
//                         {
//                             sum+=k;
//                             a=a/k;
//                         }
//                     } }


//                 }
//             }
//             n=sum;
//             sum=0;
//         }
//         return n;
//     }
// };

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
int q = 807;
int n=1;
string final = to_string(q+n);

}