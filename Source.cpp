#include <iostream>
#include "Header.h"

using namespace std;

void main() {
	string Inp = "-";
	int Bal;
	int Amount;
	int Wins = 0;
	float Chan;
	float Bet;
	float NewBet;
	float Mull;
	while (Inp != "Exit") {
		cout << "Type what do you want to do!" << endl;
		cout << "Play - to play a game!" << endl;
		cout << "Sim1 - to simulate with chanses!" << endl;
		cout << "Sim2 - to simulate with chanses with balance!" << endl;
		cout << "Exit - to exit" << endl;
		cout << "-> ";
		cin >> Inp;
		if (Inp == "Play") {
			PlayGame2();
		}
		else if (Inp == "Sim1") {
			cout << "Type what chanse do you want to test:" << endl;
			cout << "-> ";
			cin >> Chan;
			cout << "Type how many tries do you want:" << endl;
			cout << "-> ";
			cin >> Amount;
			Wins = 0;
			for (int i = 0; i < Amount; i++) {
				if (Simulation(Chan)) {
					Wins++;
				}
				if (i % 10 == 0) {
					cout << i + 1 << " attemps simulated!" << endl;
				}
			}
			Bet = Wins / (float)Amount;
			cout << "There is " << Bet * 100 << "% chanse to win" << endl;
		}
		else if (Inp == "Sim2") {
			cout << "Type what chanse do you want to test:" << endl;
			cout << "-> ";
			cin >> Chan;
			cout << "Type how many trys do you want:" << endl;
			cout << "-> ";
			cin >> Amount;
			cout << "Type your start balanse" << endl;
			cout << "-> ";
			cin >> Bal;
			cout << "Type your normal bet!" << endl;
			cout << "-> ";
			cin >> Bet;
			NewBet = Bet;
			cout << "Type multiplyer after lose!" << endl;
			cout << "-> ";
			cin >> Mull;
			Wins = 0;
			for (int i = 0; i < Amount; i++) {
				if (Simulation(Chan)) {
					Bal += NewBet;
					Wins++;
					NewBet = Bet;
				}
				else {
					Bal -= NewBet;
					NewBet *= Mull;
				}
				if (i % 10 == 0) {
					cout << i << " attemps simulated! Your bal -> " << Bal << endl;
				}
			}
			Bet = Wins / (float)Amount;
			cout << "There is " << Bet  * 100 << "% chanse to win"  << endl;
			cout << "You have " << Bal << " left" << endl;
		}
	}
}