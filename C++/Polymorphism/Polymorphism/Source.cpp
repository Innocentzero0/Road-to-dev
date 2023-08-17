#include <iostream>
using namespace std;

/*In polymorphism you can have a single function with different parameters to multiple derived classes.
this is achieved through the use of pointers to reference the function that needs to be derived*/

class Enemy {
protected:
    int attackPower;
public:
    void setAttackPower(int a) {
        attackPower = a;
    }
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja! - " << attackPower << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster! - " << attackPower << endl;
    }
};

int main() {
    Ninja n;
    Monster m;
    Enemy* e1 = &n;
    Enemy* e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    n.attack();
    m.attack();
}