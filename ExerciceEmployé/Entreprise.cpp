#include "Entreprise.h"

Entreprise::Entreprise(string n, string add, double c) : nom(n), adresse(add), capital(c)
{}

void Entreprise::ajouter_Employe(Employe* emp)
{
    this->employes.push_back(emp);
}

double Entreprise::calculerTotalSalarie() const
{
    double total = 0;
    //le type auto est un type qui récupere le type d'un n'importe quel objet 
    // on utilise auto ici parce qu'on sait la nature d'employe (gest/comm ou getComm)
    for (auto emp : this->employes)
    {
        //emp->Calculer_salaireB();
        total += static_cast<double>(*emp);
    }
    return total;
}

void Entreprise::print_entreprise() const
{
    cout << "\nInformations sur Entreprise " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Addresse : " << this->adresse << endl;
    cout << "Employes : " << endl;
    for (auto emp : this->employes)
    {
        emp->print_employe();
    }
}

Entreprise::~Entreprise()
{
    //liberer la memoire des objets employes parce que on a un vecteur de pointeur
    for (auto emp : this->employes)
    {
        delete emp;
    }
    this->employes.clear(); //vider les pointeurs du vector employes
}