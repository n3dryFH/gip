#pragma once

#include <iostream>
#include <string>


// todo add namespace
struct Person {
	std::string Name;
	std::string Surname;
	std::string Birthday;
};

Person ParsePerson(std::string line);