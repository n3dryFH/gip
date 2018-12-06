#include "soduko.h"
#include <iostream>

using namespace std;

void Init(Soduko_Value values[]) {

	for (unsigned int i = 0; i < 9; ++i)
	{
		Soduko_Value& value = values[i];
		value.Status = Not_Found;
		value.Value = i + 1;
	}
}


void SetSodukoEntryStatus(Soduko_Value values[], const unsigned int x, const unsigned int y, const int sudoku[][9])
{	
	Soduko_Value& value = values[sudoku[y][x] - 1]; // -1 because soduko values are between 1 .. 9
	if (value.Status == Soduko_Status::Found_Once)
	{
		value.Status = Soduko_Status::Found_Multiple;
	}
	else
	{
		value.Status = Soduko_Status::Found_Once;
	}
}

unsigned int PrintInvalidValues(const Soduko_Value values[], const unsigned int entry_id, const string& pre_text)
{
	unsigned int printed_invalid_values = 0;
	for (unsigned int i = 0; i < 9; ++i)
	{
		const Soduko_Value& value = values[i];
		if (value.Status != Soduko_Status::Found_Once)
		{
			printed_invalid_values++;
			cout << pre_text << " " << entry_id << ": Zahl " << value.Value;
		}

		switch (value.Status)
		{
		case Soduko_Status::Found_Multiple:
			cout << " kommt mehrfach vor." << endl;
			break;

		case Soduko_Status::Not_Found:
			cout << " kommt nicht vor." << endl;
			break;
		default:
			break;
		}
	}
	return printed_invalid_values;
}
