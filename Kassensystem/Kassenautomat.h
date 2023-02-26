#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Kassenautomat
{
private:
	static vector<vector<int>> a;
public:
	vector<vector<int>> berechneWechselgeldstuecke(int);
};

/*
Hier benutze ich einen 2D Vektor, da ein 2-Dimensionales Int Array sich hierf�r nicht eignet.
Wegen der Speicher allocation und deallocationm die man f�r ein 2D Int Array br�uchte, welches man dynamisch anlegt,
habe ich beschlossen auf ein Vektor zur�ckzugreifen, da dieser das im hintergrund regelt.
*/

