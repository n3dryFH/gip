#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputStr = "", outputStr = "";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, inputStr);

	for (unsigned int i = 0; i < inputStr.length(); ++i)
	{
		const char c = inputStr.at(i);
		if (c >= 'a' && c <= 'z')
		{
			for (unsigned int j = 0; j < 2; ++j)
				outputStr += c;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			for (unsigned int j = 0; j < 3; ++j)
				outputStr += c;
		}
		else if (c >= '0' && c <= '9') 
		{
			outputStr += '.';
		}
		else if (c == '!' || c == '?')
		{
			// do nothing
		}
		else if (c == ' ')
		{
			outputStr += '_';
		}
		else
		{
			outputStr += c;
		}
	}

	cout << "Der Text nach der Umwandlung: " << outputStr << endl;
	system("PAUSE");
	return 0;
}