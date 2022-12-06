#include "DeckOfCards.h"
#include <algorithm>

// constructor
DeckOfCards::DeckOfCards() {
	vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
	vector<string> suits = { "Clubs", "Diamonds", "Hearts", "Spades" };

	for (string& value : values)
		for (string& suit : suits)
			cards.push_back(Card(value, suit));

}

// method to return the top card of the deck
Card DeckOfCards::drawTopCard() {
	return cards.front();
}

// method to remove the top card from the vector of Cards (the deck)
void DeckOfCards::removeTopCard() {
	cards.erase(cards.begin());
}

// method to return the amount of cards left in the vector (deck)
rsize_t DeckOfCards::getDeckSize() {
	return cards.size();
}

// method to shuffle the vector (deck)
void DeckOfCards::shuffle() {
	std::random_shuffle(cards.begin(), cards.end());
}
