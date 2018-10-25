#include <iostream>
using namespace std;

int main()
{
	int smallestValue = 0, smallestValueIndex = 0,
		highestValue = 0, highestValueIndex = 0,
		value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0;

	cout << "Bitte geben Sie die 1. Zahl ein: ? ";
	cin >> value1;		
	smallestValue = value1;
	smallestValueIndex = 1;	
	highestValue = value1;
	highestValueIndex = 1;	

	cout << "Bitte geben Sie die 2. Zahl ein: ? ";
	cin >> value2;
	if (value2 < smallestValue)
	{
		smallestValue = value2;
		smallestValueIndex = 2;
	}
	if (value2 > highestValue)
	{
		highestValue = value2;
		highestValueIndex = 2;
	}

	cout << "Bitte geben Sie die 3. Zahl ein: ? ";
	cin >> value3;
	if (value3 < smallestValue)
	{
		smallestValue = value3;
		smallestValueIndex = 3;
	}
	if (value3 > highestValue)
	{
		highestValue = value3;
		highestValueIndex = 3;
	}

	cout << "Bitte geben Sie die 4. Zahl ein: ? ";
	cin >> value4;
	if (value4 < smallestValue)
	{
		smallestValue = value4;
		smallestValueIndex = 4;
	}
	if (value4 > highestValue)
	{
		highestValue = value4;
		highestValueIndex = 4;
	}

	cout << "Bitte geben Sie die 5. Zahl ein: ? ";
	cin >> value5;
	if (value5 < smallestValue)
	{
		smallestValue = value5;
		smallestValueIndex = 5;
	}
	if (value5 > highestValue)
	{
		highestValue = value5;
		highestValueIndex = 5;
	}

	cout << "Die " << smallestValueIndex << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << smallestValue << endl;
	cout << "Die " << highestValueIndex << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << highestValue << endl;

	system("PAUSE");
	return 0;
}