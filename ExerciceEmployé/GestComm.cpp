#include "GestComm.h"
#include "Gestionnaire.h"
GestComm::GestComm(string n, string p, int nbrT, double SF, int totalV)
	: Employe(n, p, nbrT), Gestionnaire(n, p, nbrT, SF), Commercial(n, p, nbrT, totalV)
{}

void GestComm::Calculer_salaireB()
{
	Commercial::Calculer_salaireB();
	Gestionnaire::Calculer_salaireB();
}


void GestComm::print_employe() const
{
	/*Gestionnaire::print_employe();
	Commercial::print_employe();*/
	Employe::print_employe();
	cout << "Salaire :  " << this->salaire << endl;
	cout << "Total de vente : " << this->total_vente << endl;
	cout << "Salaire fixe par Entreprise : " << this->salaire_fixe << endl;

}