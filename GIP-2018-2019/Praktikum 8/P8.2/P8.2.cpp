#include <iostream>
#include <string>
#include "soduko.h"

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

Das Sudoku ist gueltig.
*/

/*
TEST CASE 2
.5.1.4.|.1.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.4.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1
*/

/* TEST CASE 3
.5.1.4.|.8.6.9.|.7.2.3
.8.7.1.|.3.4.2.|.6.1.9
.9.6.3.|.2.1.7.|.5.3.8
-------|-------|-------
.4.2.8.|.5.3.4.|.6.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.7.|.5.2.8.|.4.7.9
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
		const string& current_string = eingabe[i];
		if (current_string.at(0) == '-') // skip field seperation
		{
			continue;
		}

		for (unsigned int i = 0; i < current_string.length(); ++i)
		{
			if (current_string.at(i) >= '0' && current_string.at(i) <= '9')
			{
				sudoku[y][x++] = current_string.at(i) - '0';
			}
		}
		x = 0;
		y++;
	}

	bool soduko_valid = true;	
	Soduko_Value soduko_entries[9];
	for (unsigned int column_x = 0; column_x < 9; ++column_x)
	{		
		Init(soduko_entries);
		for (unsigned int column_y = 0; column_y < 9; ++column_y)
		{
			SetSodukoEntryStatus(soduko_entries, column_x, column_y, sudoku);
		}
		if (PrintInvalidValues(soduko_entries, column_x, "Spalte") > 0)
			soduko_valid = false;
	}

	for (unsigned int column_y = 0; column_y < 9; ++column_y)	
	{
		Init(soduko_entries);
		for (unsigned int column_x = 0; column_x < 9; ++column_x)
		{
			SetSodukoEntryStatus(soduko_entries, column_x, column_y, sudoku);
		}
		if (PrintInvalidValues(soduko_entries, column_y, "Zeile") > 0)
			soduko_valid = false;
	}

	
	for (unsigned int block_column_y = 0; block_column_y < 3; ++block_column_y)	
	{
		for (unsigned int block_column_x = 0; block_column_x < 3; ++block_column_x)
		{
			Init(soduko_entries);
			for (unsigned int block_x = block_column_x * 3; block_x < (block_column_x * 3) + 3; ++block_x)
			{
				for (unsigned int block_y = block_column_y * 3; block_y < (block_column_y * 3) + 3; ++block_y)
				{
					SetSodukoEntryStatus(soduko_entries, block_x, block_y, sudoku);
				}
			}
			if (PrintInvalidValues(soduko_entries, block_column_x + (block_column_y * 3), "Block") > 0)
				soduko_valid = false;
		}		
	}	
	
	if (soduko_valid)
		cout << "Das Sudoku ist gueltig." << endl;
		

	system("PAUSE");
	return 0;
}