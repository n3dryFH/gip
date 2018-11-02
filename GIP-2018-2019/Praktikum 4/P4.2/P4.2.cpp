#include <iostream>
#include <string>
using namespace std;

int main() 
{
	const int alphabetLen = 26;
	string inputStr = "", encryptedStr = "";
	unsigned int charShift = 0;

	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, inputStr);

	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> charShift;

	for (unsigned int i = 0; i < inputStr.length(); ++i)
	{
		const char currentChar = inputStr.at(i);		
		char charBegin = 0, charEnd = 0;
		char encryptedChar = currentChar;		
		if (currentChar >= 'a' && currentChar <= 'z') 
		{			
			charBegin = 'a';
			charEnd = 'z';
		}
		else if (currentChar >= 'A' && currentChar <= 'Z')
		{
			charBegin = 'A';
			charEnd = 'Z';
		}
			
		if (charBegin > 0 && charEnd > 0) 
		{
			const int charOffset = charShift % alphabetLen;
			encryptedChar += charOffset;
			if (encryptedChar > charEnd)
			{
				encryptedChar = charBegin - 1 + (encryptedChar - charEnd);
			}
		}
		encryptedStr += encryptedChar;
	}

	cout << encryptedStr << endl;	
	system("PAUSE");
	return 0;
}