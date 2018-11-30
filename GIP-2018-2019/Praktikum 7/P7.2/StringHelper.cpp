#include "StringHelper.h"

std::string Split(std::string& text, const char c)
{
	std::string newString = "", rest = "";
	bool foundChar = false;
	for (unsigned int i = 0; i < text.length(); ++i)
	{
		if (!foundChar && text.at(i) == c)
		{
			foundChar = true;
			continue; // skip adding c to string
		}

		if (foundChar)
		{
			rest += text.at(i);
		}
		else
		{
			newString += text.at(i);
		}
	}
	text = rest;
	return newString;
}

std::string Replace(const std::string& text, const char replaceChar, const std::string& replaceWith)
{
	std::string newString = "";
	for (unsigned int i = 0; i < text.length(); ++i)
	{
		if (text.at(i) == replaceChar)
		{
			newString += replaceWith;
		}
		else 
		{
			newString += text.at(i);
		}
		
	}
	return newString;
}

std::string Remove(const std::string& text, const char charToRemove)
{
	std::string newString = "";
	for (unsigned int i = 0; i < text.length(); ++i)
	{
		if (text.at(i) != charToRemove)
		{
			newString += text.at(i);
		}
	}
	return newString;
}
