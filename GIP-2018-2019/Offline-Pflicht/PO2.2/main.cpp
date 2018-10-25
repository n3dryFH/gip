#include <iostream>
using namespace std;

int main() 
{
	double input1 = .0, input2 = .0, tmp = .0;
	cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
	cin >> input1;
	cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
	cin >> input2;
	tmp = input1;
	input1 = input2;
	input2 = tmp;
	cout << "Nach dem Tausch:" << endl
		<< "Wert der ersten Variable: " << input1 << endl
		<< "Wert der zweiten Variable: " << input2 << endl;
	system("PAUSE");
	return 0;
}