#include <bits/stdc++.h>
#include "eagle.h"

using namespace std;

eagle::eagle(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg):bird(numericalOrderArg,NAME,PBREED,PEXTINCT)
{
	sight = numericalSpieceArg;
	colour = characterSpieceArg;
}

eagle::~eagle()
{
	//cout<<"eagle destructor"<<endl;
}
animal* eagle::replicate(animal* wife)
{
	//cout<<"replicating"<<endl;
	animal* NewAnimal = new eagle(wife->name,wife->pBreed,wife->pExtinct,wings_size,sight,colour);
	return NewAnimal;
}
void eagle::toString()
{
	cout<<"this is "<<name<<". "<<name<<" is an eagle and its plumage colour is "<<colour<<endl;
	cout<<"Its sight = "<<sight<<endl<<"Its wings size = "<<wings_size<<endl;
}
