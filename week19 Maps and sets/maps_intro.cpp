#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    //map<key , value> m;
    unordered_map<string , int> m;
    pair<string , int> p1;
    p1.first = "vaidik";
    p1.second= 11;
     m.insert(p1);
     //Another method to insert in map
     m["piyush"] = 14;
     //for each with auto , with auto no need to write full sentence 
     //for(pair<string , int> p : m) we can directly write 

     for(auto p : m)
     {
        cout<<p.first<<" "<<p.second<<endl;
     }
     cout<<m.size()<<endl;

     m.erase("piyush");

     for(auto p : m)
     {
        cout<<p.first<<" "<<p.second<<endl;
     }
     cout<<m.size();

}