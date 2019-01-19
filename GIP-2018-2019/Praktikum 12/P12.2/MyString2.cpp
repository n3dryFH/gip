#include "MyString2.h"
#include "CharListenKnoten.h"

MyString2::MyString2() : anker(nullptr) {}

MyString2::MyString2(const std::string& str) : anker(nullptr)
{
	if (str.length() == 0)
		return;
		
	for (unsigned int i = 0; i < str.length(); ++i)
		append_internal(str.at(i));	
}

MyString2::MyString2(const MyString2& mystr) : anker(nullptr)
{	
	anker = mystr.deep_copy_internal();
}

MyString2::~MyString2()
{
	delete_internal();
}

void MyString2::append_internal(char p_data)
{
	if (!anker)
		anker = new CharListenKnoten(p_data);
	else
		anker->add(p_data);
}

void MyString2::delete_internal()
{	
	CharListenKnoten* ptr = anker;	
	while(ptr)
	{
		CharListenKnoten* next = ptr->get_next();
		delete ptr;
		ptr = next;
	}	
	anker = nullptr;
}

CharListenKnoten* MyString2::deep_copy_internal() const
{
	if (!anker)
		return nullptr;

	CharListenKnoten* copy = new CharListenKnoten(anker->get_data());
	CharListenKnoten* ptr = anker->get_next();	
	while (ptr)
	{
		copy->add(ptr->get_data());
		ptr = ptr->get_next();
	}		
	return copy;
}

unsigned int MyString2::length() const
{
	unsigned int len = 0;
	CharListenKnoten* ptr = anker;
	while (ptr)
	{
		++len;
		ptr = ptr->get_next();
	}
	return len;
}

char MyString2::at(const unsigned int pos) const
{
	char c = '\0';
	unsigned int counter = 0;
	CharListenKnoten* ptr = anker;
	while (ptr)
	{
		if (pos == counter)
		{
			c = ptr->get_data();
			break;
		}
		ptr = ptr->get_next();
		++counter;
	}
	return c;
}

std::string MyString2::to_string() const
{
	std::string str = "";
	CharListenKnoten* ptr = anker;
	while (ptr)
	{
		str += ptr->get_data();
		ptr = ptr->get_next();
	}
	return str;
}

MyString2& MyString2::operator=(const MyString2& my_str)
{
	if (anker)
		delete_internal();

	anker = my_str.deep_copy_internal();
	return *this;
}

MyString2 MyString2::operator+(char c) const
{
	MyString2 my_str = *this;	// call copy constructor
	my_str.append_internal(c);
	return my_str;
}
