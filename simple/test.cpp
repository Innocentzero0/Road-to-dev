#include <iostream>
using namespace std;

//int main() {
//	int n = 1;
//	while (n != 0) {
//		n = n + 1;
//		std::cout << n << std::endl;
//	}
//	return 0;
//}
//
//int main() {
//	int count = 1;
//	while (true) {
//		std::cout << count << std::endl;
//		count++;
//	}
//	return 0;
//}
//
//int main() {
//	auto x = 21, y = 16, z = 5;
//	int add = x + y + z;
//	std::cout << add << '\n';
//	return 0;
//}
//
//
//
//int main() {
//	auto balance = 2452.4;
//	auto price = 259.99;
//	int canafford = balance / price;
//	double total_spent = canafford * price;
//	auto change = balance - total_spent;
//	std::cout << "i can afford " << canafford << " books\n";
//	std::cout << "And will have " << change << " left\n";
//	return 0;
//}
//
//int main() {
//	int age, name;
//	std::cout << "please enter you age: ";
//	std::cin >> age >> name;
//	std::cout << "i'm " << age << " years old" << std::endl;
//	return 0;
//}
//
//int main() {
//	//your code goes here
//	int age;
//	cin >> age;
//	if (age >= 16) {
//		cout << "welcome";
//	}
//	else {
//		cout << "not allowed";
//	}
//	return 0;
//}
//
//switch statemens
//
//int main() {
//	int choice;
//	std::cin >> choice;
//	switch (choice) {
//	case 1:
//		cout << "love";
//		break;
//	case 2:
//		cout << "money";
//		break;
//	case 3:
//		cout << "broke life";
//		break;
//	default:
//		cout << "You never ready for this life";
//		return 0;
//
//	}
//}

//int main() {
//	// the && or and statement is used to join conditionals together
//	double temp = 60;
//	if (temp >= 45 and temp <= 90) {      //can also be written as temp >= 45 && temp <= 90
//		std::cout << "OK";
//	}
// return 0;
//}

//int main() {
//	int x = 4, y = 2;
//	if (!(x > 10 and y > 1)) {
//		std::cout << "you understand maths";
//	}
//	else {
//		"you dumb fuck";
//	}
//	return 0;
//}


// Chain of multiple statements

//int main() {
//	double accbal = 5000, gpu_price = 1900.65, power_supply = 150.99;
//	if ((gpu_price < 2000 or power_supply < 1000) and accbal > 2200) {
//		std::cout << "theres enough to buy what i need\n";
//	}
//	return 0;
//}


//Exercise --This code is correct but will not run in visual studio because it doest support the GCC compiler
//int main() {
//	int age;
//	cin >> age;
//	switch (age) {
//		case 0 ... 3:
//			cout << "Free";
//			break;
//		case 4 ... 6:
//			cout << "discounted";
//			break;
//		case 7 ... 99999999:
//			cout << "Normal";
//			break;
//	}
//	return 0;
//}


// for loops 

//int main() {
//	for (double i = 10; i >= 2; i /= 2) {
//		std::cout << i << std::endl;
//	}
//	return 0;
//}

// while loop

//int main() {
//	int i = 12;
//	while (i >= 6) {
//		std::cout << "there are still enough people" << '\n';
//		i--;
//	}
//}


//do while loop

//int main() {
//	int i = 5;
//	do {
//		i += 2;
//		std::cout << i << '\n';
//	} while (i <= 40);
//	return 0;
//}

// attays
//int main() {
//	double arr[] = {1, 2, 3, 4, 5, 6}                //declear the variable type of the array and equate it to the array values in curly braces
//}

//loops with arrays

//int main() {
//	double prices[] = { 45.4, 48.3, 65.1, 3.65, 5.78 };
//	for (int i = 0; i < 5; i++) {
//		std::cout << prices[i] << std::endl;
//	}
//	return 0;
//}

/// <summary>
/// learnt something new i guess
/// </summary>
double prices[] = { 45.4, 48.3, 65.1, 3.65, 5.78 };
//int main() {
//	for (int i = 0; i < 5; i++) {
//		std::cout << prices[i] << std::endl;
//	}
//}

// for each loop iteratu=ing over an array

//int main() {
//	for (double x : prices) {   // this automatically assigns x(which can be anything, it doesn't have to be named x) to each value in the array
//		std::cout << x << std::endl;
//	}
//	return 0;
//}

// function to calculate the total price in a shopping cart

int main() {
    double prices[] = { 6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2 };
    double total = 0;
    for (double price : prices) {
        total += price;
    }
    std::cout << total;
    return 0;
}