#include <iostream>



//infinity loop
void infinity1() {
	int n = 1;
	while (n != 0) {
		n = n + 1;
		std::cout << n << std::endl;
	}
}

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

//switch statemens

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

// for each loop iteratu=ing over an array

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


// pointers
int num = 56;
int *p = &num;

void pointer() {
    std::cout << *p;
}

// pointers in arrays
//
void three_price_list() {
	double prices[] = { 6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2 };
	double *p = prices;
	std::cout << *p << std::endl; //the output is 6.99 because the variable the array is in is also a pointer to the first value in the array so to print the second value it'll be *(p+1)
	std::cout << *(p + 1) << std::endl; // 2nd value in the array
	std::cout << *(p + 2) << std::endl; // 3rd value in the array
}

//Prints out the values in the array 
void item_list() {
	int items[] = { 699, 85, 429, 1054, 42, 981, 239, 199, 6876, 999, 3367, 105, 99, 67, 2456, 2, 5987, 772 };
    for (int item: items) {
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

//Time Converter

int toSeconds(int days) {
	return (days * 24 * 60 * 60);
}

double toSeconds(double days) {
	return (days * 24 * 60 * 60);
}

void converter() {
	double days;
	std::cin >> days;

	double seconds = toSeconds(days);
	std::cout << seconds;

	std::cout << std::endl;

	int days2;
	std::cin >> days2;

	int seconds2 = toSeconds(days2);
	std::cout << seconds2;
}


/*
Enum classes
the 'shade' is the class/type and the value in the curly braces are 
the attainable values of any variable delcared with the enum class/type
*/
enum class Shade { Dark, Dim, Light, Bright }; 
enum class Weight { Light, Medium, Heavy };

Shade color = Shade::Light;
Weight mass = Weight::Light;

/* To be able to print out the values of enum classes you have to use type casting
* the syntax goes like std::cout << static_cast<the_new_type>(the_enum_class_value eg shade::Light)
* To assign a new type to the enum class you also need to use type casting like this:
* new variable = static_cast<new variable type>(enum value)
* 
* you can also use type casting to change the data type of a variable forcefully
*/
// void was used because it is not to return values
void all_characters() {
	int c;
	for (c = 0; c <= 127; c++) {
		char ask = c;
		std::cout << ask << std::endl;
		ask++;
	}
}



enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

Day day = Day::Saturday;





int division(int value1, int value2) {
	int divide = value1 / value2;
	if (value2 == 0) {
		std::cout << "ERROR" << std::endl;
		return 0;
	}
	return divide;
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


int main() {
	int value1, value2;
	std::cout << "input value1: ";
	std::cin >> value1;
	std::cout << "input value2: ";
	std::cin >> value2;

	std::cout << addition(value1, value2) << std::endl;
	std::cout << subtraction(value1, value2) << std::endl;
	std::cout << multiplication(value1, value2) << std::endl;
	std::cout << division(value1, value2) << std::endl;
}
