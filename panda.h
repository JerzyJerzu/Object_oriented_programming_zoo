#ifndef PANDA_H
#define PANDA_H
#include "mammal.h"
//using namespace std;
class panda : public mammal
{
		int cuteness;
		string eye_colour;
	public:
		panda(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg);
		animal* replicate(animal* wife);
		~panda();
		void toString();
	protected:
};

#endif
