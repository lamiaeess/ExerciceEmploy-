#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include "Employe.h"
class Entreprise
{
private:
	string nom;
	string adresse;
	double capital;
	vector<Employe*> employes; // vecteur est un tableau dynamique (resize dynamique)
public:
	Entreprise(string n, string add, double c);
	void ajouter_Employe(Employe* emp);
	double calculerTotalSalarie() const;
	void print_entreprise() const;
	~Entreprise();
};