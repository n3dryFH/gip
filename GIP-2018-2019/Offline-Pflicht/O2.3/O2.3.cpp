#include <iostream>
using namespace std;


int main()
{
	int inputSum = 0, inputFirst = 0, inputSecond = 0;

	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> inputSum;

	cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> inputFirst;

	cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> inputSecond;

	cout << "Auf den dritten Kandidaten sind somit " << inputSum - inputFirst - inputSecond << " Stimmen entfallen." << endl;

	cout << "Kandidat 1 erhielt " << (double)inputFirst / (double)inputSum * 100 << "% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << (double)inputSecond / (double)inputSum * 100 << "% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt "<< (double)(inputSum - inputFirst - inputSecond) / (double)inputSum * 100 << "% der Stimmen." << endl;


	system("PAUSE");
	return 0;
}