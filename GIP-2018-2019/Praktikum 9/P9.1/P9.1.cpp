#include <iostream>
#include <string>

using namespace std;

struct TListenKnoten
{
	int data;
	TListenKnoten *next;
	TListenKnoten *prev;
};
void hinten_anfuegen(TListenKnoten* &anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
			ptr = ptr->next;
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
	}
}

string liste_als_string_rueckwaerts(TListenKnoten * anker)
{
	string resultat = "";
	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
			ptr = ptr->next;
		do
		{
			resultat += std::to_string(ptr->data);
			if (ptr->prev != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->prev;
		} while (ptr != nullptr);
		resultat += "]";
	}
	return resultat;
}

string liste_als_string(TListenKnoten * anker)
{
	string resultat = "";
	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten *ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);
			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->next;
		} while (ptr != nullptr);
		resultat += "]";
	}
	return resultat;
}

void liste_ausgeben_rueckwaerts(TListenKnoten * anker)
{
	cout << liste_als_string_rueckwaerts(anker) << endl;
}

void liste_ausgeben(TListenKnoten* anker)
{
	cout << liste_als_string(anker) << endl;
}

void in_liste_einfuegen(TListenKnoten* &anker, const int wert_neu, const int vor_wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;	

	if (!anker)	
		anker = neuer_eintrag;			
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr)
		{
			if (ptr->data == vor_wert)
			{
				neuer_eintrag->next = ptr;
				neuer_eintrag->prev = ptr->prev;
				if (ptr->prev)				
					ptr->prev->next = neuer_eintrag;
				else
					anker = neuer_eintrag; // point anker to first element
				ptr->prev = neuer_eintrag;
				return;
			}			
			ptr = ptr->next; 
		}
		ptr = anker; // set to begin
		while (ptr->next != nullptr) // find end
			ptr = ptr->next;
		ptr->next = neuer_eintrag; // add to end
		neuer_eintrag->prev = ptr;
	}
}

void liste_loeschen(TListenKnoten* &anker)
{
	TListenKnoten *ptr = anker;
	while (ptr)
	{
		TListenKnoten *tmpPtr = ptr;
		ptr = ptr->next;
		delete tmpPtr;
	}
	anker = nullptr;
}

#define TEST_CASE 2

int main()
{
#if TEST_CASE <= 1
	const int laenge = 10;
	TListenKnoten *anker = nullptr;
	for (int i = 0; i < laenge; i++)
		in_liste_einfuegen(anker, i*i, 9999);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	int wert_neu, vor_wert;
	cout << "Einzufuegender Wert: "; cin >> wert_neu;
	cout << "Vor welchem Wert? "; cin >> vor_wert;
	in_liste_einfuegen(anker, wert_neu, vor_wert);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
#else
	const int laenge = 10;
	TListenKnoten *anker = nullptr;
	liste_ausgeben(anker);
	liste_loeschen(anker);
	for (int i = 0; i < laenge; i++)
		in_liste_einfuegen(anker, i*i, 9999);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	in_liste_einfuegen(anker, 99, 0);
	in_liste_einfuegen(anker, 99, 25);
	in_liste_einfuegen(anker, 99, 81);
	in_liste_einfuegen(anker, 99, 99);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	liste_loeschen(anker);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
#endif //  TEST_CASE == 1

	system("PAUSE");
	return 0;
}