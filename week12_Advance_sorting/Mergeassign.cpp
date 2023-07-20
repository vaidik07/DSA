#include <iostream>
#include <vector>
using namespace std;
//Q1)
void merge(vector<int> &a , vector<int> &b ,vector<int> &result )
{
    int i=0 , j=0 , k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            result[k]=a[i];
            i++;
            k++;
            
        }
        else{
            result[k]=b[j];
            j++;
            k++;

        }
        if(i==a.size()){
            while(j<b.size())
            {
                result[k]=b[j];
                j++;
                k++;
            }
        }
        if(j==b.size()){
            while(i<a.size())
            {
                result[k]=a[i];
                i++;
                k++;
            }
        }
                

}
}
void mergesort(vector<int> &v)
 {
    int n=v.size();
    if(n==1) return ;
    int n1=n/2 , n2=n-n/2;
    vector<int> a(n1) , b(n2);
    for(int i=0 ; i<n1 ; i++)
    {
        a[i] = v[i];
    }
    for(int i=0 ; i<n2 ; i++)
    {
        b[i] = v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);


 }

 //Q2)




 int main()
 {
    vector<int> v={5,6,7,2,8};
    mergesort(v);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
 }



    
