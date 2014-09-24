/*
************************************************************
Ohjelman nimi: harjoitus 4 
*tekij‰: Tatu Reijonen
*Lyhyt kuvaus:
*Ks. ohjelmakoodia: harj4 (omat esimerkit)
*
*a) Kirjoita, tallenna ja suorita ym. ohjelma.
*b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
*c) Muuta vakioden nimet niin, ett‰
*MAX => MINIMI
*max => MAKSIMI
*
*Muuta ohjelmaa niin, ett‰ voit tulostaa ohjelmalla seuraavat ilmoitukset:
*Summa on pienempi kuin MINIMI
*Summa on suurempi kuin MAKSIMI
*Summa on MINIMIN ja MAKSIMIN v‰liss‰
*Versio: 1.0
*PVM: 10.9.2014
**********************************************/



#include <iostream>
using namespace std;

//vakioiden m‰‰rittely
#define MINIMI 10 // vanha tapa
const int MAKSIMI = 20; //uusi, suositeltava tapa

//julkisten muuttujien esittely
int summa;

//esitell‰‰n aliohjelmat
void Laske(int, int);

void main() // p‰‰ohjelma alkaa t‰st‰
{ // alkava lohkosulku
	// paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;

	cout << "syˆt‰ luku: ";
	cin >> luku2;

	Laske(luku1, luku2); // aliohjelman kutsu
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin MINIMI" << MINIMI;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin MAKSIMI" << MAKSIMI;
	if (MINIMI < summa && summa < MAKSIMI)
		cout << "Summa on MINIMIN ja MAKSIMIN v‰liss‰";
} // lopettava lohkosulku


void Laske(int eka, int toka) // aliohjelman m‰‰rittely
{
	summa = eka + toka;
}