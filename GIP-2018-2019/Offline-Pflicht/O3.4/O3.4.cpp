#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
	cin >> s;

	for (int i = 0, j = s.length() - 1; i < s.length() && j >= 0; ++i, --j)
	{
		if (s.at(i) != s.at(j))
		{
			cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
			system("PAUSE");
			return 0;
		}
	}

	cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	system("PAUSE");	
}