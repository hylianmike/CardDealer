#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main() {
	cout << "Group 5: Liam S, Alessio S, Jack D, Michael R" << endl;
	cout << "C++ Assignment 2" << endl;
	cout << "==============================================" << endl;
	cout << "Card Dealers" << endl;
	cout << endl << endl << "I have shuffled the deck of 52 cards." << endl << endl;
	
	// random seed
	srand(time(nullptr));
	
	//ask how many cards the user would like
	int numCards;
	cout << "How many cards would you like to draw? ";
	cin >> numCards;
	cout << endl;
	
	//create a deck of cards
	DeckOfCards deck;
	
	//shuffle the deck
	deck.shuffle();
	
	//draw and display the cards
	cout << "Here are your cards:" << endl;
	for (int i = 0; i < numCards; i++) {
		cout << "Card " << i + 1 << ": " << deck.drawTopCard().ToString() << endl;
		deck.removeTopCard();
	}
}
