#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
	getline(cin, s);

	for (unsigned int i = 0; i < s.length(); ++i)
	{
		cout << "Position: " << i << " Buchstabe: " << s.at(i) << endl;
	}

	system("PAUSE");
}