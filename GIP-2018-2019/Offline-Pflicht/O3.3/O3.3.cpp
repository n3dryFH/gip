#include <iostream>
using namespace std;

int main()
{
	int time = 0;
	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> time;

	switch (time)
	{
	case 23:
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Gute Nacht." << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		cout << "Guten Morgen." << endl;
		break;
	case 11:
	case 12:
	case 13:
		cout << "Mahlzeit." << endl;
		break;
	case 14:
	case 15:
	case 16:
	case 17:
		cout << "Guten Tag." << endl;
		break;
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
		cout << "Guten Tag." << endl;
		break;

	default:
		cout << "Keine erlaubte Stundenangabe." << endl;
		break;
	}

	system("PAUSE");

}