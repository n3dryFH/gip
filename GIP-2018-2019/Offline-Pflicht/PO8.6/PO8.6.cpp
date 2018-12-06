#include <iostream>
#include <string>
using namespace std;

unsigned int my_strlen(const char * ptr)
{
	unsigned int len = 0;
	while (*(ptr++) != '\0')
		len++;
	return len;
}

void my_strcpy(char* dst, const char* orig, const unsigned int size, const unsigned int startPos)
{
	for (unsigned int i = startPos, j = 0; i < startPos+size; ++i, ++j)
	{
		dst[i] = orig[j];
	}
}


char* my_strconcat(const char * ptr1, const char * ptr2)
{	
	unsigned int ptr1_length = my_strlen(ptr1), ptr2_length = my_strlen(ptr2);
	char* newPtr = new char[ptr1_length + ptr2_length + 1];
	my_strcpy(newPtr, ptr1, ptr1_length, 0);
	my_strcpy(newPtr, ptr2, ptr2_length, ptr1_length);
	newPtr[ptr1_length + ptr2_length] = '\0';
	return newPtr;
}


int main()
{
	string first_text = "", second_text = "";
	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, first_text);
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, second_text);

	cout << "Ergebnis my_strconcat(): " << my_strconcat(first_text.c_str(), second_text.c_str()) << endl;	
	system("PAUSE");
	return 0;
}