#include <iostream>
using namespace std;

int main()
{

	unsigned int numbers[6] = { 0 };
	for (unsigned int i = 0; i < 6; ++i)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> numbers[i];
		} while (numbers[i] < 1 || numbers[i] > 6);
	}

	unsigned int searchNumber = 0;
	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	cin >> searchNumber;

	for (unsigned int i = 0; i < 6; ++i)
	{
		if (numbers[i] == searchNumber)
		{
			cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
			system("PAUSE");
			return 0;
		}
	}
	cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
	system("PAUSE");
	
}