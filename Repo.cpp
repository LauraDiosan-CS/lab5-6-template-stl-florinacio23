#include "Repo.h"
#include <iostream>
using namespace std;

//constructor fara param
Repo::Repo() {
	this->n = 0;
}

//destructor
Repo::~Repo() {
	this->n = 0;
}

//adaugarea unui element de tip Masina
void Repo::addMasina(Masina m) {
	this->cars[this->n++] = m;
}

//returneaza toate elementele de tip Masina
Masina* Repo::getAll() {
	return this->cars;
}

//returneaza dimensiunea repo-ului
int Repo::getSize() {
	return n;
}

//returneaza pozitia unui element de tip Masina
int Repo::findMasina(Masina m) {
	int i = 0;

	while (i < n) {
		if (cars[i] == m)
			return i;
		i++;
	}
	return -1;
}

//sterge un element de tip Masina
void Repo::delMasina(Masina m) {
	int i = findMasina(m);
	if (i != -1) {
		cars[i] = cars[n - 1];
		n--;
	}

}

//modifica un element de tip Masina
void Repo::updateMasina(Masina p, char* numePosesor, int nrInmatriculare, char* status) {
	int i = findMasina(p);
	cars[i].setNumePosesor(numePosesor);
	cars[i].setNrInmatriculare(nrInmatriculare);
	cars[i].setStatus(status);
}

//returneaza elementul de tip Masina de pe o anumita pozitie
Masina Repo::getItemFromPos(int i) {
	return cars[i];
}