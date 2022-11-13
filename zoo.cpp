#include "zoo.h"
#include "animal.h"
#include "mammal.h"
#include "monkey.h"
#include <bits/stdc++.h>

using namespace std;

void zoo::breed()
{
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	*this+=SomeAnimal;
}

void zoo::replication(int index)
{
	//add randomization
	int wife_index = 1;
	*this+=animals.at(index)->replicate(animals.at(wife_index));
	*this+=animals.at(wife_index)->replicate(animals.at(index));
}

void zoo::operator+=(animal* animal_to_add)
{
	animals.push_back(animal_to_add);
}

void zoo::operator-=(int index)
{
	//how to remove some specific element from a vector???
	cout<<animals.at(index)<<" has died"<<endl;
	delete animals.at(index);
	animals.erase(animals.begin()+index);
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
