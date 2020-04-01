#pragma once
#include "Masina.h"

class Repo {
private:
	Masina cars[20];
	int n;
public:
	Repo();
	~Repo();
	void addMasina(Masina m);
	Masina* getAll();
	int getSize();
	int findMasina(Masina m);
	void delMasina(Masina m);
	void updateMasina(Masina m, char* numePosesor, int nrInmatriculare, char* status);
	Masina getItemFromPos(int i);
};
