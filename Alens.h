// Alens.h
#ifndef ALENS_H
#define ALENS_H

#include <iostream>
#include "Name.h"
using namespace std;

class Alens : public Name
{
    public:
        Alens(string = "DefaultAlens");
        virtual void setName(string);
        void Print() const;

    private:
        string name;
};

#endif
