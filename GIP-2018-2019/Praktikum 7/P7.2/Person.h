#pragma once

#include <iostream>
#include <string>

struct Person {
	std::string Name;
	std::string Firstname;
	std::string Birthday;
};

Person ParsePerson(std::string line);