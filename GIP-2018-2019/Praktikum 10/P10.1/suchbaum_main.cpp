#include <iostream>
#include "binaerer_suchbaum.h"

int main()
{
	int eingabe = 0;
	suchbaum::BaumKnoten wurzelknoten;
	wurzelknoten.ausgeben();
	do
	{
		std::cout << "Naechster Wert (99 beendet): ? ";
		std::cin >> eingabe;
		if (eingabe != 99) 		
			wurzelknoten.einfuegen(eingabe);			
	} while (eingabe != 99);
	wurzelknoten.ausgeben();
	system("PAUSE");
	return 0;
}