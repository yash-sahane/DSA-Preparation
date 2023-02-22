#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    Hero(int health)
    {
        this->health = health;
    }

    int getHealth()
    {
        return this->health;
    }
};

main()
{

    Hero h1(100);
    cout << h1.getHealth();

    Hero *b = new Hero(100);
    cout << (*b).getHealth();
}