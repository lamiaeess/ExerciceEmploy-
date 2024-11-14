#include <iostream>
#include "Entreprise.h"
#include "Salarie.h"
#include "Employe.h"
#include "Gestionnaire.h"
#include "Commercial.h"
#include "GestComm.h"
int main()
{
    Salarie* s1;
    s1 = new Employe("Chebila", "Douae", 50);
    s1->print_employe();

    Employe* s2 = new Commercial("n1", "p1", 60, 400);
    s2->Calculer_salaireB();
    s2->print_employe();

    Employe* s3 = new Gestionnaire("n2", "p2", 40, 2000);
    s3->Calculer_salaireB();
    s3->print_employe();

    Employe* s4 = new GestComm("n3", "p3", 35, 4000, 65);
    s4->Calculer_salaireB();
    s4->print_employe();

    cout << "**********************Partie Entreprise *****************************" << endl;

    Entreprise* E1 = new Entreprise("Marjane", "addresse1", 4000000);
    E1->ajouter_Employe(s2);
    E1->ajouter_Employe(s3);
    E1->ajouter_Employe(s4);

    cout << "\n**********Total salarie est : " << E1->calculerTotalSalarie() << endl;

    E1->print_entreprise();
}