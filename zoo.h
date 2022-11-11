#ifndef ZOO_H
#define ZOO_H
#include "animal.h"		//at first it didn't compile without animal.h, but later it did

class zoo
{
	public:
		vector<animal*> animals;
		void add_animal();
		void breed();
		void operator+=(animal* animal_to_add);
		void operator-=(int index);
		void list_animals();
		void replication(int index);
		static int probability();
	protected:
};

#endif
