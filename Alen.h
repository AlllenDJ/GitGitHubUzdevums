// Alen.h
#ifndef ALEN_H
#define ALEN_H

#include <iostream>
#include "Name.h"
using namespace std;

class Alen : public Name
{
    public:
        Alen(string = "DefaultAlen");
        virtual void setName(string);
        void Print() const;

    private:
        string name;
};

#endif
