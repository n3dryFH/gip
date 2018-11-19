#include <iostream>
using namespace std;

int main()
{
	int numbers[4] = { 0 };
	int compareValue = 0;
	for (unsigned int i = 0; i < 4; ++i)
	{
		cout << "Bitte geben Sie die "<< i+1 <<". Zahl ein: ? ";
		cin >> numbers[i];
	}
	cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
	cin >> compareValue;

	int sameValue = 0;
	for (unsigned int i = 0; i < 4; ++i)
	{
		if (numbers[i] == compareValue)
		{
			sameValue++;
		}
	}

	cout << sameValue <<" Eingabezahlen waren gleich der Vergleichszahl." << endl;
	cout << 4 - sameValue << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;


	system("PAUSE");

}