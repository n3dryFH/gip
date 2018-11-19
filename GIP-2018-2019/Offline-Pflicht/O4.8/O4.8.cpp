#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	string c = "";
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, s);
	cout << "Bitte Buchstaben eingeben: ? ";
	getline(cin, c);
	unsigned int counter = 0;
	for (unsigned int i = 0; i < s.length(); ++i)
	{
		if (c.at(0) == s.at(i))
		{
			counter++;
		}
	}
	cout << "Der Buchstabe " << c << " kommt " << counter << " mal im Text vor." << endl;
	system("PAUSE");
}