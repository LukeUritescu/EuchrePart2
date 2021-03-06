#pragma 
#ifndef EUCHRE_USER_H
#define EUCHRE_USER_H

#include <iostream>
#include <string>
#include <vector>

#include "Cards.h"
#include "DeckEngine.h"
class User
{
public:
	void acquireCard(Cards card);
	void showHand(std::string name);
	
	bool findJackInHand();
	bool hasJackSameSuitColor(std::string suit, bool red);
	bool hasJackTrumpSuit(std::string suit);

	void decisionOnTrumpCard(std::string suit, bool red);

	bool getShouldThisTopCardBeTrump();

	void whenTheDealerDoesNotLikeTrumpCard(int spades, int clubs, int diamonds, int hearts);

	std::string getSuitTrump();
	bool getRed();

	int numberOfSpadesInHand();
	int numberOfHeartsInHand();
	int numberOfClubsInHand();
	int numberOfDiamondsInHand();

protected:
	std::vector<Cards> hand;
	bool hasJack;
	bool jackSuitColor;
	bool jackOfTheTrumpSuit;
	bool redTrump;
	std::string suitTrump;
	int numberOfRedCards;
	int numberOfBlackCards;

	
	bool shouldThisTopCardBeTrump;
};

#endif // !EUCHRE_USER_H
