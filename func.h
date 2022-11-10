#pragma once
#include <iostream>
using namespace std;

class Multime {
	int* date;
	int dim;
	int n;
public:
	Multime();
	Multime(int dim);
	~Multime();
	void adauga(int num);
	void extrage(int num);
	void afisare();
};