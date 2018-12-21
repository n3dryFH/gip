#include "sort.h"

void sortiere(int a[], const int size)
{
	for (unsigned int i = 0; i < size; ++i)
	{
		const int ganzzahl_einzusortieren = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > ganzzahl_einzusortieren)
		{
			a[j] = a[j - 1];
			j -= 1;
		}
		a[j] = ganzzahl_einzusortieren;
	}
}
