#include <bits/stdc++.h>
#include "monkey.h"

using namespace std;

monkey::monkey(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg)
{
	name = NAME;
	pBreed = PBREED;
	pExtinct = PEXTINCT;
	agression = numericalOrderArg;
	iq = numericalSpieceArg;
	favouriteToy = characterSpieceArg;
}

monkey::~monkey()
{
}
animal* monkey::replicate(animal* wife)
{
	cout<<"replicating"<<endl;
	animal* NewAnimal = new monkey(wife->name,wife->pBreed,wife->pExtinct,agression,iq,favouriteToy);
	return NewAnimal;
}
void monkey::toString()
{
	cout<<"this is "<<name<<". "<<name<<" is a monkey and has IQ = "<<iq<<endl;
	cout<<"His favourite toy is: "<<favouriteToy<<", and his agression = "<<agression<<endl;
}
