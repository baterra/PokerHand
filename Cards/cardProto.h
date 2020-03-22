using namespace std;

class Card{
	private:
		string faces [13] = { "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "ace"};
		string suits[4] = {"spades","clubs","diamonds","hearts"};
		int f;
		int s;
	public:
		
		enum face { ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };
		enum suit { spades, clubs, diamonds, hearts  };
		
		//constructors
		Card(face , suit  );
		Card( );
		
		//posttest: returns a string rep. of this card
		string toString();
		
		//posttest: returns this card's face as a number
		int getFace(){
			return f;
		}
		
		//posttest: returns this card's suit as a number
		int getSuit(){
			return s;
		}
		
	
};


class DeckOfCards{
	private:
		Card * deck[52] ;
		int currentCards = 0;
		
	public:
		//constructors
		DeckOfCards();
		
		//posttest: shuffles the deck
		void shuffle();
		
		//posttest: prints all the cards in this deck
		void toString();
		
		//posttest: returns the next card on top of the deck(returned as a pointer)
		Card* dealCard();
		
		//posttest: returns true if there is still more cards in the deck and false otherwise
		bool moreCards();
		
		
};
