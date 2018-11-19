#include <iostream>
using namespace std;

int main()
{
	int greatest = 0, smallest = 0;
	int numbers[5] = { 0 };
	for (unsigned int i = 0; i < 5; ++i)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> numbers[i];
		if (numbers[i] > greatest || i == 0)
			greatest = numbers[i];
		if (numbers[i] < smallest || i == 0)
			smallest = numbers[i];
	}
	for (unsigned int i = 0; i < 5; ++i)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << numbers[i] << endl;
	}
	cout << "Die kleinste eingegebene Zahl lautete: " << smallest << endl;
	cout << "Die groesste eingegebene Zahl lautete: " << greatest << endl;

	system("PAUSE");
}