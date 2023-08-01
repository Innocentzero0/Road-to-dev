#include "ConstantClass.h"
#include <iostream>


/*
Only non - const objects can call non - const functions.

A constant object can't call regular functions. Hence, for a constant object to work you need a constant function. 

To specify a function as a const member, the const keyword must follow the function prototype, outside of its parameters' closing parenthesis. For const member functions that are defined outside of the class definition, the const keyword must be used on both the function prototype and definition. For example:
*/



void MyClass::myPrint() const {
	std::cout << "Hello" << std::endl;
}

int main() {
	const MyClass obj;
	obj.myPrint();
}