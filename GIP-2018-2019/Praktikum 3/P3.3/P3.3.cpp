#include <iostream>
using namespace std;

int main()
{
	char input1 = 0, input2 = 0;
	int ret = 0;

	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> input1;

	cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	cin >> input2;

	if (input1 == 'q' || input2 == 'q')
	{
		cout << "Das Programm wurde durch Eingabe von q beendet." << endl;
		ret = 1;
	}
	else 
	{
		int value1 = input1 - '0';
		int value2 = input2 - '0';
		cout << value1 << " + " << value2 << " = " << value1 + value2 << endl;
	}

	system("PAUSE");
	return ret;
}