#include <iostream>
using namespace std;

int main()
{
	double input = .0;
	int selection = 0;
	cout << "Ihre Eingabe: ? ";
	cin >> input;
	cout << endl << "Ihre Auswahl der Umwandlung:" << endl
		<< " 1 - Celsius in Fahrenheit" << endl
		<< " 2 - Meter in Fuss" << endl
		<< " 3 - Euro in US Dollar" << endl;
	cin >> selection;

	double fahrenheit = (input * 1.8 + 32) * (1 / selection);

	int dMultiplicator = .7 + (selection / 10.0);
	double dollar = (input * 1.2957) * dMultiplicator;
	selection -= dMultiplicator * selection;

	double foot = (input * 3.2808) * int(.8 + (selection / 10.0));

	cout << "Das Ergebnis lautet: " << fahrenheit + foot + dollar << endl << endl;
	system("PAUSE");
	return 0;
}
