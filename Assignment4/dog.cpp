#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
#include "dog.h"

ostream& operator<<(ostream& os, const dog& d)
{
	os << "Name: " << d.inputName << endl;
	os << "Breed: " << d.inputBreed << endl;
	os << "Owner: " << d.inputOwner << endl;
	os << "Vaccinated: " << (d.inputVaccinated ? "yes" : "no") << endl;
	os << "Needs forever home: " << (d.inputNeedsHome ? "yes" : "no") << endl;
	return os;
}

