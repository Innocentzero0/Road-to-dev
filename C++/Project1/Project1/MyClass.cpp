#include "MyClass.h"
#include <iostream>


MyClass::MyClass() {
	std::cout << "Constructor" << std::endl;
}

MyClass::~MyClass() {
	std::cout << "Destructor" << std::endl;
}

void MyClass::myMethod() {		//method definition
	std::cout << "Method" << std::endl;
}
