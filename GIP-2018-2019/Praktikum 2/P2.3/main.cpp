#include <iostream>
using namespace std;

int main() 
{
	double m = .0;
	cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
	cin >> m;
	cout << "Die Laenge in Fuss lautet: " << m * 3.2808 << endl;
	system("PAUSE");
	return 0;
}