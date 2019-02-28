// Euchre.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <iostream>
#include "DeckEngine.h"
#include "GameBoard.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>

int main()
{
	srand(time(NULL));
	GameBoard deckofCards;
	deckofCards.gameTable();
	std::cin;
	deckofCards.endTheProcess();
}
