#include <iostream>
#include <string>
using namespace std;

struct T_Morse_Data
{
	char letter;
	std::string morse_code;
};

const int morse_data_len = 45;

const T_Morse_Data morse_data[] = {
 { 'a', ".-" },
 { 'b', "-..." },
 { 'c', "-.-." },
 { 'd', "-.." },
 { 'e', "." },
 { 'f', "..-." },
 { 'g', "--." },
 { 'h', "...." },
 { 'i', ".." },
 { 'j', ".---" },
 { 'k', "-.-" },
 { 'l', ".-.." },
 { 'm', "--" },
 { 'n', "-." },
 { 'o', "---" },
 { 'p', ".--." },
 { 'q', "--.-" },
 { 'r', ".-." },
 { 's', "..." },
 { 't', "-" },
 { 'u', "..-" },
 { 'v', "...-" },
 { 'w', ".--" },
 { 'x', "-..-" },
 { 'y', "-.--" },
 { 'z', "--.." },
 { '0', "-----" },
 { '1', ".----" },
 { '2', "..---" },
 { '3', "...--" },
 { '4', "....-" },
 { '5', "....." },
 { '6', "-...." },
 { '7', "--..." },
 { '8', "---.." },
 { '9', "----." },
 // Leerzeichen zur Worttrennung werden im Morsecode
 // durch einen Slash '/' umgeben von Leerzeichen
 // dargestellt ...
 // (Alternative: Trennung durch 3 Leerzeichen)
 // Hier bei uns, um die Testläufe eindeutiger zu
 // machen: Trennung mittels drei Slashes
 { ' ', "///" },
 { '.', ".-.-.-" },
 { ',', "--..--" },
 { ':', "---..." },
 { '?', "..--.." },
 { '-', "-....-" },
 { '/', "-..-." },
 { '@', ".--.-." },
 { '=', "-...-" }
};

string GetMorseString(const char c)
{
	char lowerCaseChar = c;	
	if (c >= 'a' && c <= 'z')
		lowerCaseChar = c;
	else if (c >= 'A' && c <= 'Z')
		lowerCaseChar = c + 32;	
	for (unsigned int i = 0; i < morse_data_len; ++i)
	{
		if (morse_data[i].letter == lowerCaseChar)
			return morse_data[i].morse_code;
	}
	return "";
}

int main()
{
	string s = "";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, s);

	for (unsigned int i = 0; i < s.length(); ++i)
	{
		cout << GetMorseString(s.at(i)) << '#'; 
	}
	cout << endl;

	system("PAUSE");
	return 0;
}