#include <iostream>
#include "Person.h"
#include "Birthday.h"

void Person::printInfo() {
	std::cout << name << std::endl;
	dateOfBirth.printDate();
}