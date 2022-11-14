#include <bits/stdc++.h>
#include "horse.h"

using namespace std;

horse::horse(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg):mammal(numericalOrderArg,NAME,PBREED,PEXTINCT)
{
	speed = numericalSpieceArg;
	race = characterSpieceArg;
}

horse::~horse()
{
	//cout<<"horse destructor"<<endl;
}
animal* horse::replicate(animal* wife)
{
	//cout<<"replicating"<<endl;
	animal* NewAnimal = new horse(wife->name,wife->pBreed,wife->pExtinct,agression,speed,race);
	return NewAnimal;
}
void horse::toString()
{
	cout<<"this is "<<name<<". "<<name<<" is a "<<race<<endl;
	cout<<"Its speed = "<<speed<<endl<<"Its agression = "<<agression<<endl;
}
