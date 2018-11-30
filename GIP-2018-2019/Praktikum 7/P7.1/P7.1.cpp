#include <iostream>
#include <string>
using namespace std;

/*
 TEST CASE 1
.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1
*/

/*
TEST CASE 2
.9.4.6.|.3.1.8.|.2.7.5
.1.2.3.|.7.5.6.|.9.4.8
.5.8.7.|.2.4.9.|.6.3.1
-------|-------|-------
.8.1.4.|.9.2.5.|.7.6.3
.2.7.5.|.1.6.3.|.8.9.4
.6.3.9.|.8.7.4.|.1.5.2
-------|-------|-------
.3.6.8.|.5.9.2.|.4.1.7
.4.5.1.|.6.8.7.|.3.2.9
.7.9.2.|.4.3.1.|.5.8.6
*/

int main()
{
	int sudoku[9][9] = { 0 };
	string eingabe[11];	

	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (unsigned int i = 0; i < 11; ++i)
	{
		getline(cin, eingabe[i]);
	}
	
	int x = 0, y = 0;
	for (unsigned int i = 0; i < 11; ++i)
	{		
		const string& currentString = eingabe[i];
		if (currentString.at(0) == '-') // skip field seperation
		{
			continue;
		}

		for (unsigned int i = 0; i < currentString.length(); ++i)
		{
			if (currentString.at(i) >= '0' && currentString.at(i) <= '9')
			{
				sudoku[y][x++] = currentString.at(i) - '0';
			}			
		}
		x = 0; 		
		y++; 
	} 

	cout << endl << "Das Sudoku lautet:" << endl;
	for (unsigned int y = 0; y < 9; ++y)	
	{		
		cout << ';'; // first char always ';'
		for (unsigned int x = 0; x < 9; ++x)
		{
			if (x == 3 || x == 6) // x field seperator
			{
				cout << "//;";
			}				
			cout << sudoku[y][x];
			if (x != 8) // not last value
			{
				cout << ';';
			}				
		}		
		cout << endl;
		if (y == 2 || y == 5) // y field seperator
		{
			cout << "=======//=======//=======" << endl;
		}		
	}
	
	system("PAUSE");
	return 0;
}