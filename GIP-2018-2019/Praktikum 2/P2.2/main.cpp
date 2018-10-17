#include <iostream>
using namespace std;

int main() 
{
	double tc = .0;
	cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
	cin >> tc;
	cout << "Die Temperatur in Fahrenheit lautet: " << tc * 1.8 + 32 << endl;
	system("PAUSE");
	return 0;
}