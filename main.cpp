#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Alen.h" //-> added this
using namespace std;

int main()
{
	const int array_size = 2; // <-- Increase array size
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Names[0] = &a;

	Alen al;
    al.setName("Alen");
    Names[1] = &al;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
