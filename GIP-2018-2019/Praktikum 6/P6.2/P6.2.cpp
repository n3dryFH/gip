#include <iostream>
#include <string>
#include <iomanip>
#include "wortspiegel.h"
using namespace std;

int main()
{
	string text = "";
	char input = 0;
	unsigned int pos = 0;

	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);	

	do 
	{
		cout << text << endl;		
		cout << right << setw(pos+1) << '*' << endl;

		cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
		cin >> input;

		if (input == 'r' && pos < text.length()-1)
		{
			pos++;
		}

		if (input == 'l' && pos > 0)
		{
			pos--;
		}

		if (input == 's')
		{
			wortspiegel(text, pos);									
		}		

	} while (input != 'q');

	cout << endl;
	system("PAUSE");
	return 0;
}