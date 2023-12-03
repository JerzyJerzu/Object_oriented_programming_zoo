//#include <bits/stdc++.h>
#ifndef MAMMAL_H
#define MAMMAL_H

#include "animal.h"
//using namespace std;

class mammal : public animal
{
	public:
		mammal(int numericalOrderArg,string NAME, int PBREED, int PEXTINCT);
		virtual ~mammal();
	protected:
		int agression;
};

#endif
