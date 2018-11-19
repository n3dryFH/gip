#include <iostream>
using namespace std;

int main()
{
	char c = 0;
	cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
	cin >> c;
	cout << "Der entsprechende Grossbuchstabe lautet: " << (char)(c - 32) << endl;

	system("PAUSE");
	return 0;
}