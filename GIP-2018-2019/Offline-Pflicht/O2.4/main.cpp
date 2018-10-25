#include <iostream>
using namespace std;

int main()
{
	int hour1 = 0, min1 = 0, sec1 = 0, hour2 = 0, min2 = 0, sec2 = 0;
	cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
	cin >> hour1;
	cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
	cin >> min1;
	cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
	cin >> sec1;
	int secSinceMid1 = (hour1 * 60 * 60) + (min1 * 60) + sec1;
	cout << hour1 << ":" << min1 << " Uhr und " << sec1 << " Sekunden sind in Sekunden seit Mitternacht: " << secSinceMid1 << endl << endl;

	cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> hour2;
	cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
	cin >> min2;
	cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> sec2;
	int secSinceMid2 = (hour2 * 60 * 60) + (min2 * 60) + sec2;
	cout << hour2 << ":" << min2 << " Uhr und " << sec2 << " Sekunden sind in Sekunden seit Mitternacht: " << secSinceMid2 << endl << endl;


	int deltaSecSinceMid = secSinceMid2 - secSinceMid1;
	int deltaHour = deltaSecSinceMid / 3600; // 60*60
	deltaSecSinceMid -= deltaHour * 3600; // 60*60
	int deltaMin = deltaSecSinceMid / 60;
	deltaSecSinceMid -= deltaMin * 60;	
	
	cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:" << endl
		<< deltaHour << " Stunden, " << deltaMin << " Minuten und " << deltaSecSinceMid << " Sekunden." << endl;
	
	system("PAUSE");
	return 0;
}