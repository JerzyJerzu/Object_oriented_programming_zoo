#ifndef ZOO_H
#define ZOO_H
#include "animal.h"		//at first it didn't compile without animal.h

class zoo
{
	public:
		vector<animal*> animals;
		void add_animal();
		void breed();
		void operator+=(animal* animal_to_add);
		void operator-=(int index);
		void list_animals();
		//void operator-=(int index);
	protected:
};

#endif