#include "Card.h"

// constructor
Card::Card(string value, string suit) {
	this->value = value;
	this->suit = suit;
}

// method to display the card's value and suit
string Card::ToString() {
	return value + " of " + suit;
}