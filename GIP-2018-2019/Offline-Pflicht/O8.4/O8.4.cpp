#include <iostream>
using namespace std;

unsigned int my_strlen(const char * ptr)
{
	unsigned int i = 0;
	for (; ptr[i] != '\0'; ++i);
	return i;
}

int main()
{
	char str[21];
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(str, 21);
	cout << "Ergebnis my_strlen(): " << my_strlen(str) << endl;
	system("PAUSE");
}