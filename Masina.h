#pragma once
#include <ostream>
using namespace std;

class Masina {
private:
	char* numePosesor;
	int nrInmatriculare;
	char* status;
public:
	Masina();
	Masina(const char* numePosesor, int nrInmatriculare, char* status);
	Masina(const Masina& m);
	~Masina();
	char* getNumePosesor();
	int getNrInmatriculare();
	char* getStatus();
	void setNumePosesor(const char* numePosesor);
	void setNrInmatriculare(int nrInmatriculare);
	void setStatus(char* status);
	Masina& operator=(const Masina& m);
	bool operator==(const Masina& m);
	friend ostream& operator<<(ostream& os, const Masina& m);
};
#pragma once
#pragma once
