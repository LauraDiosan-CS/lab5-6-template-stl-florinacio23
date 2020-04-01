#include "Project.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>
using namespace std;

//constructor default(fara param)
Masina::Masina() {
	this->numePosesor = NULL;
	this->nrInmatriculare = 0;
	this->status = NULL;
}

//constructor cu param
Masina::Masina(const char* numePosesor, int nrInmatriculare, char status)
{
	this->numePosesor = new char[strlen(numePosesor) + 1];
	strcpy_s(this->numePosesor, 1 + strlen(numePosesor), numePosesor);
	this->nrInmatriculare = nrInmatriculare;
	this->status = new char[strlen(status) + 1];
	strcpy_s(this->status, 1 + strlen(status), status)

}

//constructor de copiere
Masina::Masina(const Masina& m) {
	if (m.numePosesor) {
		this->numePosesor = new char[strlen(m.numePosesor) + 1];
		strcpy_s(this->numePosesor, 1 + strlen(m.numePosesor), m.numePosesor);
	}
	this->nrInmatriculare = m.nrInmatriculare;
	this->status = new char[strlen(m.status) + 1];
	strcpy_s(this->status, 1 + strlen(m.status), m.status);

}

//destructor
Masina::~Masina() {
	if (numePosesor) delete[]numePosesor;
	numePosesor = NULL;
	nrInmatriculare = -1;
	status = NULL;
}

//getter pentru numePosesor
char* Masina::getNumePosesor() {
	return this->numePosesor;
}

//getter pentru nrInmatriculare
int Masina::getnNrInmatriculare() {
	return this->nrInmatriculare;
}

//getter pentru status
char* Masina::getStatus() {
	return this->status;
}


//setter pentru numePosesor
void Masina::setNumePosesor(const char* numePosesor)
{
	if (this->numePosesor) {
		delete[] this->numePosesor;
	}
	this->numePosesor = new char[strlen(numePosesor) + 1];
	strcpy_s(this->numePosesor, strlen(numePosesor) + 1, numePosesor);
}

//setter pentru nrInmatriculare
void Masina::setNrInmatriculare(int nrInmatriculare) {
	this->nrInmatriculare = nrInmatriculare;
}

//setter pentru status
void Masina::setStatus(char* status)
{
	if (this->status) {
		delete[] this->status;
	}
	this->status = new char[strlen(status) + 1];
	strcpy_s(this->status, strlen(status) + 1, status);
}

//suprascrie operatorul "=" pentru un element de tip Masina
Masina& Masina::operator=(const Masina& m) {
	if (this == &m) return *this; //self-assignment
	if (numePosesor) delete[] numePosesor;
	if (m.numePosesor) 
	{
		this->numePosesor = new char[strlen(m.numePosesor) + 1];
		strcpy_s(numePosesor, strlen(m.numePosesor) + 1, m.numePosesor);
	}
	nrInmatriculare = m.nrInmatriculare;
	if (status) delete[] status;
	if (m.status)
	{
		this->status = new char[strlen(p.status) + 1];
		strcpy_s(status, strlen(m.status) + 1, m.status);
	}
	return *this;
}

//operatorul de egalitate
bool Masina:: operator==(const Masina& m) {
	return strcmp(this->numePosesor, m.numePosesor) == 0 && this->nrInmatriculare == m.nrInmatriculare && strcmp(this->status, m.status) == 0;
}

//pt afisare
ostream& operator<<(ostream& os, const Masina& m)
{
	os << "Nume posesor : " << m.numePosesor << ", numar inmatriculare : " << m.nrInmatriculare << ", status : " << m.status;
	return os;
}