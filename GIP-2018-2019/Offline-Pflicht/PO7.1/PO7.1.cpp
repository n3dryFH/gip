#include <iostream>
#include <string>
using namespace std;


int main() 
{
	string strings[4];	
	unsigned int maxLength = 0, textCounter = 0;;
	for (unsigned int i = 0; i < 4; ++i, ++textCounter)
	{
		strings[i] = "";
		cout << "Textzeile = ? ";
		getline(cin, strings[i]);
		
		if (strings[i].length() == 0) {			
			break;
		}

		if (strings[i].length() > maxLength)
			maxLength = strings[i].length();
	}	
	
	for (unsigned int i = 0; i < textCounter; ++i)
	{
		for (unsigned int j = 0; j < maxLength - strings[i].length(); ++j)
		{
			cout << "#";
		}
		cout << strings[i] << endl;
	}			
	
	
	system("PAUSE");
	return 0;
}