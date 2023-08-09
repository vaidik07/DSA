#include <iostream>
using namespace std;

class bike{
    public:
    static int noOfBikes;
    int tyreSize;
    int engine;
    //constructor
    // bike(int tyreSize , int engine){
    //     this->tyreSize = tyreSize;
    //     this->engine = engine;
    // }

    //The above constructor can also be written as

    bike(int ts , int es) : tyreSize(ts) , engine(es){}
    //constructor overloading
    bike(int ts) : tyreSize(ts) , engine(100){}

    //destructor
    ~bike(){
        cout<<"Destructor called"<<endl;
    }


};
    int bike:: noOfBikes=10;



    //Function Overloading
    void calculateArea(int length , int breadth){
        cout<<length*breadth<<endl;
    }

    void calculateArea(int side)
    {
        cout<<side*side<<endl;
    }

int main()
{
    // bike tvs(12 , 100);
    // bike hero(13 , 150);
    // cout<<tvs.tyreSize<<endl;
    // cout<<hero.tyreSize<<endl;

    // hero.noOfBikes = 20;

    // cout<<tvs.noOfBikes<<endl;
    // cout<<hero.noOfBikes<<endl;

        
//Function Overloading
    calculateArea(10, 10);
    calculateArea(8);
}