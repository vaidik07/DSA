#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v={2,-3,4,-7,-1,4,-2,6};
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    int n=v.size();
    int k=2;
    int idx=-1;
    for(int i=0 ; i<k ; i++)
    {
        if(v[i]<0){
            ans.push_back(v[i]);
            idx=i;
            break;
        }
    }
    int i=1;
    int j=k;
    while(j<n)
    {
        if(idx>=i)
        {
            ans.push_back(v[idx]);

        }
        else{
            for(idx=i ; idx<=j ; idx++)
            {
                if(v[idx]<0)
                {
                    ans.push_back(v[idx]);
                    break;
                }
            }
        }
        i++;
        j++;
    }

    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }


}
