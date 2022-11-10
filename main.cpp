#include <bits/stdc++.h>
#include "animal.h"
#include "mammal.h"
#include "monkey.h"
#include "zoo.h"

/*
#include "bird.h"
#include "panda.h"
#include "horse.h"
#include "parrot.h"
#include "eagle.h"*/

//REMEBER DYNAMIC CAST

template <class animalType>
animalType* copyType(animalType* A)
{
	animalType* B = new animalType("TiM",0.8,0.7,150,80,"cat");
	return B;
}

using namespace std;
int main() {
	cout<<"hello"<<endl;
	zoo MyZoo;
	
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	MyZoo+=SomeAnimal;
	MyZoo.breed();
	MyZoo.list_animals();
	/*
	MyZoo.add_animal();
	MyZoo.add_animal();
	MyZoo.list_animals();
	*/
	/*
	vector<animal*> zoo;
	
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	zoo.push_back(SomeAnimal);
	SomeAnimal = new monkey("Mike",0.5,0.9,90,100,"can");
	zoo.push_back(SomeAnimal);
	
	animal* child = SomeAnimal;
	zoo.push_back(child);
	*/
	
	//animal* child = copyType(*SomeAnimal);
	
	/*
	size = zoo.size();
	cout<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<zoo.at(i)<<endl;
		zoo.at(i)->toString();
	}*/
	
	/*
	for(int i=0;i<size;i++)
	{
		delete zoo.at(i);
	}*/
	return 0;
}
