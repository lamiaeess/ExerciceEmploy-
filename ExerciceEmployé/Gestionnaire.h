#pragma once
#include "Employe.h"
class Gestionnaire : virtual public Employe
{
protected:
	double salaire_fixe;
public:
	Gestionnaire(string nom, string prenom, int nbrHeureT, double SF);
	void Calculer_salaireB()override;
	void print_employe()const override;
};