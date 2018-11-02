#include <iostream>
using namespace std;

int main()
{
	int biggestValue = 0, smallestValue = 0;
	for (int i = 0; i < 3; ++i)
	{
		int value = 0;
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> value;

		if (i == 0)
		{
			biggestValue = value;
			smallestValue = value;
			continue;
		}

		if (value > biggestValue)
			biggestValue = value;
		if (value < smallestValue)
			smallestValue = value;
	}

	cout << "Die kleinste eingegebene Zahl lautet: " << smallestValue << endl;
	cout << "Die groesste eingegebene Zahl lautet: " << biggestValue << endl;
	system("PAUSE");
	return 0;
}