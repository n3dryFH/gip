#pragma once

#include <string>

class CharListenKnoten;

class MyString2 
{
public:
	MyString2();
	MyString2(const std::string& str);
	MyString2(const MyString2& mystr); // Copy Constructor
	~MyString2();	

	unsigned int length() const;
	char at(const unsigned int pos) const;
	std::string to_string() const;

	MyString2& operator = (const MyString2& mystr);
	MyString2 operator + (char c) const;

	inline CharListenKnoten* get_anker() const { return anker; }

	friend void friend_append_internal(MyString2& s, char p_data);
	friend void friend_delete_internal(MyString2& s);
	friend CharListenKnoten* friend_deep_copy_internal(MyString2& s);

private:	
	void append_internal(char p_data);
	void delete_internal();
	CharListenKnoten* deep_copy_internal() const;

	// private Member
	CharListenKnoten* anker;
};
