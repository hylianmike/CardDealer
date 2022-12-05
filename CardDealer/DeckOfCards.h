#ifndef GROUP_5_DECK_OF_CARDS
#define GROUP_5_DECK_OF_CARDS

#include<vector>
#include "Card.h"

using namespace std;

class DeckOfCards {
private:
	vector<Card> cards;
public:
	DeckOfCards();
	Card drawTopCard();
	void removeTopCard();
};

#endif