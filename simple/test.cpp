#include <iostream>


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


//Exercise 
int main() {
	int age;
	std::cin >> age;
	switch (age) {
		case 0 ... 3:
			std::cout << "Free";
			break;
		case 4 ... 6:
			std::cout << "discounted";
			break;
		case 7 ... 99999999:
			std::cout << "Normal";
			break;
	}
	return 0;
}