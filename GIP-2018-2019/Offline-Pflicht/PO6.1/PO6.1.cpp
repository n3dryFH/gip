#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil) 
{
	bool foundChar = false;
	for (int i = 0; i < eingabe.length(); ++i)
	{
		if (!foundChar && eingabe.at(i) == zeichen)
		{
			foundChar = true;
			continue;
		}			

		if (foundChar) 
		{
			zweiter_teil += eingabe.at(i);
		}
		else 
		{
			erster_teil += eingabe.at(i);
		}
	}
}

int main()
{
	string s = "", erster_teil = "", zweiter_teil = "";

	char c = 0;
	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, s);

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;

	spalte_ab_erstem(c, s, erster_teil, zweiter_teil);
	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;

	system("PAUSE");
	return 0;
}