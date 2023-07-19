#include <iostream>
using namespace std;

void removechar(string ans , string original)
{
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removechar(ans , original.substr(1));
    else removechar(ans+ch , original.substr(1));
}

int main()
{
    string str = "vaidik parashar";
    removechar("" , str);
}