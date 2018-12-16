#include <iostream>
using namespace std;


unsigned int my_strlen(const char * ptr1)
{
	unsigned int i = 0;
	for (; ptr1[i] != '\0'; ++i);
	return i;
}

int my_strcmp(const char * ptr1, const char * ptr2){	const unsigned int ptr1Len = my_strlen(ptr1), ptr2Len = my_strlen(ptr2);	if (ptr1Len > ptr2Len)		return 1;	else if (ptr1Len < ptr2Len)		return -1;		for (unsigned int i = 0; i < ptr1Len; ++i)	{		if (ptr1[i] > ptr2[i])			return 1;		else if (ptr1[i] < ptr2[i])			return -1;	}	return 0;}int main(){
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

	system("PAUSE");}