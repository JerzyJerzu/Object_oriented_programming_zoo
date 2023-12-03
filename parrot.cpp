#include <bits/stdc++.h>
#include "parrot.h"

using namespace std;

parrot::parrot(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg):bird(numericalOrderArg,NAME,PBREED,PEXTINCT)
{
	iq = numericalSpieceArg;
	favourite_word = characterSpieceArg;
}

parrot::~parrot()
{
	//cout<<"parrot destructor"<<endl;
}
animal* parrot::replicate(animal* wife)
{
	//cout<<"replicating"<<endl;
	animal* NewAnimal = new parrot(wife->name,wife->pBreed,wife->pExtinct,wings_size,iq,favourite_word);
	return NewAnimal;
}
void parrot::toString()
{
	cout<<"this is "<<name<<". "<<name<<" is a parrot and its favourite phrase is: "<<favourite_word<<endl;
	cout<<"Its iq = "<<iq<<endl<<"Its wings size = "<<wings_size<<endl;
}
