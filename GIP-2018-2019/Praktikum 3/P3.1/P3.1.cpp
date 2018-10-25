#include <iostream>
using namespace std;

int main()
{
	int day1 = 0, month1 = 0, year1 = 0,
		day2 = 0, month2 = 0, year2 = 0;	

	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> day1;
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> month1;
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> year1;

	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> day2;
	cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	cin >> month2;
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	cin >> year2;

	if (year1 == year2 && month1 == month2 && day1 == day2) 
	{
		cout << "Beide Datumsangaben sind gleich." << endl;
	}
	else if (year1 < year2) {
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
	}
	else if (year1 > year2)
	{
		cout << "Das zweite Datum liegt vor dem ersten Datum. " << endl;
	}
	else 
	{
		if (month1 < month2)
		{
			cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		}
		else if (month1 > month2)
		{
			cout << "Das zweite Datum liegt vor dem ersten Datum. " << endl;
		}
		else 
		{
			if (day1 > day2)
			{
				cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
			}
			else
			{
				cout << "Das zweite Datum liegt vor dem ersten Datum. " << endl;
			}
		}
	}

	system("PAUSE");
	return 0;
}