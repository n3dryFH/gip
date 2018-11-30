#include "Person.h"
#include "StringHelper.h"

Person ParsePerson(std::string line)
{
	Person p;
	p.Name = Remove(Split(line), ' ');
	p.Surname = Remove(Split(line), ' ');
	p.Birthday = Remove(Split(line), ' ');
	return p;
}
