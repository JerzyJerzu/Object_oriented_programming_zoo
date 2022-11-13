#ifndef PANDA_H
#define PANDA_H

#include <mammal.h>
using namespace std;
class panda : public mammal
{
	public:
		int cuteness;
		string eyeColour;
		panda(int numericalSpieceArg; string characterSpieceArg);
		~panda();
		void toString();
	protected:
};

#endif
