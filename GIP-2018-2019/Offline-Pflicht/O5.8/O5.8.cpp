#include <iostream>
#include <string>
using namespace std;

string ersetze(string text, char charToReplace, string replaceWith)
{
	string s = "";
	for (unsigned int i = 0; i < text.length(); ++i)
	{
		if (text.at(i) == charToReplace)
		{
			s += replaceWith;
		}
		else
		{
			s += text.at(i);
		}
			
	}
	return s;
}

int main()
{
	string s1 = "", s2 = "";
	char c;
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s1);
	cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
	cin >> c;
	cin.ignore();
	cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
	getline(cin, s2);
	cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;
	system("PAUSE");
	return 0;
}