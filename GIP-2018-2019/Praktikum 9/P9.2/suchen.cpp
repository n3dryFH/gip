#include "suchen.h"

unsigned int strlen(const char* text)
{
	unsigned int i = 0;
	for (; text[i] != '\0'; ++i);
	return i;
}

int zeichenkette_suchen(const char* text, const char* zkette)
{
	const unsigned int zketteLen = strlen(zkette);
	const unsigned int textLen = strlen(text);
	for (unsigned int i = 0; i < textLen; ++i)
	{
		if (zkette[0] == text[i])
		{
			unsigned int remainingChars = zketteLen - 1;
			for (unsigned int zketteIndex = 1, textIndex = i + 1;
				textIndex < textLen && zketteIndex < zketteLen &&
				remainingChars > 0 && zkette[zketteIndex] == text[textIndex];
				--remainingChars, ++textIndex, ++zketteIndex);

			if (remainingChars == 0)
				return i;
		}
	}
	return -1;
}
