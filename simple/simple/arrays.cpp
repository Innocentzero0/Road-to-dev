#include <iostream>

// arrays
void arrays() {
	double arr[] = { 1, 2, 3, 4, 5, 6 };              //declare the variable type of the array and equate it to the array values in curly braces
}

//loops with arrays

void array_loop() {
	double prices[] = { 45.4, 48.3, 65.1, 3.65, 5.78 };
	for (int i = 0; i < 5; i++) {
		std::cout << prices[i] << std::endl;
	}
}

//learnt something new i guess
void price1() {
	double prices[] = { 45.4, 48.3, 65.1, 3.65, 5.78 };
	for (int i = 0; i < 5; i++) {
		std::cout << prices[i] << std::endl;
	}
}

// for each loop iterating over an array

void loop_arrays() {
	double prices[] = { 45.4, 48.3, 65.1, 3.65, 5.78 };
	for (double x : prices) {   // this automatically assigns x(which can be anything, it doesn't have to be named x) to each value in the array
		std::cout << x << std::endl;
	}
}

// function to calculate the total price in a shopping cart

void list_prices() {
	double prices[] = { 6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2 };
	double total = 0;
	for (double price : prices) {
		total += price;
	}
	std::cout << total;
}

//multidimensional array
int seats[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
};
void multidimensional_arrays() {
	std::cout << seats[1][2];
}

// pointers in arrays
//
void three_price_list() {
	double prices[] = { 6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2 };
	double* p = prices;
	std::cout << *p << std::endl; //the output is 6.99 because the variable the array is in is also a pointer to the first value in the array so to print the second value it'll be *(p+1)
	std::cout << *(p + 1) << std::endl; // 2nd value in the array
	std::cout << *(p + 2) << std::endl; // 3rd value in the array
}

//Prints out the values in the array 
void item_list() {
	int items[] = { 699, 85, 429, 1054, 42, 981, 239, 199, 6876, 999, 3367, 105, 99, 67, 2456, 2, 5987, 772 };
	for (int item : items) {
		std::cout << items[item] << std::endl;
	}
}

void list_array() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << seats[i][j] << std::endl;
		}
	}
}