#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "Birthday.h"

class Person {
	friend class Birthday;
public:
	Person(std::string name, Birthday dDay) : name(name), dateOfBirth(dDay) {}
	void printInfo();

private:
	std::string name;
	Birthday dateOfBirth;
};

#endif //PERSON_H