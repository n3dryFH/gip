#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
	cin >> s;
	if (s == "ende")
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}
	else
	{
		int no = 0;
		cout << "Der doppelte Wert betraegt: ";
		for ( int i = s.length()-1, factor = 1; i >= 0; --i, factor *= 10)
		{
			no += (s.at(i) - '0') * factor;
		}
		cout << no * 2 << endl;
	}

	system("PAUSE");
}