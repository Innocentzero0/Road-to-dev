#include <iostream>

class Bird {
public:
    void birdCanFly(bool flight) {
        flight;
        if (flight) {
            std::cout << "Bird can fly: " << std::boolalpha << flight << std::endl;
        }
        else {
            flight = false;
            std::cout << "Bird can't fly: " << std::boolalpha << flight << std::endl;
        }
    }
};


class Species {
public: 
    void speciesName() {
        std::string specie;
        std::cout << "What is the species name? ";
        std::cin >> specie;
        std::cout << "bird specie: " << specie <<std::endl;
    }
};

/*Protected members can also be accessed by the derived variables in the daughter class below
but private cannot be accessed
*/

class Phoenix: public Bird, public Species {
public:
};

/*
When inheriting classes, the base class' constructor and destructor are not inherited.
However, they are being called when an object of the derived class is created or deleted.
*/

/*
Note that the base class' constructor is called first, and the derived class' constructor is called next.
When the object is destroyed, the derived class' destructor is called, and then the base class' destructor is called.
You can think of it as the following: The derived class needs its base class in order to work - that is why the base class is set up first.
*/


int main() {
    Phoenix arden;
    bool flight;
    std::cout << "Can this Phoenix fly? (1/0)";
	std::cin >> flight;
    arden.birdCanFly(flight);
    arden.speciesName();
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}
