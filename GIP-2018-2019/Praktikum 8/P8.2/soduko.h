#pragma once

#include <string>

enum Soduko_Status
{
	Not_Found = 0,
	Found_Once,
	Found_Multiple,
};

struct Soduko_Value
{
	int Value;
	Soduko_Status Status;
};

void Init(Soduko_Value values[]);
void SetSodukoEntryStatus(Soduko_Value values[], const unsigned int x, const unsigned int y, const int sudoku[][9]);
unsigned int PrintInvalidValues(const Soduko_Value values[], const unsigned int entry_id, const std::string& pre_text);
