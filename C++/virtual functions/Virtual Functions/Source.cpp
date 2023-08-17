#include <iostream>
using namespace std;

/*To be able to call the corresponding attack() function for each of the derived classes using 
Enemy pointers, we need to declare the base class function as virtual.
Defining a virtual function in the base class, with a corresponding version in a derived class, 
allows polymorphism to use Enemy pointers to call the derived classes' functions.
Every derived class will override the attack() function and have a separate implementation:*/
class Enemy {
public:
    virtual void attack() { }
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};

//The virtual member functions without definition are known as pure virtual functions.They basically specify that the derived classes define that function on their own.

//The syntax is to replace their definition by = 0 (an equal sign and a zero) :

class Enemy {
    public:
        virtual void attack() = 0;
};

int main() {
    Ninja n;
    Monster m;
    Enemy* e1 = &n;
    Enemy* e2 = &m;

    e1->attack();
    e2->attack();
}
/*
A virtual function is a base class function that is declared using the keyword virtual.
*/