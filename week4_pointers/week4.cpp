#include <iostream>
using namespace std ;

int square(int n)
{
    int sum=0;

    for(int i=0; i<=n ; i++)
    
        sum += (i*i);
    

    return sum;
}

void area(int n)
{
    cout<<"Area = "<<2*3.14*n<<endl;
}


void odd(int a ,int b)
{

    if(a % 2 ==1 )
    {
       for(int i=0 ;a+i<=b;i=i+2 )
       {
            cout<<a+i<<endl;
       }
    }
    else if(a%2==0)
    {
        for(int i=0 ;(a+2*i+1)<=b;i++ )
        {
            cout<<a+2*i+1<<endl;
        }
    }
}



int main()
{
    odd(1,8);


}