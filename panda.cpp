#include <bits/stdc++.h>
#include "panda.h"

using namespace std;

panda::panda(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg):mammal(numericalOrderArg,NAME,PBREED,PEXTINCT)
{
	cuteness = numericalSpieceArg;
	eye_colour = characterSpieceArg;
}

panda::~panda()
{
	//cout<<"panda destructor"<<endl;
}
animal* panda::replicate(animal* wife)
{
	//cout<<"replicating"<<endl;
	animal* NewAnimal = new panda(wife->name,wife->pBreed,wife->pExtinct,agression,cuteness,eye_colour);
	return NewAnimal;
}
void panda::toString()
{
	cout<<"this is "<<name<<". "<<name<<" is a panda and its eye colour is "<<eye_colour<<endl;
	cout<<"Its cuteness = "<<cuteness<<endl<<"Its agression = "<<agression<<endl;
}
