#include <iostream>
using namespace std;

int main()
{
	int startHour = 0, startMinutes = 0, cycleMinutes = 0;
	do {
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> startHour;
	} while (startHour < 0 || startHour >= 24);

	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> startMinutes;
	} while (startMinutes < 0 || startMinutes > 59);

	cout << "Der erste Bus faehrt also um " << startHour << ":" << startMinutes << " Uhr." << endl;

	do {
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> cycleMinutes;

	} while (cycleMinutes <= 0 || cycleMinutes > 180);

	const unsigned int cycleInSec = cycleMinutes * 60;
	unsigned int currentStartTimeInSec = startHour * 60 * 60;
	currentStartTimeInSec += startMinutes * 60;

	bool isLastDriveForToday = false;
	do
	{
		for (unsigned int currentMinutes = ((currentStartTimeInSec / 60) % 60); currentMinutes < 60; currentMinutes += cycleMinutes)
		{
			cout << currentStartTimeInSec / 60 / 60 << ":" << (currentStartTimeInSec / 60) % 60 << " ";					
			if (currentStartTimeInSec + cycleInSec >= 24 * 60 * 60)
			{
				isLastDriveForToday = true;
			}
			else 
			{
				currentStartTimeInSec += cycleInSec;
			}			
		}
		cout << endl;		
	} while (!isLastDriveForToday);

	system("PAUSE");
	return 0;
}