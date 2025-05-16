// Alens.cpp
#include <iostream>
#include "Name.h"
#include "Alens.h"

using namespace std;

Alens::Alens(string n)
{
    name = n;
}

void Alens::setName(string n)
{
    name = n;
}

void Alens::Print() const
{
    cout << name << endl;
}
