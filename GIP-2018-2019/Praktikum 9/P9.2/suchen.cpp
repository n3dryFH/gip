#include "suchen.h"

unsigned int gip_strlen(const char* text)
{
	const char* ptr = text;
	unsigned int len = 0;
	while (*(ptr++) != '\0')
		++len;
	return len;
}

int zeichenkette_suchen(const char* text, const char* zkette)
{
	const unsigned int zketteLen = gip_strlen(zkette);
	const unsigned int textLen = gip_strlen(text);
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
