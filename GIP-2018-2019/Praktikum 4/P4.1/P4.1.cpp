#include <iostream>
using namespace std;

int main()
{
	int currentRangeSmall = 1, currentRangeHigh = 100;
	bool hasFoundValue = false;
	cout << "Merken Sie sich eine Zahl zwischen " << currentRangeSmall << " (inklusive) und " << currentRangeHigh << " (exklusive)" << endl << endl;
	do {

		char selection = 0;
		cout << "Aktueller Ratebereich: " << currentRangeSmall << " bis "<< currentRangeHigh << endl;
		int currentArithmeticMean = (currentRangeSmall + currentRangeHigh) / 2;
		cout << "Ist " << currentArithmeticMean << " ihre Zahl?" << endl;
		cout << "(j) ja: gleich," << endl
			<< "(k) nein : meine Zahl ist kleiner," << endl
			<< "(g) nein : meine Zahl ist groesser." << endl
			<< "? ";
		cin >> selection;

		if (selection == 'j') 
		{
			hasFoundValue = true;
		}
		else if (selection == 'k')
		{
			currentRangeHigh = currentArithmeticMean;
		}
		else if (selection == 'g')
		{
			currentRangeSmall = currentArithmeticMean;
		}
		else 
		{
			return -1;
		}

	} while (!hasFoundValue);

	system("PAUSE");
	return 0;
}