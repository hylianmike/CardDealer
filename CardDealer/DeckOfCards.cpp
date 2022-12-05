#include "DeckOfCards.h"
#include <algorithm>

DeckOfCards::DeckOfCards() {
	vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
	vector<string> suits = { "Clubs", "Diamonds", "Hearts", "Spades" };

	for (string& value : values)
		for (string& suit : suits)
			cards.push_back(Card(value, suit));

}

Card DeckOfCards::drawTopCard() {
	return cards.front();
}

void DeckOfCards::removeTopCard() {
	cards.erase(cards.begin());
}

rsize_t DeckOfCards::getDeckSize() {
	return cards.size();
}

void DeckOfCards::shuffle() {
	{
		std::random_shuffle(cards.begin(), cards.end());
	}
}
