#include <bits/stdc++.h>
#include "mammal.h"

using namespace std;

mammal::mammal(int numericalOrderArg,string NAME, int PBREED, int PEXTINCT):animal(NAME,PBREED,PEXTINCT)
{
	agression = numericalOrderArg;
}
mammal::~mammal()
{
	//cout<<"mammal destructor"<<endl;
}
