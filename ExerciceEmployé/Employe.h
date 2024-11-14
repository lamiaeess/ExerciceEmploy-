#pragma once
#include<iostream>
#include "Salarie.h"
using namespace std;
class Employe : public Salarie
{
private:
	string nom;
	string prenom;
	static double taux_horaire;
	int nbrHeureT;
protected:
	double salaire;
public:
	Employe(string nom, string prenom, int nbrHeureT);
	virtual void Calculer_salaireB();
	virtual void print_employe()const;
	//definir l'operateur cast
	operator double() const;
};