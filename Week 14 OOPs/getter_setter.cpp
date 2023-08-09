#include <iostream>
using namespace std;

class player{
    private:
    int health ;
    int score;
    //Things in private cannot be accessed outside class

    public:
    int setterHealth(int h)
    {
        health = h;
    }
    int getterHealth()
    {
        return health;
    }
    int setterScore(int score)
    {
        this->score = score;
        return score;
    }
    int getterScore()
    {
        return score;       
    }

};
player maxHealth(player a , player b)//passing class as an argument in function
{
    if(a.getterHealth()>b.getterHealth())
    return a;

    else return b;
}

int main()
{
    player vaidik;//object creation satically 
    vaidik.setterHealth(10);
    player vatsal;
    vatsal.setterHealth(20);
    vatsal.setterScore(100);
    vaidik.setterScore(50);

    player max = maxHealth(vaidik , vatsal);
    cout<<max.getterHealth()<<endl;
    //object creation dynamically 
    player *mummma = new player ;
    mummma->setterHealth(40);
    cout<<mummma->getterHealth()<<endl; //this is equal to (*mummaa).getterhealth()
}