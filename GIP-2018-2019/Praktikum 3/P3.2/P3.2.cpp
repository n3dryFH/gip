#include <iostream>
using namespace std;

int main()
{
	int smallestValue = 0, smallestValueIndex = 0,
		greatestValue = 0, greatestValueIndex = 0,
		value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0;

	cout << "Bitte geben Sie die 1. Zahl ein: ? ";
	cin >> value1;		
	smallestValue = value1;
	smallestValueIndex = 1;	
	greatestValue = value1;
	greatestValueIndex = 1;	

	cout << "Bitte geben Sie die 2. Zahl ein: ? ";
	cin >> value2;
	if (value2 < smallestValue)
	{
		smallestValue = value2;
		smallestValueIndex = 2;
	}
	else if (value2 > greatestValue)
	{
		greatestValue = value2;
		greatestValueIndex = 2;
	}

	cout << "Bitte geben Sie die 3. Zahl ein: ? ";
	cin >> value3;
	if (value3 < smallestValue)
	{
		smallestValue = value3;
		smallestValueIndex = 3;
	}
	else if (value3 > greatestValue)
	{
		greatestValue = value3;
		greatestValueIndex = 3;
	}

	cout << "Bitte geben Sie die 4. Zahl ein: ? ";
	cin >> value4;
	if (value4 < smallestValue)
	{
		smallestValue = value4;
		smallestValueIndex = 4;
	}
	else if (value4 > greatestValue)
	{
		greatestValue = value4;
		greatestValueIndex = 4;
	}

	cout << "Bitte geben Sie die 5. Zahl ein: ? ";
	cin >> value5;
	if (value5 < smallestValue)
	{
		smallestValue = value5;
		smallestValueIndex = 5;
	}
	else if (value5 > greatestValue)
	{
		greatestValue = value5;
		greatestValueIndex = 5;
	}

	cout << "Die " << smallestValueIndex << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << smallestValue << endl;
	cout << "Die " << greatestValueIndex << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << greatestValue << endl;

	system("PAUSE");
	return 0;
}