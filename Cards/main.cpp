#include <iostream>
#include "cardProto.h"
#include <iomanip>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void straight(Card * a[]){
	int num = a[0]->getFace();
	bool f = true;
	
	for(int i = 1; i < 5; i++){
		if(num != 1 + (a[i] -> getFace())){
			f = false;
			i = 6;
		}
	}
	
	if(f){
		cout<< " Straight ";
	}
	
}

void flush(Card * a[]){
	int num = a[0]->getSuit();
	bool f = true;
	
	for(int i = 1; i < 5; i++){
		if(num != (a[i] -> getSuit())){
			f = false;
			i = 6;
		}
	}
	
	if(f){
		cout<< " flush ";
	}
	
}

void  fourKind(Card * a[]){
	int num = a[0]->getFace();
	
	int count1 = 0;
	int count2 = 0;
	int count3= 0;
	int count4 = 0;
	int count5 = 0;
	
	for(int i = 0; i < 5; i++){
		if(a[0]->getFace() == (a[i] -> getFace())){
			count1++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[1]->getFace() == (a[i] -> getFace())){
			count2++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[2]->getFace() == (a[i] -> getFace())){
			count3++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[3]->getFace() == (a[i] -> getFace())){
			count4++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[4]->getFace() == (a[i] -> getFace())){
			count5++;
		}
	}
	
	if(count1 == 4 || count2 == 4 || count3 == 4 || count4 == 4 || count5 == 4 ){
		cout<< "  four of a kind ";
	}
	
}

void  threeKind(Card * a[]){
	int num = a[0]->getFace();
	
	int count1 = 0;
	int count2 = 0;
	int count3= 0;
	int count4 = 0;
	int count5 = 0;
	
	for(int i = 0; i < 5; i++){
		if(a[0]->getFace() == (a[i] -> getFace())){
			count1++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[1]->getFace() == (a[i] -> getFace())){
			count2++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[2]->getFace() == (a[i] -> getFace())){
			count3++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[3]->getFace() == (a[i] -> getFace())){
			count4++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[4]->getFace() == (a[i] -> getFace())){
			count5++;
		}
	}
	
	if(count1 == 3 || count2 == 3 || count3 == 3 || count4 == 3 || count5 == 3 ){
		cout<< "  three of a kind ";
	}
	
}


//void  onePair(Card * a[]){
//	int num = a[0]->getFace();
//	
//	int count1 = 0;
//	int count2 = 0;
//	int count3= 0;
//	int count4 = 0;
//	int count5 = 0;
//	
//	for(int i = 0; i < 5; i++){
//		if(a[0]->getFace() == (a[i] -> getFace())){
//			count1++;
//		}
//	}
//	
//	for(int i = 0; i < 5; i++){
//		if(a[1]->getFace() == (a[i] -> getFace())){
//			count2++;
//		}
//	}
//	
//	for(int i = 0; i < 5; i++){
//		if(a[2]->getFace() == (a[i] -> getFace())){
//			count3++;
//		}
//	}
//	
//	for(int i = 0; i < 5; i++){
//		if(a[3]->getFace() == (a[i] -> getFace())){
//			count4++;
//		}
//	}
//	
//	for(int i = 0; i < 5; i++){
//		if(a[4]->getFace() == (a[i] -> getFace())){
//			count5++;
//		}
//	}
//	
//
//		bool b = false;
//		if(count1 == 2){
//				b = !b;
//		}
//		if(count2 == 2){
//				b = !b;
//		}
//		if(count3 == 2){
//				b = !b;
//		}
//		if(count4 == 2){
//				b = !b;
//		}
//		if(count5 == 2){
//				b = !b;
//		}
//			
//		
//		if(b){
//			cout<< "  one pair ";
//		}
//		
//	
//	
//}


void  onePair(Card * a[]){
	int num = a[0]->getFace();
	
	int count1 = 0;
	int count2 = 0;
	int count3= 0;
	int count4 = 0;
	int count5 = 0;
	
	for(int i = 0; i < 5; i++){
		if(a[0]->getFace() == (a[i] -> getFace())){
			count1++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[1]->getFace() == (a[i] -> getFace())){
			count2++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[2]->getFace() == (a[i] -> getFace())){
			count3++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[3]->getFace() == (a[i] -> getFace())){
			count4++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[4]->getFace() == (a[i] -> getFace())){
			count5++;
		}
	}
	

		int countPair = 0;
		if(count1 == 2){
				countPair++;
		}
		if(count2 == 2){
				countPair++;
		}
		if(count3 == 2){
				countPair++;
		}
		if(count4 == 2){
				countPair++;
		}
		if(count5 == 2){
				countPair++;
		}
			
		
		if(countPair == 2){
			cout<< "  one pair ";
		}
		
	
	
}


void  twopair(Card * a[]){
	int num = a[0]->getFace();
	
	int count1 = 0;
	int count2 = 0;
	int count3= 0;
	int count4 = 0;
	int count5 = 0;
	
	for(int i = 0; i < 5; i++){
		if(a[0]->getFace() == (a[i] -> getFace())){
			count1++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[1]->getFace() == (a[i] -> getFace())){
			count2++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[2]->getFace() == (a[i] -> getFace())){
			count3++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[3]->getFace() == (a[i] -> getFace())){
			count4++;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(a[4]->getFace() == (a[i] -> getFace())){
			count5++;
		}
	}
	

		int countPair = 0;
		if(count1 == 2){
				countPair++;
		}
		if(count2 == 2){
				countPair++;
		}
		if(count3 == 2){
				countPair++;
		}
		if(count4 == 2){
				countPair++;
		}
		if(count5 == 2){
				countPair++;
		}
			
		
		if(countPair == 4){
			cout<< "  two pair ";
		}
		
	
	
}

int main() {


	DeckOfCards playDeck;
	DeckOfCards playDeck2;
		for(int i = 1 ; i<= 52 ; i++){
		
		cout <<setw(10)<< playDeck2.dealCard()->toString() << "		";
		if(i % 2 == 0){
			cout <<endl;
			
		}
	}

	
	playDeck.shuffle();
	playDeck2.shuffle();
	
	Card a;
	Card * card5 [5];
	string input = "";
	
	cout << "		"<<endl;
	cout << "		"<<endl;
	
	for(int i = 1 ; i<= 52 ; i++){
		
		cout <<setw(10)<< playDeck2.dealCard()->toString() << "		";
		if(i % 2 == 0){
			cout <<endl;
			
		}
	}
	
	cout << "		"<<endl;
	cout << "		"<<endl;

	while(playDeck.moreCards())
	{
		
		for(int i = 0; i < 5 ; i++){
			if(playDeck.moreCards()){
				
				 
				//cout<<a.toString();
				card5[i] =  playDeck.dealCard();
			}
			
		}
		
		if(playDeck.moreCards()){
			cout<< "5 cards are: " << endl;
			for(int i = 0; i < 5 ; i++){
				
				Card * a = card5[i];
				cout<< a->toString()<<endl;
				
			}
			
			
			
			cout<<" "<< endl;
			
			
			straight(card5);
			flush(card5);
			fourKind(card5);
			threeKind(card5);
			twopair(card5);
			onePair(card5);
			
			cout<<" "<< endl;
			
			
			cout<<"enter any key to deal the next 5 cards:" << endl;
			cin>> input;
			cout<<" "<< endl;
			
			
			
		}
		else{
			cout<<"Not enough cards left to deal." << endl;
		}
		}
	



	
	
	
	
	return 0;
}
