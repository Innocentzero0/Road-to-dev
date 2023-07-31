#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {
	std::cout << "Constructor" << std::endl;
}

MyClass::~MyClass() {
	std::cout << "Destructor" << std::endl;
}

void MyClass::print() {
	std::cout << "method" << std::endl;
}

