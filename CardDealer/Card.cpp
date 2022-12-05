#include "Card.h"

Card::Card(string value, string suit) {
	this->value = value;
	this->suit = suit;
}

string Card::ToString() {
	return value + " of " + suit;
}