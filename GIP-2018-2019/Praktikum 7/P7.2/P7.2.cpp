#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"
#include "StringHelper.h"

int main()
{
	using namespace std;
	string line = "", longListHtml = "", shortListHtml = "";
	
	// parse person data to Html
	fstream personFile("personendaten.txt", ios::in);
	while(getline(personFile, line))
	{
		Person p = ParsePerson(line);
		shortListHtml += "<b>" + p.Name + "</b>, " + p.Surname + "<br>";
		longListHtml += "<b>" + p.Surname + " " + p.Name + "</b>, " + p.Birthday + "<br>";
	}
	personFile.close();

	// generate html from template file and replace '%' and '$' with shortListHtml and longListHtml
	fstream websiteTemplateFile("webseite.html.tmpl", ios::in);
	fstream websiteFile("webseite.html", ios::out);
	while (getline(websiteTemplateFile, line))
	{
		string htmlLine = Replace(line, '%', shortListHtml);
		htmlLine = Replace(htmlLine, '$', longListHtml);
		websiteFile << htmlLine;
	}
	websiteFile.close();
	websiteTemplateFile.close();	
	return 0;
}