#include "zoo.h"
#include "animal.h"
#include "mammal.h"
#include "monkey.h"
#include <bits/stdc++.h>

using namespace std;

void zoo::add_animal()
{
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	animals.push_back(SomeAnimal);	
}

void zoo::breed()
{
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	*this+=SomeAnimal;
}

void zoo::operator+=(animal* animal_to_add)
{
	
	//animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	animals.push_back(animal_to_add);
}

void zoo::operator-=(int index)
{
	//how to remove some specific element from a vector???
	return;
}

void zoo::list_animals()
{
	int size = animals.size();
	for(int i=0;i<size;i++)
	{
		cout<<animals.at(i)<<endl;
		animals.at(i)->toString();
	}
}
