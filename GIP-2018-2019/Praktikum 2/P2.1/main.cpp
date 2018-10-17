#include <iostream>
using namespace std;

int main() 
{
	char c = 0;	
	cout << "Bitte geben Sie den Buchstaben ein: ? ";
	cin >> c;	
	cout << "Der Buchstabe " << c << " hat die Position " << c - 'a' + 1 << " im Alphabet." << endl;
	system("PAUSE");
	return 0;
}