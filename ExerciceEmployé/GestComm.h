#pragma once
#include "Gestionnaire.h"
#include "Commercial.h"
class GestComm : public Gestionnaire, public Commercial
{
public:
	GestComm(string n, string p, int nbrT, double SF, int totalV);
	void Calculer_salaireB() override;
	void print_employe() const override;
};