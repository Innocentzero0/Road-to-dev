#include <iostream>

double physics_constants() {
	const double avogadros_number = 6.022e23, c = 2.998e8;
	std::cout << "Avogadro's number = " << avogadros_number << '\n';
	std::cout << "speed of light = " << c << '\n';
	std::cin.get();
	return avogadros_number, c;
}