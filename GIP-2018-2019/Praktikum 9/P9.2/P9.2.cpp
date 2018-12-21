#define CATCH_CONFIG_RUNNER
#include "catch.h"
#include <iostream>

using namespace std;
#include "suchen.h"

int main()
{
	if (Catch::Session().run()) {
		system("PAUSE");
		return 1;
	}

	char text[21] = { 0 };
	char zkette[21] = { 0 };
	cout << "Bitte geben Sie den Text ein: ";
	cin.getline(text, 21);
	do 
	{
		cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
		cin.getline(zkette, 21);
	}	
	while (strlen(zkette) < 1);

	int status = zeichenkette_suchen(text, zkette);
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