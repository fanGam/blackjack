#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
#include <string>
#include "Header.h"

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

struct ChanseFor {
	int eightteen;
	int nineteen;
	int twenty;
	int twentyone;
	int more;
	int less;
	int all;
};

typedef ChanseFor* Calc;

int GetLen(takes a) {
	int i = 0;
	while (a != NULL) {
		a = a->Next;
		i++;
	}
	return i;
}

void ClearHolder(Hold a) {
	Hold b = a;
	while (b != NULL) {
		b->taken = false;
		b = b->Next;
	}
}

void ShowCards(takes a) {
	takes b = a;
	int Len = GetLen(a);

	for (int i = 0; i < Len; i++) {
		cout << "_________" << "   ";
	}
	cout << endl;

	for (int i = 0; i < Len; i++) {
		cout << "|       |" << "   ";
	}
	cout << endl;

	for (int i = 0; i < Len; i++) {
		if (b->name == '0') {
			cout << "| " << setw(6) << left << "10" << "|" << "   ";
		}
		else {
			cout << "| " << setw(6) << left << b->name << "|" << "   ";
		}
		b = b->Next;
	}
	cout << endl;
	b = a;

	for (int i = 0; i < Len; i++) {
		cout << "|       |" << "   ";
	}
	cout << endl;

	for (int i = 0; i < Len; i++) {
		cout << "|   " << b->type << "   |" << "   ";
		b = b->Next;
	}
	cout << endl;
	b = a;

	for (int i = 0; i < Len; i++) {
		cout << "|       |" << "   ";
	}
	cout << endl;

	for (int i = 0; i < Len; i++) {
		if (b->name == '0') {
			cout << "| " << setw(5) << right << "10" << " |" << "   ";
		}
		else {
			cout << "| " << setw(5) << right << b->name << " |" << "   ";
		}
		b = b->Next;
	}
	cout << endl;

	for (int i = 0; i < Len; i++) {
		cout << "_________" << "   ";
	}
	cout << endl;
}

void TakeNewCard(int amount, Hold& Cards, takes& Who) {
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
		takes WhoS = Who;
		while (WhoS->Next != NULL) {
			WhoS = WhoS->Next;
		}
		WhoS->Next = New;
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

Hold TakeFirst(Hold Cards) {
	Hold a = Cards;
	for (int i = 0; i < 52; i++) {
		if (a->taken == false) {
			a->taken = true;
			return a;
		}
		a = a->Next;
	}
	return NULL;
}

Hold ReInic(Hold Cards, Trees Curr) {
	int i = 0;
	int Lim = Curr->names.length();
	Hold Head = Cards;
	while (i < Lim) {
		if (Curr->names[i] == Cards->name && Curr->types[i] == Cards->type) {
			Cards->taken = true;
			Cards = Head;
			i++;
		}
		else {
			Cards = Cards->Next;
		}
	}
	return Head;
}

void Chanses(Hold Cards, Trees& TreeCh) {
	
	if (TreeCh->summ > 21) {
		return;
	}
	else {
		Hold a = Cards;
		Trees Curr = NULL;
		Trees NewCurr = NULL;
		bool First = true;
		for (int i = 0; i < 52; i++) {
			if (a->taken == false) {
				a->taken = true;
				if (First) {
					NewCurr = new TakeTree;
					NewCurr->names = TreeCh->names + a->name;
					NewCurr->types = TreeCh->types + a->type;
					NewCurr->summ = TreeCh->summ + a->summ;
					NewCurr->Next = NULL;
					NewCurr->Down = NULL;
					TreeCh->Down = NewCurr;
					Curr = NewCurr;
					First = false;
				}
				else {
					NewCurr = new TakeTree;
					NewCurr->names = TreeCh->names + a->name;
					NewCurr->types = TreeCh->types + a->type;
					NewCurr->summ = TreeCh->summ + a->summ;
					NewCurr->Next = NULL;
					NewCurr->Down = NULL;
					Curr->Next = NewCurr;
					Curr = NewCurr;
				}
			}
			a = a->Next;
		}
		Curr = TreeCh->Down;
		ClearHolder(Cards);
		while (Curr != NULL) {
			//cout << Curr->names << " " << Curr->types << " " << Curr->names  << " " << Curr->summ << endl;
			if (Curr->summ < 21) {
				Cards = ReInic(Cards, Curr);
				Chanses(Cards, Curr);
			}
			Curr = Curr->Next;
		}
	}
}

void ChansesClear(Calc& Chanses) {
	Chanses->eightteen = 0;
	Chanses->nineteen = 0;
	Chanses->twenty = 0;
	Chanses->twentyone = 0;
	Chanses->less = 0;
	Chanses->more = 0;
	Chanses->all = 0;
}

Calc ChanseNext(Trees Treech, Calc Chanses) {
	Trees Crr = Treech;
	ChansesClear(Chanses);
	while (Crr != NULL) {
		switch (Crr->summ)
		{
		case 18: Chanses->eightteen++; break;
		case 19: Chanses->nineteen++; break;
		case 20: Chanses->twenty++; break;
		case 21: Chanses->twentyone++; break;
		default:
			if (Crr->summ > 21) Chanses->more++;
			else Chanses->less++;
			break;
		}
		Chanses->all++;
		Crr = Crr->Next;
	}
	return Chanses;
}


void DestroyPerson(takes& Who) {
	delete Who;
}

void DestroyTree(Trees& a) {
	if (a->Next != NULL) DestroyTree(a->Next);
	if (a->Down != NULL) DestroyTree(a->Down);
	delete a;
}

void DestroyHolder(Hold& a) {
	if (a->Next != NULL) DestroyHolder(a->Next);
	delete a;
}

void DestroyChanses(Calc& c) {
	delete c;
}

string NamesWho(takes a) {
	string b = "";
	while (a != NULL) {
		b += a->name;
		a = a->Next;
	}
	return b;
}

string TypesWho(takes a) {
	string b = "";
	while (a != NULL) {
		b += a->type;
		a = a->Next;
	}
	return b;
}

int SummWho(takes a) {
	int b = 0;
	while (a != NULL) {
		b += a->summ;
		a = a->Next;
	}
	return b;
}

string GetDiff(string a, string b) {
	string c = "";
	for (int i = a.length(); i < b.length(); i++) {
		c += b[i];
	}
	return c;
}

void PlayGame2() {
	Hold Cards;
	HolderInic(Cards);
	ClearHolder(Cards);
	takes Player = NULL;
	takes Bot = NULL;
	Calc ChanseA = new ChanseFor;
	Trees TreeCh = NULL;
	Trees Smaller = NULL;
	int amount = 52;
	float Summa;
	string NamesTo;
	string TypesTo;
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
	TreeCh = new TakeTree;
	TreeCh->names = NamesWho(Player);
	TreeCh->summ = SummWho(Player);
	TreeCh->types = TypesWho(Player);
	TreeCh->Down = NULL;
	TreeCh->Next = NULL;
	Chanses(Cards, TreeCh);
	Smaller = TreeCh;
	while (Inp != "No") {

		cout << "Do you want to take new card?" << endl;
		cout << "Type |Yes| to take or |No| to stop or |Help| to calculate chanses!" << endl;
		cout << "-> ";
		cin >> Inp;
		if (Inp == "Yes") {
			TakeNewCard(amount, Cards, Player);
			amount--;
			Smaller = Smaller->Down;
			NamesTo = NamesWho(Player);
			TypesTo = TypesWho(Player);
			while (Smaller->names != NamesTo && Smaller->types != TypesTo) {
				Smaller = Smaller->Next;
			}
			cout << "Now you have:" << endl;
			cout << endl;
			ShowCards(Player);
		}
		else if (Inp == "Help") {
			ChanseA = ChanseNext(Smaller->Down, ChanseA);
			/*cout << ChanseA->eightteen << endl <<
				ChanseA->nineteen << endl <<
				ChanseA->twenty << endl <<
				ChanseA->twentyone << endl <<
				ChanseA->less << endl <<
				ChanseA->more << endl <<
				ChanseA->all << endl;*/
			Summa = ChanseA->all - ChanseA->more;
			cout << "Your chanse to get good -> " << (Summa / ChanseA->all) * 100 << "%" << endl;
		}
		else if (Inp != "No") {
			cout << "Wrong input! Try again!" << endl;
		}
		if (GetSumm(Player) > 21) {
			cout << "You lose!" << endl;
			break;
		}
	}
	if (GetSumm(Player) <= 21) {
		DestroyTree(TreeCh);
		TreeCh = new TakeTree;
		TreeCh->names = NamesWho(Bot);
		TreeCh->summ = SummWho(Bot);
		TreeCh->types = TypesWho(Bot);
		TreeCh->Down = NULL;
		TreeCh->Next = NULL;
		Chanses(Cards, TreeCh);
		Smaller = TreeCh;
		Summa = 1;
		while (Summa > 0.3) {
			TakeNewCard(amount, Cards, Bot);
			amount--;
			cout << "Bot Got:" << endl;
			ShowCards(Bot);
			cout << "--------------" << endl;
			Smaller = Smaller->Down;
			NamesTo = NamesWho(Bot);
			TypesTo = TypesWho(Bot);
			while (Smaller->names != NamesTo && Smaller->types != TypesTo) {
				Smaller = Smaller->Next;
			}
			if (Smaller == NULL) {
				cout << "You win!" << endl;
				break;
			}
			ChanseA = ChanseNext(Smaller->Down, ChanseA);
			Summa = (ChanseA->all - ChanseA->more) / ChanseA->all;
		}
		if (GetSumm(Bot) >= GetSumm(Player) && GetSumm(Bot) <= 21) {
			cout << "You lose!" << endl;
		}
		else {
			cout << "You win!" << endl;
		}
		DestroyTree(TreeCh);
		DestroyChanses(ChanseA);
		DestroyPerson(Player);
		DestroyPerson(Bot);
	}
	else {
		DestroyTree(TreeCh);
		DestroyChanses(ChanseA);
		DestroyPerson(Player);
		DestroyPerson(Bot);
	}
}

bool Simulation(float Chan) {
	Hold Cards;
	HolderInic(Cards);
	ClearHolder(Cards);
	takes Player = NULL;
	takes Bot = NULL;
	Calc ChanseA = new ChanseFor;
	Trees TreeCh = NULL;
	Trees Smaller = NULL;
	int amount = 52;
	float Summa = 1;
	bool win;
	string NamesTo;
	string TypesTo;
	TakeNewCard(amount, Cards, Player);
	amount--;
	TakeNewCard(amount, Cards, Player);
	amount--;
	TakeNewCard(amount, Cards, Bot);
	amount--;
	TreeCh = new TakeTree;
	TreeCh->names = NamesWho(Player);
	TreeCh->summ = SummWho(Player);
	TreeCh->types = TypesWho(Player);
	TreeCh->Down = NULL;
	TreeCh->Next = NULL;
	Chanses(Cards, TreeCh);
	Smaller = TreeCh;
	while (Chan < Summa) {
		TakeNewCard(amount, Cards, Player);
		amount--;
		Smaller = Smaller->Down;
		NamesTo = NamesWho(Player);
		TypesTo = TypesWho(Player);
		while (Smaller != NULL && Smaller->names != NamesTo && Smaller->types != TypesTo) {
			Smaller = Smaller->Next;
		}
		if (Smaller == NULL) {
			win = false;
			break;
		}
		ChanseA = ChanseNext(Smaller->Down, ChanseA);
		if (ChanseA->all == 0) {
			win = true;
			break;
		}
		Summa = (ChanseA->all - ChanseA->more) / ChanseA->all;
		if (GetSumm(Player) > 21) {
			win = false;
		}
	}
	if (GetSumm(Player) <= 21) {
		DestroyTree(TreeCh);
		TreeCh = new TakeTree;
		TreeCh->names = NamesWho(Bot);
		TreeCh->summ = SummWho(Bot);
		TreeCh->types = TypesWho(Bot);
		TreeCh->Down = NULL;
		TreeCh->Next = NULL;
		Chanses(Cards, TreeCh);
		Smaller = TreeCh;
		Summa = 1;
		while (Summa > 0.4) {
			TakeNewCard(amount, Cards, Bot);
			amount--;
			Smaller = Smaller->Down;
			NamesTo = NamesWho(Bot);
			TypesTo = TypesWho(Bot);
			while (Smaller != NULL && Smaller->names != NamesTo && Smaller->types != TypesTo) {
				Smaller = Smaller->Next;
			}
			if (Smaller == NULL) {
				win = true;
				break;
			}
			ChanseA = ChanseNext(Smaller->Down, ChanseA);
			if (ChanseA->all == 0) {
				break;
			}
			Summa = (ChanseA->all - ChanseA->more) / ChanseA->all;
		}
		if (GetSumm(Bot) >= GetSumm(Player) && GetSumm(Bot) <= 21) {
			win = false;
		}
		else {
			win = true;
		}
	}
	DestroyTree(TreeCh);
	DestroyChanses(ChanseA);
	DestroyPerson(Player);
	DestroyPerson(Bot);
	return win;
}

//void main() {
//	Hold Cards;
//	srand(time(0));
//	HolderInic(Cards);
//	int wins = 0;
//	for (float i = 0.2; i < 0.4; i += 0.01) {
//		wins = 0;
//		for (int i = 0; i < 1000; i++) {
//			HolderInic(Cards);
//			if (Simulation(Cards, 0.3)) wins++;
//		}
//		cout << i << " has " << wins / 10 << "%" << endl;
//	}
//	/*for (int i = 0; i < 5; i++) {
//		PlayGame2(Cards);
//	}*/
//	DestroyHolder(Cards);
//}