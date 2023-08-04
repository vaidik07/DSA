#include <iostream>
using namespace std;

int decimal_to_binary(string &binary)
{
    int n=binary.size();
    int result=0;
    for(int i=n-1 ; i>=0 ; i--)
    {
        char ch =binary[i];
        int num = ch-'0';
        result=result+num*(1<<(n-i-1));
    }
    return result;
}

string binary_to_decimal(int num)
{
    string result;
    
    while(num>0)
    {
        if(num%2==0)
        {
            result +='0';
        }
        if(num%2==1)
        {
            result += '1';
        }
        //num=num/2;
        num=num>>1;
        //num=num*2    
        //num=num<<1

    }
    return result;
}

int main()
{
    string str="00011";
    cout<<decimal_to_binary(str)<<endl;;
    cout<<binary_to_decimal(3);
}
