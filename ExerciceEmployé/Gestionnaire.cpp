#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(string n, string p, int nbrT, double SF) : Employe(n, p, nbrT), salaire_fixe(SF)
{
    this->salaire = 0.0;
}

void Gestionnaire::Calculer_salaireB()
{
    Employe::Calculer_salaireB();
    this->salaire += salaire_fixe;
}

void Gestionnaire::print_employe() const
{
    Employe::print_employe();
    cout << "Salaire :  " << this->salaire << endl;
    cout << "Salaire fixe par Entreprise : " << this->salaire_fixe << endl;
}