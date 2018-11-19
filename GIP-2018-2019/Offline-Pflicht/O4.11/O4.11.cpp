#include <iostream>
using namespace std;

int main()
{
	unsigned int width = 0, height = 0;
	cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
	cin >> width;
	cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ? ";
	cin >> height;

	for (unsigned int y = 0; y < height; ++y)
	{
		for (unsigned int x = 0; x < width; ++x)
		{
			if (y == 0 || y == height - 1 || x == 0 || x == width - 1)
			{
				cout << '*';
			}
			else
			{
				cout << '+';
			}
		}
		cout << endl;
	}

	system("PAUSE");
}