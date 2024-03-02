//When 2 instances of base class are present int the derived class
//B derives A , C derives A , and D derives B+C
//Now D has 2 instances of A

#include <iostream>
using namespace std;

class A{
    public:
    int A_ka_public;
};

//When virtual keyword is used only one instance is created

class B : virtual public A{
    public:
    int B_ka_public;
};

class C : virtual public A{
    public:
    int C_ka_public;
};

class D : public B,public C{
    public:
    int D_ka_public;
    
};

int main()
{
    D d;
    d.A_ka_public=10; 
}

