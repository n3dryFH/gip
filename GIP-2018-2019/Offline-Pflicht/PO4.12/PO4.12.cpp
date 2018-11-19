#include <iostream>
using namespace std;

void printLine(unsigned int shiftValue, unsigned int width, bool isFirstOrLastLine = false)
{
	char lineChar = '+';
	for (unsigned int i = 0; i < shiftValue; ++i)
	{
		cout << ".";
	}	
	cout << "*";	
	if (isFirstOrLastLine)	
		lineChar = '*';	
	for (unsigned int i = 0; i < width-2; ++i)
	{
		cout << lineChar;
	}
	cout << "*";
	cout << endl;
}

int main()
{
	unsigned int width = 0, height = 0;
	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> width;

	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> height;

	for (unsigned int i = 0; i < height; ++i)
	{
		printLine(i, width, i == 0 || i == height - 1);
	}
	cout << endl;
	system("PAUSE");
	return 0;
}