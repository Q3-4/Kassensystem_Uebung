#include "Einkaufswagen.h"
#include "PositionImEinkaufswagen.h"
#include "Produkt.h"
#include <iostream>

Einkaufswagen::Einkaufswagen(Kunde* kunde)
{
	this->kunde = kunde;
}

void Einkaufswagen::hineinlegen(Produkt* produkt)
{
	// ToDo 1.3
}

bool Einkaufswagen::herausnehmen(Produkt* produkt)
{
	// ToDo 1.4
}

double Einkaufswagen::berechneEinkaufswert()
{
	double betrag = 0.0;
	for (PositionImEinkaufswagen* pos : this->positionenImEinkaufswagen) {
		betrag =+ pos->getProdukt()->getPreis();
	}
	return betrag;
}

int Einkaufswagen::getAnzahlInEinkaufswagen(Produkt* produkt)
{
	int anzahl = 0;
	for (PositionImEinkaufswagen* pos : this->positionenImEinkaufswagen) {
		if (produkt->getBezeichnung() == pos->getProdukt()->getBezeichnung()) {
			anzahl = pos->getAnzahl();
			//cout << anzahl << endl;
		}
	}
	return anzahl;
}
