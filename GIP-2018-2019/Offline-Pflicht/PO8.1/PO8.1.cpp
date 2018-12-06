#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string nachname, vorname;
	int alter;
	char geschlecht;
};

Person personen[100] = {
{ "Musterfrau1", "Petra1", 18, 'w' },
{ "Mustermann1", "Klaus1", 18, 'm' },
{ "Mustermaedchen1", "Lisa1", 1, 'w' },
{ "Musterjunge1", "Jan1", 1, 'm' },
{ "Musterfrau2", "Petra2", 19, 'w' },
{ "Mustermann2", "Klaus2", 19, 'm' },
{ "Mustermaedchen2", "Lisa2", 2, 'w' },
{ "Musterjunge2", "Jan2", 2, 'm' },
{ "Musterfrau3", "Petra3", 20, 'w' },
{ "Mustermann3", "Klaus3", 20, 'm' },
{ "Mustermaedchen3", "Lisa3", 3, 'w' },
{ "Musterjunge3", "Jan3", 3, 'm' },
{ "Musterfrau4", "Petra4", 21, 'w' },
{ "Mustermann4", "Klaus4", 21, 'm' },
{ "Mustermaedchen4", "Lisa4", 4, 'w' },
{ "Musterjunge4", "Jan4", 4, 'm' },
{ "Musterfrau5", "Petra5", 22, 'w' },
{ "Mustermann5", "Klaus5", 22, 'm' },
{ "Mustermaedchen5", "Lisa5", 5, 'w' },
{ "Musterjunge5", "Jan5", 5, 'm' },
{ "Musterfrau6", "Petra6", 23, 'w' },
{ "Mustermann6", "Klaus6", 23, 'm' },
{ "Mustermaedchen6", "Lisa6", 6, 'w' },
{ "Musterjunge6", "Jan6", 6, 'm' },
{ "Musterfrau7", "Petra7", 24, 'w' },
{ "Mustermann7", "Klaus7", 24, 'm' },
{ "Mustermaedchen7", "Lisa7", 7, 'w' },
{ "Musterjunge7", "Jan7", 7, 'm' },
{ "Musterfrau8", "Petra8", 25, 'w' },
{ "Mustermann8", "Klaus8", 25, 'm' },
{ "Mustermaedchen8", "Lisa8", 8, 'w' },
{ "Musterjunge8", "Jan8", 8, 'm' }
};

int anzahl_personen = 32;


void filter(Person persons[], int anzahhPerson)
{
	int selection = 0;
	cout << "Ihre Auswahl:" << endl
		<< "1 - Weibliche Erwachsene" << endl
		<< "2 - Maennliche Erwachsene" << endl
		<< "3 - Weibliche Kinder" << endl
		<< "4 - Maennliche Kinder" << endl
		<< "? ";
	cin >> selection;

	char gender = 0;
	bool adult = false;

	if (selection == 1 || selection == 3)
		gender = 'w';
	else 
		gender = 'm';
	
	if (selection == 1 || selection == 2)
		adult = true;

	int counter = 0;
	for (unsigned int i = 0; i < anzahhPerson; ++i)
	{
		const Person& person = persons[i];
		if ((adult && person.alter >= 18 && person.geschlecht == gender) || (!adult && person.alter < 18 && person.geschlecht == gender))
		{
			counter++;
			cout << person.nachname << ", " << person.vorname << ", " << person.geschlecht << ", " << person.alter << endl;
		}
		
	}
	cout << "Summe: " << counter << endl;

}

int main()
{	
	char yes_no = 0;
	for(unsigned int i = anzahl_personen; ;++i)
	{
		do {
			cout << "Eine weitere Person eingeben (j/n)? ";
			cin >> yes_no;
		} while (yes_no != 'j' && yes_no != 'n');
				
		if (yes_no == 'n')
			break;		

		Person& p = personen[anzahl_personen++];
		cout << "Bitte den Nachnamen der " << i + 1 << ". Person eingeben: ? ";
		cin >> p.nachname;
		cout << "Bitte den Vornamen der " << i + 1 << ". Person eingeben: ? ";
		cin >> p.vorname;
		cout << "Bitte das Alter der " << i + 1 << ". Person eingeben: ? ";
		cin >> p.alter;
		cout << "Bitte das Geschlecht der " << i + 1 << ". Person eingeben: ? ";
		cin >> p.geschlecht;
	}

	filter(personen, anzahl_personen);

	system("PAUSE");
	return 0;
}