#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class bird : public animal
{
	public:
		bird(int numericalOrderArg,string NAME, int PBREED, int PEXTINCT);
		virtual ~bird();
	protected:
		int wings_size;
};

#endif
