#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP05.h"
using namespace std;
using namespace cimg_library;

const int grid_size = 10; // Anzahl an Kaestchen in x- und y-Richtung
const int box_size = 30;  // size der einzelnen Kaestchen (in Pixel)
const int border = 20;    // Rand links und oben bis zu den ersten Kaestchen (in Pixel)

// Prototyp der Funktionen zum Vorbelegen des Grids ...
void grid_init(bool grid[][grid_size]);

bool ShouldFieldBeAlive(unsigned int, unsigned int, bool, bool[][grid_size]);

int main()
{
    bool grid[grid_size][grid_size] = { 0 };
    bool next_grid[grid_size][grid_size] = { 0 };

    // Erstes Grid vorbelegen ...
    grid_init(grid);

    while (gip_window_not_closed())
    {
        // Spielfeld anzeigen ...
        // Ggfs gip_stop_updates();
        // TO DO
		gip_stop_updates();
		for (unsigned int x = 0; x < grid_size; ++x)
			for (unsigned int y = 0; y < grid_size; ++y)
				gip_draw_rectangle(border + (x * box_size), border + (y * box_size),
					border + (x * box_size) + box_size, border + (y * box_size) + box_size,
					grid[x][y] ? green : white);	

        gip_start_updates();
        gip_sleep(3);

        // Berechne das naechste Spielfeld ...
        // Achtung; Für die Zelle (x,y) darf die Position (x,y) selbst *nicht*
        // mit in die Betrachtungen einbezogen werden.
        // Ausserdem darf bei zellen am rand nicht über den Rand hinausgegriffen
        // werden (diese Zellen haben entsprechend weniger Nachbarn) ...

        // TO DO
		for (unsigned int x = 0; x < grid_size; ++x) 		
			for (unsigned int y = 0; y < grid_size; ++y) 							
				next_grid[x][y] = ShouldFieldBeAlive(x, y, grid[x][y], grid);			

        // Kopiere das naechste Spielfeld in das aktuelle Spielfeld ...
        // TO DO
		for (unsigned int x = 0; x < grid_size; ++x)
			for (unsigned int y = 0; y < grid_size; ++y)
				grid[x][y] = next_grid[x][y];
    }
    return 0;
}

void grid_init(bool grid[][grid_size])
{
    int eingabe = -1;
    do {
        cout << "Bitte waehlen Sie die Vorbelegung des Grids aus:" << endl
            << "0 - Zufall" << endl
            << "1 - Statisch" << endl
            << "2 - Blinker" << endl
            << "3 - Oktagon" << endl
            << "4 - Gleiter" << endl
            << "5 - Segler 1 (Light-Weight Spaceship)" << endl
            << "6 - Segler 2 (Middle-Weight Spaceship)" << endl
            << "? ";
        cin >> eingabe;
        cin.clear();
        cin.ignore(1000, '\n');
    } while (eingabe < 0 || eingabe > 6);

    if (eingabe == 0)
    {
        // Erstes Grid vorbelegen (per Zufallszahlen) ...
        // TO DO
		for (int y = 0; y < grid_size; y++)
			for (int x = 0; x < grid_size; x++)
				grid[x][y] = gip_random(0, 1);

    }
    else if (eingabe == 1)
    {
        const int pattern_size = 3;
        char pattern[pattern_size][pattern_size] = 
        {
            { '.', '*', '.' },
            { '*', '.', '*' },
            { '.', '*', '.' },
        };
        for (int y = 0; y < pattern_size; y++) 
            for (int x = 0; x < pattern_size; x++) 
                if (pattern[y][x] == '*') 
                    grid[x][y+3] = true;
    }
    else if (eingabe == 2)
    {
        const int pattern_size = 3;
        char pattern[pattern_size][pattern_size] =
        {
            { '.', '*', '.' },
            { '.', '*', '.' },
            { '.', '*', '.' },
        };
        for (int y = 0; y < pattern_size; y++) 
            for (int x = 0; x < pattern_size; x++) 
                if (pattern[y][x] == '*') 
                    grid[x][y+3] = true;
    }
    else if (eingabe == 3)
    {
		const int pattern_size = 8;
		char pattern[pattern_size][pattern_size] =
		{
		{ '.', '.', '.', '*', '*', '.', '.', '.' },
		{ '.', '.', '*', '.', '.', '*', '.', '.' },
		{ '.', '*', '.', '.', '.', '.', '*', '.' },
		{ '*', '.', '.', '.', '.', '.', '.', '*' },
		{ '*', '.', '.', '.', '.', '.', '.', '*' },
		{ '.', '*', '.', '.', '.', '.', '*', '.' },
		{ '.', '.', '*', '.', '.', '*', '.', '.' },
		{ '.', '.', '.', '*', '*', '.', '.', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 1] = true;
    }
    else if (eingabe == 4)
    {
        const int pattern_size = 3;
        char pattern[pattern_size][pattern_size] =
        {
            { '.', '*', '.' },
            { '.', '.', '*' },
            { '*', '*', '*' },
        };
        for (int y = 0; y < pattern_size; y++) 
            for (int x = 0; x < pattern_size; x++) 
                if (pattern[y][x] == '*') 
                    grid[x][y+3] = true;
    }
    else if (eingabe == 5)
    {
        const int pattern_size = 5;
        char pattern[pattern_size][pattern_size] =
        {
            { '*', '.', '.', '*', '.' },
            { '.', '.', '.', '.', '*' },
            { '*', '.', '.', '.', '*' },
            { '.', '*', '*', '*', '*' },
            { '.', '.', '.', '.', '.' },
        };
        for (int y = 0; y < pattern_size; y++) 
            for (int x = 0; x < pattern_size; x++) 
                if (pattern[y][x] == '*') 
                    grid[x][y+3] = true;
    }
    else if (eingabe == 6)
    {
        const int pattern_size = 6;
        char pattern[pattern_size][pattern_size] =
        {
            { '.', '*', '*', '*', '*', '*' },
            { '*', '.', '.', '.', '.', '*' },
            { '.', '.', '.', '.', '.', '*' },
            { '*', '.', '.', '.', '*', '.' },
            { '.', '.', '*', '.', '.', '.' },
            { '.', '.', '.', '.', '.', '.' },
        };
        for (int y = 0; y < pattern_size; y++) 
            for (int x = 0; x < pattern_size; x++) 
                if (pattern[y][x] == '*') 
                    grid[x][y+3] = true;
    }
}

bool ShouldFieldBeAlive(unsigned int aX, unsigned int aY, bool aCurrentlyAlive, bool aGrid[][grid_size])
{
	unsigned int aliveCellsCounter = 0, endX = 0, endY = 0;
	unsigned int startX = aX > 0 ? aX - 1 : aX;
	unsigned int startY = aY > 0 ? aY - 1 : aY;

	if (aX == 0)
		endX = startX + 1;
	else if (aX == grid_size - 1)
		endX = startX;
	else
		endX = startX + 2;

	if (aY == 0)
		endY = startY + 1;
	else if (aY == grid_size - 1)
		endY = startY;
	else
		endY = startY + 2;

	for (unsigned int x = startX; x <= endX; ++x)
		for (unsigned int y = startY; y <= endY; ++y)
			if ((x != aX || y != aY) && aGrid[x][y])
				++aliveCellsCounter;

	return aCurrentlyAlive ? aliveCellsCounter == 2 || aliveCellsCounter == 3 : aliveCellsCounter == 3;
}