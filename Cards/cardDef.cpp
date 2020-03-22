#include <iostream>
#include "cardProto.h"
#include<cstdlib>
#include <time.h> 
using namespace std;

Card::Card(face ff, suit ss ): f(ff), s(ss){
	
}

Card::Card(){
	
}

string Card::toString(){
	
	return faces[f] + " of " + suits[s] ;
}

DeckOfCards::DeckOfCards(){
	int count = 0;
	
	Card::face f[13] = {Card::ace, Card::two, Card::three, Card::four, Card::five, Card::six, Card::seven,Card::eight, Card::nine, Card::ten, Card::jack, Card::queen, Card::king};
	Card::suit s[4] = {Card::spades, Card::clubs, Card::diamonds, Card::hearts};
	
	for(int i = 0; i < 13 ; i++){
		for(int j = 0 ; j < 4; j++){
			deck[count] = new Card(f[i],s[j]);
			count++;
		}
	}
}

void DeckOfCards::toString(){
	for(int i = 0; i < 52; i++){
		cout<< deck[i]->toString() << endl;
	}
}

void DeckOfCards::shuffle(){
	
	int randCard = 0;
	srand (time(NULL));
	for(int i = 0; i < 52; i++){
		
		randCard = rand() % 52 ;
		
		Card* temp = deck[i] ;
		deck[i] = deck[randCard];
		deck[randCard] = temp;
		
	}
}

Card* DeckOfCards::dealCard(){
	if(currentCards > 51){
		currentCards = 0;
		
	}
	Card * c = deck[currentCards];
	currentCards ++;
	return c;
}


bool DeckOfCards:: moreCards(){
	if(currentCards > 51){
		return false;
	}
	return true;
}
