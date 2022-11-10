#include "func.h"

Multime::Multime()
{
	this->dim = 50;
	this->n = 0;
	date = new int[this->dim];
}
Multime::Multime(int dim)
{
	this->dim = dim;
	this->n = 0;
	date = new int[this->dim];
}
Multime::~Multime()
{
	if (this->date != NULL)
	{
		delete[] date;
	}
}
void Multime::adauga(int num)
{
	if (n == 0)
	{
		date[n] = num;
		n++;
	}
	else {
		if (n < dim)
		{
			int contor = 0;
			for (int i = 0; i < n; i++)
			{
				if (date[i] == num)
				{
					contor = 1;
					break;
				}
			}
			if (contor)
			{
				cout << "\nNumarul " << num << " este deja in multime\n";
			}
			else
			{
				date[n] = num;
				n++;
			}
		}
		else {
			cout << "\nNu mai este loc in multime\n";
		}
	}
}
void Multime::extrage(int num)
{
	if (n == 0)
	{
		cout << "\nMultimea nu are elemente\n";
	}
	else {
		if (n < dim)
		{
			for (int i = 0; i < n; i++)
			{
				if (date[i] == num)
				{
					date[i] = date[n-1];
					n--;
				}
				else {
					cout << "\nNumarul " << num <<" nu apartine multimii\n";
				}
			}
			
		}
	}
}
void Multime::afisare()
{
	for (int i = 0; i < n; i++)
	{
		cout << date[i] << " ";
	}
}