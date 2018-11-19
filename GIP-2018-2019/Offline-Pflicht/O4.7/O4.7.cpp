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

	int lastKnownPos = -1;

	for (unsigned int i = 0; i < s.length(); ++i)
	{
		if (c.at(0) == s.at(i))
		{
			lastKnownPos = i;
		}
	}

	if (lastKnownPos >= 0)
	{
		cout << "Der Buchstabe " << c << " kommt im Text vor, an Position " << lastKnownPos << "." << endl;
	}
	else
	{
		cout << "Der Buchstabe " << c << " kommt nicht im Text vor." << endl;
	}

	system("PAUSE");
}