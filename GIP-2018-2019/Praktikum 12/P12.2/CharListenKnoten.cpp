#include "CharListenKnoten.h"

CharListenKnoten::CharListenKnoten() : data(0), next(nullptr) {}

CharListenKnoten::CharListenKnoten(char data) : data(data), next(nullptr) {}

void CharListenKnoten::add(char data)
{
	if (next)
		next->add(data);
	else
		next = new CharListenKnoten(data);
}
