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
	
	bool invalid = true;
	int numCards;
	
	// loops until a valiud input is given
	while (invalid)
	{
		//ask how many cards the user would like
		cout << "How many cards would you like to draw? ";
		cin >> numCards;

		// if user inputs any non-numeric characters, then make them try again
		if (cin.fail()) 
		{
			cout << "Please enter a numerical value.\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		// if user inputs a number less than 1 or over 52, then make them try again
		if (numCards < 1 || numCards > 52)
		{
			cout << numCards << " is not a valid entry. Please ensure your number is between 1 and 52\n";
		}
		else
		{
			invalid = false;
		}
	}
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
	
	// display remaining cards
	cout << "\nThere are " << deck.getDeckSize() << " cards left in the deck." << endl;
}
