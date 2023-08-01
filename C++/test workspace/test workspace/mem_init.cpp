#include "mem_init.h"]
#include <iostream>

MyClass::MyClass(int a, int b)
	: regVar(a), constVar(b) //Initialising the constant member variables
{
	std::cout << regVar << std::endl;
	std::cout << constVar << std::endl;
}

int main() {
	MyClass obj (7, 23);
}