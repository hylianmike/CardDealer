#ifndef GROUP_5_CARD
#define GROUP_5_CARD

#include <string>

using namespace std;

class Card {
private:
	string value;
	string suit;
public:
	Card();
	string ToString();
};

#endif