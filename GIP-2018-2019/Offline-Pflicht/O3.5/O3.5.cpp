#include <iostream>
using namespace std;

int main()
{
	char c = 0;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;

	if (c >= 'a' && c <= 'z')
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
	else
		cout << "KEIN Kleinbuchstabe (a-z)." << endl;

	system("PAUSE");
}