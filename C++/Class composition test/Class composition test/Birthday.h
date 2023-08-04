#pragma once
#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>

class Birthday {
public:
	Birthday(std::string month, int day, int year) : month(month), day(day), year(year) {}
	void printDate();

private:
	std::string month;
	int day;
	int year;
};

#endif // BIRTHDAY_H