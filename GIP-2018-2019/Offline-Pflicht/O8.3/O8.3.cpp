#include <iostream>
#include <string>
using namespace std;

struct w_haeufigkeit {
	string wort;
	int haeufigkeit;
};

string naechstes_wort(string zeile, int& pos)
{
}

void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int& w_count)
{
}

int main()
{
	int z_count = 0, w_count = 0;
	string wort = "";
	string eingabe[5];
	/* Eingabe hier, setzt auch z_count auf die Anzahl nicht-leerer Zeilen */
	w_haeufigkeit haeufigkeiten[1000];
	for (int k = 0; k < z_count; k++)
	{
		int pos = 0;
		while (true)
		{
			wort = naechstes_wort(eingabe[k], pos);
			if (wort == "")
				break;
			zaehle_wort(wort, haeufigkeiten, w_count);
		}
	}
	for (int k = 0; k < w_count; k++)
		cout << haeufigkeiten[k].wort << ": "
		<< haeufigkeiten[k].haeufigkeit << endl;
	system("PAUSE");
	return 0;
}