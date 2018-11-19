#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input = "";
	string replaceChar = "";
	string newChar = "";
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, input);
	cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
	getline(cin, replaceChar);
	cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
	getline(cin, newChar);
	cout << "Der Text nach der Ersetzung: ";
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (input.at(i) == replaceChar.at(0))
		{
			cout << newChar;
		}
		else
		{
			cout << input.at(i);
		}
	}
	cout << endl;
	system("PAUSE");
}