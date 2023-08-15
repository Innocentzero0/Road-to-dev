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
