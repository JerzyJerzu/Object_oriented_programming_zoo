#include <bits/stdc++.h>
#include "monkey.h"

using namespace std;

monkey::monkey(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg)
{
	name = new string;
	pBreed = new int;
	pExtinct = new int;
	*name = NAME;
	*pBreed = PBREED;
	*pExtinct = PEXTINCT;
	
	iq = new int;
	favouriteToy = new string;
	agression = new int;
	*agression = numericalOrderArg;
	*iq = numericalSpieceArg;
	*favouriteToy = characterSpieceArg;
}

monkey::~monkey()
{
	delete name;
	delete pExtinct;
	delete pBreed;
	delete iq;
	delete favouriteToy;
	delete agression;
}
animal* monkey::replicate()
{
	cout<<"replicating"<<endl;
	animal* NewAnimal = new monkey("child",0.8,0.7,*agression,*iq,*favouriteToy);
	//cout<<endl<<NewAnimal<<endl;
	//NewAnimal->toString();
	return NewAnimal;
}
void monkey::toString()
{
	cout<<"this is "<<*name<<". "<<*name<<" is a monkey and has IQ = "<<*iq<<endl;
	cout<<"His favourite toy is: "<<*favouriteToy<<", and his agression = "<<*agression<<endl<<endl;
}
