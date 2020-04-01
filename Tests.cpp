#include "Masina.h"
#include "Repo.h"
#include <iostream>
#include <assert.h>
#include "tests.h"
using namespace std;

//teste constructori
void testConstructors() {
	Masina m1; //constructor implicit
	assert(m1.getNumePosesor() == NULL);
	assert(m1.getNrInmatriculare() == 0);
	assert(m1.getStatus() == NULL);
	char a[10] = "sergiu";
	char stat[10] = "ocupat";
	Masina m2(a, 5, stat); //constructor cu param
	assert(strstr(m2.getNumePosesor(), "sergiu");
	assert(m2.getNrInmatriculare() == 5);
	assert(strstr(m2.getStatus(), "ocupat");
	Masina m3(m2); //constructor de copiere
	assert(m3 == m2);
}

//teste setteri, getteri
void testSetGet() {
	Masina m; char a[10] = "alex";char stat[10] = "liber";
	m.setNumePosesor(a);
	m.setNrInmatriculare(52);
	m.setStatus(stat);
	assert(strstr(p.getNumePosesor(), "alex")
	assert(s.getNrInmatriculare() == 52)
	assert(strstr(s.getStatus(), "liber");
}

//test operator de egalitate
void testEqual() {
	char a[10] = "mircea"; char b[10] = "marian";char stata[10] = "liber"; char statb[10] = "ocupat";
	Masina m1(a, 3, stata);
	Masina m2(b, 12, stata);
	m1 = m2;
	assert(strstr(m1.getNumePosesor(), "marian");
	assert(m1.getNrInmatriculare() == 12);
	assert(strstr(m1.getStatus(), "ocupat");
}

//teste repository
void testRepo() {
	Repo r;
	char a[10] = "alex"; char b[10] = "bogdan";char stata[10] = "liber";char statb[10] = "ocupat";
	Masina m(a, 10, stata);
	r.addMasina(m); //adaugare
	assert(r.getSize() == 1); //dimensiune
	Masina m1(a, 11, stata);
	r.addProject(m1);
	assert(r.getSize() == 2);
	Masina* res; res = r.getAll(); //getAll
	assert(res[0] == p);
	assert(res[1] == p1);
	r.delMasina(m1); //stergere
	assert(r.getSize() == 1);
	assert(strstr(m.getNumePosesor(), "alex"));
	assert(m.getNrInmatriculare() == 11);
	assert(strstr(m.getStatus(), "liber"));
	r.updateMasina(m, b, 20, statb);	//update
	assert(strstr(r.getItemFromPos(0).getNumePosesor(), "bogdan"));
	assert(r.getItemFromPos(0).getNrInmatriculare() == 20);
	assert(strstr(r.getItemFromPos(0).getStatus(), "ocupat"));
	assert(r.findProject(r.getItemFromPos(0)) == 0); //gasire pozitie a unui elem Project
}

void tests() {
	testConstructors();
	testSetGet();
	testEqual();
	testRepo();
	cout << "... all tests are good ... " << endl << endl;
}
