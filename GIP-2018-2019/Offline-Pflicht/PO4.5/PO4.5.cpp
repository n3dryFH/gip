#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input = "";
	bool isInputInvalid = false;
	do {
		cout << "Text: ? ";
		getline(cin, input);
		isInputInvalid = false;
		for (unsigned int i = 0; i < input.length(); ++i)
		{
			const char c = input.at(i);
			if (c < 'a' || c > 'z')
			{
				isInputInvalid = true;
				break;
			}
		}
	} while (isInputInvalid);

	bool isPalindrom = true;

	for (int i = 0, j = input.length() - 1; i < input.length() && j >= 0; ++i, --j)
	{
		if (input.at(i) != input.at(j))
		{
			isPalindrom = false;
			break;
		}
	}

	if (isPalindrom)
	{
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}
	else
	{
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}

	system("PAUSE");
	return 0;
}