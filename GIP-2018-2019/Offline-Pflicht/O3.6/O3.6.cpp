#include <iostream>
using namespace std;

int main()
{
	char c = 0;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;

	if (c == 'e')
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}
	else if (c >= '0' && c <= '9') {
		int value = c - '0';
		cout << value << " + 5 = " << value + 5 << endl;
	}
	else 
	{
		cout << "Weder 'e' noch Ziffer" << endl;
	}

	system("PAUSE");
}