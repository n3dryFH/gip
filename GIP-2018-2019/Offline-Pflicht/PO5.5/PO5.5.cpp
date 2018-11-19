#include <iostream>

using namespace std;

int main()
{
	bool numberMap[6] = { 0 };

	for (unsigned int i = 0; i < 9; ++i)
	{
		int tmp = 0;
		do {
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> tmp;
		} while (tmp < 1 || tmp > 6);
		numberMap[tmp-1] = true;
	}

	int sameNumbers = 0;
	for (unsigned int i = 0; i < 6; ++i)
	{
		if (numberMap[i])
			sameNumbers++;
	}

	cout << "In der Eingabe kamen " << sameNumbers << " unterschiedliche Zahlen vor." << endl;
	system("PAUSE");
	return 0;
}