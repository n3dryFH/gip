#include <iostream>
#include <string>
using namespace std;

string trimme(string s) 
{
	unsigned int startLeft = 0, startRight = 0;
	bool foundLeft = false, foundRight = false;
	string trimmedStr;
	for (int i = 0, j = s.length() -1; i < s.length() && j >= 0; ++i, --j)
	{
		char cLeft = s.at(i);
		char cRight = s.at(j);
		if (!foundLeft && cLeft == '+')
			startLeft++;
		else
			foundLeft = true;		
		if (!foundRight && cRight == '+')
			startRight++;
		else
			foundRight = true;
	}

	for (unsigned int i = startLeft; i < s.length() - startRight; ++i)
	{
		trimmedStr += s.at(i);
	}
	return trimmedStr;
}

int main()
{
	string s = "";
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	cin >> s;

	cout << "Vorher: " << s << endl;
	cout << "Nachher: " << trimme(s) << endl;
	system("PAUSE");
	return 0;
}