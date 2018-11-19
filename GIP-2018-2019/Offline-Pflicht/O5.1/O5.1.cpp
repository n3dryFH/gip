#include <iostream>
using namespace std;

int main()
{
	int numbers[9] = { 0 };
	for (unsigned int i = 0; i < 9; ++i)
	{	
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> numbers[i];
		} while (numbers[i] < 1 || numbers[i] > 6);
	}

	for (unsigned int i = 0; i < 9; ++i)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << numbers[i] << endl;
	}

	system("PAUSE");
}