#include <iostream>

using namespace std;

unsigned int my_strlen(const char* ptr)
{
	unsigned int i = 0;
	for (; ptr[i] != '\0'; ++i);
	return i;
}

char* my_strconcat2(const char * sptr1, const char * sptr2, unsigned int count)
{
	const unsigned int sptr1Len = my_strlen(sptr1), sptr2Len = my_strlen(sptr2);
	char* newTextPtr = new char[count + 1];	
	unsigned int remainingChars = count, maxStr1 = count > sptr1Len ? sptr1Len : count;
	for (unsigned int i = 0; i < maxStr1; ++i, --remainingChars)
		newTextPtr[i] = sptr1[i];
	for (unsigned int i = 0; i < remainingChars; ++i)
		newTextPtr[maxStr1+i] = sptr2[i];
	newTextPtr[count] = '\0';
	return newTextPtr;
}

int main()
{
	char text1[21], text2[21];
	unsigned int amount_chars = 0;

	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(text1, 21);

	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(text2, 21);

	cout << "Anzahl Zeichen: ? ";
	cin >> amount_chars;

	cout << "Ergebnis my_strconcat2(): " << my_strconcat2(text1, text2, amount_chars) << endl;
	system("PAUSE");
}