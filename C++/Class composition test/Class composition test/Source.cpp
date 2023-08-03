#include <iostream>

class Birthday {
public:
	Birthday(std::string month, int day, int year) : month(month), day(day), year(year) {}
	void printDate() {
		std::cout << month << " " << day << " " << year << std::endl;
	}
private:
	std::string month;
	int day;
	int year;
};

class Person {

public:
	Person(std::string name, Birthday dDay) : name(name), dateOfBirth(dDay) {}
	
	void printInfo() {
		std::cout << name << std::endl;
		dateOfBirth.printDate();
	}

private:
	std::string name;
	Birthday dateOfBirth;
};

int main() {
	Person p1("John", Birthday("January", 1, 1980));
	Person p2("Jane", Birthday("February", 2, 1980));
	Person p3("Mary", Birthday("March", 3, 1980));
	Person p4("John", Birthday("April", 4, 1980));
	Person p5("John", Birthday("May", 5, 1980));
	Person p6("John", Birthday("June", 6, 1980));
	Person p7("John", Birthday("July", 7, 1980));
	Person p8("John", Birthday("August", 8, 1980));
	p1.printInfo();
	p2.printInfo();
	p3.printInfo();
	p4.printInfo();
	p5.printInfo();
	p6.printInfo();
	p7.printInfo();
	p8.printInfo();
	return 0;
}