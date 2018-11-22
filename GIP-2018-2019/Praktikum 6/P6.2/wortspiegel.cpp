#include "wortspiegel.h"

void wortspiegel(string& text, int pos)
{
	int start = pos, end = pos;
	for (; start > 0; --start)
	{
		if (text.at(start) == ' ' || text.at(start) == '.')
		{
			++start;			
			break;
		}		
	}

	for (; end < text.length(); ++end)
	{
		if (text.at(end) == ' ' || text.at(end) == '.')
		{	
			--end;
			break;
		}
	}	

	string gespiegelt = "";
	for (int i = end; i >= start; --i)
	{
		gespiegelt += text.at(i);
	}

	for (unsigned int i = start, j = 0; i <= end; ++i, ++j)
	{
		text.at(i) = gespiegelt.at(j);
	}	
}
