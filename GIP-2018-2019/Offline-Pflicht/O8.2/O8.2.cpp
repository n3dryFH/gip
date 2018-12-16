#include <iostream>
#include <string>

using namespace std;

string Split(string& text)
{
	string partString = "", newText = "";	
	bool foundSplit = false;
	for (unsigned int i = 0; i < text.length(); ++i)
	{
		if (!foundSplit && text.at(i) == ' ')
		{
			foundSplit = true;
			continue;
		}		

		if(foundSplit)
			newText += text.at(i);
		else
			partString += text.at(i);
		
	}

	text = newText;
	return partString;
}


int main()
{
	string strs[5];
	for (unsigned int i = 0; i < 5; ++i)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, strs[i]);
		if (strs[i].length() == 0)
			break;
	}
		
	for (unsigned int i = 0; i < 5; ++i)
	{
		for(string s = Split(strs[i]); s.length() > 0; s = Split(strs[i]))
			cout << s << endl;		
	}	

	system("PAUSE");
	return 0;
}