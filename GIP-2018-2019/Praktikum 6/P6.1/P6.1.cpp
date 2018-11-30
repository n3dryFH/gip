#include <iostream>
using namespace std;

int main()
{
	int numbers[5] = { 0 };

	for (unsigned int i = 0; i < 5; ++i)
	{
		do {
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> numbers[i];
		} while (numbers[i] < 1 || numbers[i] > 9);
	}

	for (int x = 9; x > 0; --x)
	{
		cout << x ;
		for (unsigned int y = 0; y < 5; ++y)
		{
			if (numbers[y] == x)
			{
				cout << '*';
			} 
			else if (x > numbers[y])
			{
				cout << '.';
			}
			else
			{
				cout << '+';
			}
		}
		cout << endl;
	}

	cout << " 12345" << endl;
	system("PAUSE");
	return 0;
}