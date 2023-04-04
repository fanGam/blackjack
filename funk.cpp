#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
#include <string>

using namespace std;

struct taken {
	int id;
	char name;
	char type;
	int summ;
	taken* Next;
};

typedef taken* takes;

struct TakeTree {
	string names;
	string types;
	int summ;
	TakeTree* Next;
	TakeTree* Down;
};

typedef TakeTree* Trees;

struct Holder {
	int id;
	bool taken;
	char name;
	char type;
	int summ;
	Holder* Next;
};

typedef Holder* Hold;

void HolderInic(Hold& a) {
	a = new Holder;
	Hold b = a, c;
	b->id = 0; b->taken = false; b->name = '2'; b->type = '\3'; b->summ = 2; c = new Holder; b->Next = c; b = c;
	b->id = 1; b->taken = false; b->name = '2'; b->type = '\4'; b->summ = 2; c = new Holder; b->Next = c; b = c;
	b->id = 2; b->taken = false; b->name = '2'; b->type = '\5'; b->summ = 2; c = new Holder; b->Next = c; b = c;
	b->id = 3; b->taken = false; b->name = '2'; b->type = '\6'; b->summ = 2; c = new Holder; b->Next = c; b = c;

	b->id = 4; b->taken = false; b->name = '3'; b->type = '\3'; b->summ = 3; c = new Holder; b->Next = c; b = c;
	b->id = 5; b->taken = false; b->name = '3'; b->type = '\4'; b->summ = 3; c = new Holder; b->Next = c; b = c;
	b->id = 6; b->taken = false; b->name = '3'; b->type = '\5'; b->summ = 3; c = new Holder; b->Next = c; b = c;
	b->id = 7; b->taken = false; b->name = '3'; b->type = '\6'; b->summ = 3; c = new Holder; b->Next = c; b = c;

	b->id = 8; b->taken = false; b->name = '4'; b->type = '\3'; b->summ = 4; c = new Holder; b->Next = c; b = c;
	b->id = 9; b->taken = false; b->name = '4'; b->type = '\4'; b->summ = 4; c = new Holder; b->Next = c; b = c;
	b->id = 10; b->taken = false; b->name = '4'; b->type = '\5'; b->summ = 4; c = new Holder; b->Next = c; b = c;
	b->id = 11; b->taken = false; b->name = '4'; b->type = '\6'; b->summ = 4; c = new Holder; b->Next = c; b = c;

	b->id = 12; b->taken = false; b->name = '5'; b->type = '\3'; b->summ = 5; c = new Holder; b->Next = c; b = c;
	b->id = 13; b->taken = false; b->name = '5'; b->type = '\4'; b->summ = 5; c = new Holder; b->Next = c; b = c;
	b->id = 14; b->taken = false; b->name = '5'; b->type = '\5'; b->summ = 5; c = new Holder; b->Next = c; b = c;
	b->id = 15; b->taken = false; b->name = '5'; b->type = '\6'; b->summ = 5; c = new Holder; b->Next = c; b = c;

	b->id = 16; b->taken = false; b->name = '6'; b->type = '\3'; b->summ = 6; c = new Holder; b->Next = c; b = c;
	b->id = 17; b->taken = false; b->name = '6'; b->type = '\4'; b->summ = 6; c = new Holder; b->Next = c; b = c;
	b->id = 18; b->taken = false; b->name = '6'; b->type = '\5'; b->summ = 6; c = new Holder; b->Next = c; b = c;
	b->id = 19; b->taken = false; b->name = '6'; b->type = '\6'; b->summ = 6; c = new Holder; b->Next = c; b = c;

	b->id = 20; b->taken = false; b->name = '7'; b->type = '\3'; b->summ = 7; c = new Holder; b->Next = c; b = c;
	b->id = 21; b->taken = false; b->name = '7'; b->type = '\4'; b->summ = 7; c = new Holder; b->Next = c; b = c;
	b->id = 22; b->taken = false; b->name = '7'; b->type = '\5'; b->summ = 7; c = new Holder; b->Next = c; b = c;
	b->id = 23; b->taken = false; b->name = '7'; b->type = '\6'; b->summ = 7; c = new Holder; b->Next = c; b = c;

	b->id = 24; b->taken = false; b->name = '8'; b->type = '\3'; b->summ = 8; c = new Holder; b->Next = c; b = c;
	b->id = 25; b->taken = false; b->name = '8'; b->type = '\4'; b->summ = 8; c = new Holder; b->Next = c; b = c;
	b->id = 26; b->taken = false; b->name = '8'; b->type = '\5'; b->summ = 8; c = new Holder; b->Next = c; b = c;
	b->id = 27; b->taken = false; b->name = '8'; b->type = '\6'; b->summ = 8; c = new Holder; b->Next = c; b = c;

	b->id = 28; b->taken = false; b->name = '9'; b->type = '\3'; b->summ = 9; c = new Holder; b->Next = c; b = c;
	b->id = 29; b->taken = false; b->name = '9'; b->type = '\4'; b->summ = 9; c = new Holder; b->Next = c; b = c;
	b->id = 30; b->taken = false; b->name = '9'; b->type = '\5'; b->summ = 9; c = new Holder; b->Next = c; b = c;
	b->id = 31; b->taken = false; b->name = '9'; b->type = '\6'; b->summ = 9; c = new Holder; b->Next = c; b = c;

	b->id = 32; b->taken = false; b->name = '0'; b->type = '\3'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 33; b->taken = false; b->name = '0'; b->type = '\4'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 34; b->taken = false; b->name = '0'; b->type = '\5'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 35; b->taken = false; b->name = '0'; b->type = '\6'; b->summ = 10; c = new Holder; b->Next = c; b = c;

	b->id = 36; b->taken = false; b->name = 'J'; b->type = '\3'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 37; b->taken = false; b->name = 'J'; b->type = '\4'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 38; b->taken = false; b->name = 'J'; b->type = '\5'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 39; b->taken = false; b->name = 'J'; b->type = '\6'; b->summ = 10; c = new Holder; b->Next = c; b = c;

	b->id = 40; b->taken = false; b->name = 'Q'; b->type = '\3'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 41; b->taken = false; b->name = 'Q'; b->type = '\4'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 42; b->taken = false; b->name = 'Q'; b->type = '\5'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 43; b->taken = false; b->name = 'Q'; b->type = '\6'; b->summ = 10; c = new Holder; b->Next = c; b = c;

	b->id = 44; b->taken = false; b->name = 'K'; b->type = '\3'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 45; b->taken = false; b->name = 'K'; b->type = '\4'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 46; b->taken = false; b->name = 'K'; b->type = '\5'; b->summ = 10; c = new Holder; b->Next = c; b = c;
	b->id = 47; b->taken = false; b->name = 'K'; b->type = '\6'; b->summ = 10; c = new Holder; b->Next = c; b = c;

	b->id = 48; b->taken = false; b->name = 'T'; b->type = '\3'; b->summ = 11; c = new Holder; b->Next = c; b = c;
	b->id = 49; b->taken = false; b->name = 'T'; b->type = '\4'; b->summ = 11; c = new Holder; b->Next = c; b = c;
	b->id = 50; b->taken = false; b->name = 'T'; b->type = '\5'; b->summ = 11; c = new Holder; b->Next = c; b = c;
	b->id = 51; b->taken = false; b->name = 'T'; b->type = '\6'; b->summ = 11; b->Next = NULL;
}

void ClearHolder(Hold a) {
	Hold b = a;
	while (b != NULL) {
		b->taken = false;
	}
}

int GetLen(takes a) {
	takes b = a;
	int i = 0;
	while (b != NULL) {
		b = b->Next;
		i++;
	}
	return i;
}

void ShowCards(takes a) {
	takes b = a;
	int Len = GetLen(a);

	for (int i = 0; i < Len; i++) {
		for (int j = 0; j < 10; j++) {
			cout << '_';
		}
		cout << "   ";
	}

	for (int i = 0; i < Len; i++) {
		cout << '|';
		for (int j = 0; j < 8; j++) {
			cout << ' ';
		}
		cout << "|   ";
	}

	for (int i = 0; i < Len; i++) {
		cout << '|';
		for (int j = 0; j < 8; j++) {
			if (j == 1) {
				cout << b->name;
			}
			else if (j == 6) {
				cout << b->type;
			}
			else {
				cout << ' ';
			}
		}
		b = b->Next;
		cout << "|   ";
	}

	b = a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < Len; j++) {
			cout << '|';
			for (int k = 0; k < 8; k++) {
				cout << ' ';
			}
			cout << '|';
		}
	}

	for (int i = 0; i < Len; i++) {
		cout << '|';
		for (int j = 0; j < 8; j++) {
			if (j == 4) {
				cout << b->type;
			}
			else {
				cout << ' ';
			}
		}
		b = b->Next;
		cout << "|   ";
	}

	b = a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < Len; j++) {
			cout << '|';
			for (int k = 0; k < 8; k++) {
				cout << ' ';
			}
			cout << '|';
		}
	}

	for (int i = 0; i < Len; i++) {
		cout << '|';
		for (int j = 0; j < 8; j++) {
			if (j == 6) {
				cout << b->name;
			}
			else if (j == 1) {
				cout << b->type;
			}
			else {
				cout << ' ';
			}
		}
		b = b->Next;
		cout << "|   ";
	}
}

void TakeNewCard(int amount, Hold Cards, takes& Who) {
	if (Who == NULL) {
		int i = rand() % amount;
		Hold a = Cards;
		takes New = new taken;
		while (i != 0) {
			if (a->taken == false) {
				i--;
			}
			a = a->Next;
		}
		New->id = a->id;
		New->name = a->name;
		New->type = a->type;
		New->summ = a->summ;
		New->Next = NULL;
		a->taken = true;
		Who = New;
	}
	else {
		int i = rand() % amount;
		Hold a = Cards;
		takes New = new taken;
		while (i != 0) {
			if (a->taken == false) {
				i--;
			}
			a = a->Next;
		}
		New->id = a->id;
		New->name = a->name;
		New->type = a->type;
		New->summ = a->summ;
		New->Next = NULL;
		Who->Next = New;
	}

}

int GetSumm(takes a) {
	takes b = a;
	if (b->name == 'T') {
		int summa = 11;
		b = b->Next;
		if (b->name == 'T') {
			summa = 21;
		}
		while (b != NULL) {
			summa += b->summ;
			b = b->Next;
		}
		return summa;
	}
	else {
		int summa = 0;
		while (b != NULL) {
			summa += b->summ;
			b = b->Next;
		}
		return summa;
	}
}

void TakeSpecialCard(takes& a, Hold& b) {
	takes c = new taken;
	c->id = b->id;
	c->name = b->name;
	c->summ = b->summ;
	c->type = b->type;
	c->Next = NULL;
	a->Next = c;
	b->taken = true;
}

Trees Chanses(Hold Cards, Trees TreeCh, Trees Curr) {
	if (Curr == NULL) {

	}
	if (Curr->summ >= 21) {
		return NULL;
	}
	else {
		Hold a = Cards;
		for (int i = 0; i < 52; i++) {
			if (a->taken == false) {
				Trees NewTree = new TakeTree;
				NewTree->names = TreeCh->names + a->name;
				NewTree->types = TreeCh->types + a->type;
				NewTree->summ = TreeCh->summ + a->summ;
				NewTree->Next = NULL;
				Curr->Next = NewTree;
				Curr->Down = Chanses(Cards, Curr, Curr->Down);
			}
			a = a->Next;
		}
	}
}

float ChanseNext(takes Who, Trees TreeCh) {
	int eightteen = 0, nineteen = 0, twenty = 0, twentyone = 0, more = 0, less = 0, all = 0;
	Trees Crr = TreeCh;
	Crr = Crr->Down;
	while (Crr->Next != NULL) {
		switch (Crr->summ)
		{
		case 18: eightteen++; break;
		case 19: nineteen++; break;
		case 20: twenty++; break;
		case 21: twentyone++; break;
		default:
			if (Crr->summ > 21) more++;
			else less++;
			break;
		}
		all++;
		Crr = Crr->Next;
	}
	cout << "eightteen: " << eightteen << endl;
	cout << "nineteen: " << nineteen << endl;
	cout << "twenty: " << twenty << endl;
	cout << "twentyone: " << twentyone << endl;
	return (eightteen + nineteen + twenty + twentyone + less) / all;
}

void ChanseAll(takes Who, Trees TreeCh) {

}

void PlayGame(Hold Cards) {
	takes Player = NULL;
	takes Bot = NULL;
	int amount = 52;
	TakeNewCard(amount, Cards, Player);
	amount--;
	TakeNewCard(amount, Cards, Player);
	amount--;
	TakeNewCard(amount, Cards, Bot);
	amount--;
	cout << "Bot have:" << endl;
	ShowCards(Bot);
	cout << "------------------------------" << endl;
	cout << "You have:" << endl;
	ShowCards(Player);
	string Inp = "-";
	while (Inp != "No") {
		cout << "Do you want to take new card?" << endl;
		cout << "Type |Yes| to take or |No| to stop or |Help| to calculate chanses!" << endl;
		cout << "-> ";
		cin >> Inp;
		if (Inp == "Yes") {
			TakeNewCard(amount, Cards, Player);
			amount--;
			cout << "Now you have:" << endl;
			cout << endl;
			ShowCards(Player);
		}
		else if (Inp == "Help") {

		}
		else if (Inp != "No") {
			cout << "Wrong input! Try again!" << endl;
		}
	}
	if (GetSumm(Player) > 21) {
		cout << "You lose!" << endl;
	}
	else {

	}
}