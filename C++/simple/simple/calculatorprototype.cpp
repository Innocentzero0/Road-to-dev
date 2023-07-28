#include <iostream>

/*working on learning error handling with the syntax throw std::runtime_error()
* and the try function
* try
 {
	this line holds what calculation to be tried
 }
 catch (const std::exception& (variable name where the error should be stored))
 {
	you print out the error message that was thrown in the throw syntax above for example:
	std::cout << (variable name where the error should be stored).what() << std::endl;
 )
*/


int division(int value1, int value2) {
	if (value2 == 0) {
		throw std::runtime_error("Error: division by zero not allowed");
	}
	return value1 / value2;
}

int addition(int value1, int value2) {
	int add = value1 + value2;
	return add;
}

int multiplication(int value1, int value2) {
	int multiply = value1 * value2;
	return multiply;
}

int subtraction(int value1, int value2) {
	int minus = value1 - value2;
	return minus;
}


void calculator_output() {
	int value1, value2;
	std::cout << "input value1: ";
	std::cin >> value1;
	std::cout << "input value2: ";
	std::cin >> value2;

	std::cout << addition(value1, value2) << std::endl;
	std::cout << subtraction(value1, value2) << std::endl;
	std::cout << multiplication(value1, value2) << std::endl;
	try
	{
		std::cout << division(value1, value2);
	}
	catch (const std::exception& error)
	{
		std::cout << "Error: " << error.what() << std::endl;
	}
	std::system("pause");
}

