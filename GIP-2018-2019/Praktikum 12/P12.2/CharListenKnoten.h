#pragma once

class CharListenKnoten
{
public:
	CharListenKnoten();
	CharListenKnoten(char data);

	void add(char data);

	inline char get_data() const { return data; }
	inline CharListenKnoten* get_next() const { return next; }

	inline void set_data(char data) { this->data = data; }	
	inline void set_next(CharListenKnoten* next_knoten) { this->next = next_knoten; }

private:
	char data;
	CharListenKnoten* next;
};