#include <iostream>
#include <string>

using namespace std;

unsigned int gip_strlen(const char* text)
{	
	const char* ptr = text;
	unsigned int len = 0;
	while (*(ptr++) != '\0')
		++len;
	return len;
}

int zeichenkette_suchen(const char* text, const char* zkette)
{
	const unsigned int zketteLen = gip_strlen(zkette);
	const unsigned int textLen = gip_strlen(text);
	for (unsigned int i = 0; i < textLen; ++i)
	{
		if (zkette[0] == text[i])
		{
			unsigned int zketteIndex = 1;
			unsigned int textIndex = i + 1;
			unsigned int remainingChars = zketteLen - 1;

			while (textIndex < textLen && zketteIndex < zketteLen &&
				remainingChars > 0 && zkette[zketteIndex] == text[textIndex])
			{
				--remainingChars; ++textIndex; ++zketteIndex;
			}		

			if (remainingChars == 0)
				return i;
		}
	}
	return -1;
}


int main()
{
	string text = "", zkette = "";
	cout << "Bitte geben Sie den Text ein: ";
	getline(cin, text);
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
	getline(cin, zkette);
	int status = zeichenkette_suchen(text.c_str(), zkette.c_str());
	if (status < 0)
		cout << "Die Zeichenkette '" << zkette << "' ist NICHT in dem Text '" << text << "' enthalten." << endl;
	else
	{
		cout << "Die Zeichenkette '" << zkette << "' ist in dem Text  '" << text << "' enthalten." << endl;
		cout << "Sie startet ab Zeichen " << status << " (bei Zaehlung ab 0). " << endl;
	}
	system("PAUSE");
	return 0;
}