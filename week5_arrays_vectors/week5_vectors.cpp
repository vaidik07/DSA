#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    //size not required
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    v.push_back(10);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
    
    //capacity doubles the previous size
    //square brackets are used to update or access
    
    cout<<"Elements in vector are:";
    cout<<" "<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;

    v.pop_back();
    v.pop_back();
    
    cout<<"Size after pop = "<<v.size()<<endl;
    cout<<"Capacity after pop = "<<v.capacity()<<endl;
    cout<<"elements after pop are"<<endl;


        cout<<" "<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<endl;
//capacity remains same after pop

vector<int> v1(7,1); //means initial size =5 and each element is 1

//input in vector

vector<int> v2;

int n;
cout<<"Enter no. of elements you want to enter"<<endl;
cin>>n;
cout<<endl;
cout<<"enter elements"<<endl;

for(int i=0 ; i<n ; i++)
{
    int x;
    cin>>x;
    v2.push_back(x);
    }

    // sort(v.begin(), v.end());

for(int i=0 ; i<v2.size() ; i++)
{
    cout<<v2[i]<<endl;
}

}
//vectors are passed by value they can be passed by reference using & operator


