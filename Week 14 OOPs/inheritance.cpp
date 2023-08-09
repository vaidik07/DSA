#include <iostream>
using namespace std;

//Base class
class vehicle{
    private://not accessible and not inherited
    int vehicle_ka_private;

    protected: //can be inherited but can accsess in main
    int vehicle_ka_protected;

    public://both can be done
    int engine;
    int tyre;
};

//Derived classes
class car : protected vehicle{
    public:
    int steering;

    void protect(int a)
    {
        vehicle_ka_protected=a;
        cout<<vehicle_ka_protected<<endl;

    }
    car(){
        cout<<vehicle_ka_protected<<endl;
    }

};

class bike : vehicle {
    public:
    int handle;
};

class mechanic : public car , public bike{
    public:
    void setHandle(int a)
    {
        handle=a;
    }
};

int main()
{
    // car waganor;
    // waganor.protect(10);

    mechanic yo ;
    yo.setHandle(10);
    cout<<yo.handle;

}