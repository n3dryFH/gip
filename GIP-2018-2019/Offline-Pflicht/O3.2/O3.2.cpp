#include <iostream>
using namespace std;

int main()
{
	char c = 0;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;

	if (c == 'j' || c == 'J')
		cout << "Es handelt sich um eine Ja Eingabe." << endl;
	else if (c == 'n' || c == 'N')
		cout << "Es handelt sich um eine Nein Eingabe." << endl;
	else 
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;

	system("PAUSE");
}