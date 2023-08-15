#include <iostream>

class Bird {
public:
	Bird() {
	}
	void birdCanFly(int arg) {
		bool flight = arg;
		if (flight) {
			std::cout << "Bird can fly" << std::boolalpha << flight << std::endl;
		}
		else {
			flight = false;
			std::cout << "Bird can't fly" << std::boolalpha << flight << std::endl;
		}
	}
};





class Phonix : public Bird {
public:
	Phoenix();
};


int main() {
	Phoenix arden;
	arden.birdCanFly(1);
	std::cout << "Press enter to continue..." << std::endl;
	std::cin.get();
}