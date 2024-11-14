#include "Commercial.h"
#include "Employe.h"
double Commercial::Comission = 100;

Commercial::Commercial(string nom, string prenom, int nbrHeureT, int totalV) :
    Employe(nom, prenom, nbrHeureT), total_vente(totalV)
{
    this->salaire = 0.0;
}


void Commercial::Calculer_salaireB()
{
    Employe::Calculer_salaireB();
    salaire += (Comission * total_vente);
}

void Commercial::print_employe() const
{
    Employe::print_employe();
    cout << "Salaire :  " << this->salaire << endl;
    cout << "Total de vente : " << this->total_vente << endl;
}