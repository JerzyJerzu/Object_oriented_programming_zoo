#include "panda.h"

panda::panda(int numericalSpieceArg; string characterSpieceArg)
{
	cuteness = numericalSpieceArg;
	eyeColour = characterSpieceArg;
}

panda::~panda()
{
	delete cuteness;
	delete eyeColour;
}
void panda::toString()
{
	cout<<"this "<< <<" and "<<endl;
}

