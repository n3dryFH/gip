#include <iostream>
using namespace std;


unsigned int my_strlen(const char * ptr1)
{
	unsigned int i = 0;
	for (; ptr1[i] != '\0'; ++i);
	return i;
}

int my_strcmp(const char * ptr1, const char * ptr2)
	char text1[21], text2[21];
	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(text1, 21);

	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(text2, 21);

	int ret = my_strcmp(text1, text2);
	if (ret == 0)	
		cout << "Die Texte sind identisch. Ergebnis my_strcmp(): 0" << endl;
	 else 
		cout << "Ergebnis my_strcmp() : " << ret << endl;

	system("PAUSE");