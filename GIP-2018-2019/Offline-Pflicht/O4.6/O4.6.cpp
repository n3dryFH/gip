#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, s);
	cout << "Eingabetext: " << s << endl;
	cout << "Ergebnis: ";
	for (int i = s.length() - 1; i >= 0; --i)
	{
		cout << s.at(i);
	}
	cout << endl;
	system("PAUSE");
}