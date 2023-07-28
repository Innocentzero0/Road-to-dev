#include <iostream>

void infinity2() {
	int count = 1;
	while (true) {
		std::cout << count << std::endl;
		count++;
	}
}

void auto_statement() {
	auto x = 21, y = 16, z = 5;
	int add = x + y + z;
	std::cout << add << '\n';
}



void change_calculator() {
	auto balance = 2452.4;
	auto price = 259.99;
	double canafford = balance / price;
	double total_spent = canafford * price;
	auto change = balance - total_spent;
	std::cout << "i can afford " << canafford << " books\n";
	std::cout << "And will have " << change << " left\n";
}

void age() {
	int age, name;
	std::cout << "please enter you age: ";
	std::cin >> age >> name;
	std::cout << "i'm " << age << " years old" << std::endl;
}

void age_limit() {
	//your code goes here
	int age;
	std::cin >> age;
	if (age >= 16) {
		std::cout << "welcome";
	}
	else {
		std::cout << "not allowed";
	}
}

//switch statements

void life() {
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1:
		std::cout << "love";
		break;
	case 2:
		std::cout << "money";
		break;
	case 3:
		std::cout << "broke life";
		break;
	default:
		std::cout << "You never ready for this life";
		break;

	}
}

void and_statement() {
	// the && or and statement is used to join conditionals together
	double temp = 60;
	if (temp >= 45 and temp <= 90) {      //can also be written as temp >= 45 && temp <= 90
		std::cout << "OK";
	}
}

void multiple_choice() {
	int x = 4, y = 2;
	if (!(x > 10 and y > 1)) {
		std::cout << "you understand maths";
	}
	else {
		"you dumb fuck";
	}
}


// Chain of multiple statements

void chain() {
	double accbal = 5000, gpu_price = 1900.65, power_supply = 150.99;
	if ((gpu_price < 2000 or power_supply < 1000) and accbal > 2200) {
		std::cout << "theres enough to buy what i need\n";
	}
}


//Exercise --This code is correct but will not run in visual studio because it doest support the GCC compiler
//int main() {
//	int age;
//	std::cin >> age;
//	switch (age) {
//		case 0 ... 3:
//			std::cout << "Free";
//			break;
//		case 4 ... 6:
//			std::cout << "discounted";
//			break;
//		case 7 ... 99999999:
//			std::cout << "Normal";
//			break;
//	}
//	return 0;
//}


// for loops 

void loop1() {
	for (double i = 10; i >= 2; i /= 2) {
		std::cout << i << std::endl;
	}
}

 //while loop
void loop2() {
	int i = 12;
	while (i >= 6) {
		std::cout << "there are still enough people" << '\n';
		i--;
	}
}


//do while loop

 void loop3() {
	int i = 5;
	do {
		i += 2;
		std::cout << i << '\n';
	} while (i <= 40);
}



// pointers
int num = 56;
int *p = &num;

void pointer() {
    std::cout << *p;
}

// array functions
void arrays();

void array_loop();

void price1();

void loop_arrays();

void list_prices();

void multidimensional_arrays();

void three_price_list();

void item_list();

void list_array();

void hello() {
    std::cout << "Hello!" << std::endl;
    std::cout << "I am a sample function";
}
//note void is the only function that does not return a value

//function overloading is defining the same function but with a different data type as seen below 

void sum(int x, int y) {
	std::cout << x + y << std::endl;
}
void sum(double x, double y) {
	std::cout << x + y << std::endl;
}

//You cannot overload function declarations that differ only by return type, The following declaration results in an error
//int demo(int x) {
//	return x;
//}
//double demo(int x) {
//	return x / 2;
//}


void addition() {
	sum(42, 31);
	sum(3.14, 5.66);
}

/*Another handy thing when working with functions are default arguments, When defining a function, you can specify 
a default value for each of the last parameters, If the corresponding argument is missing when you call a function,
it uses the provided default value.
*/
int area(int x, int y = 1) {
	return x * y;
}

void default_area() {
	std::cout << area(8, 5) << std::endl;
	std::cout << area(6) << std::endl;
}

/*
The name of a destructor will be exactly the same as the class, only 
prefixed with a tilde(~).A destructor can't return a value or take any parameters.

*/
class MyClass {
public:
	~MyClass() {
		// some code
	}
};


double physics_constants();

void statement();

void statement2();

void statement3();

double number_days();


// calculator prototype

void calculator_output();


int main() {
}