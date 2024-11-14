#pragma once
#include "Employe.h"
class Commercial : virtual public Employe
{
private:
	static double Comission;
protected:
	int total_vente;
public:
	Commercial(string nom, string prenom, int nbrHeureT, int totalV);
	void Calculer_salaireB() override;
	void print_employe()const override;
};