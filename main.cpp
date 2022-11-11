#include <bits/stdc++.h>
#include <time.h>
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

using namespace std;

animal* animal_randomizer()
{
	string ANIMAL_NAMES[] = {"Bob","Tom","Rob","Max","Sam","Dax","Rey","Gus","Jay"};
	int NAMES_size = sizeof(ANIMAL_NAMES)/sizeof(string);
	string name = ANIMAL_NAMES[rand()%NAMES_size];
	int pExtinct = zoo::probability();
	int pBreed = zoo::probability();
	
	int choice = rand()%1;
	
	if(choice == 0)
	{
		string TOYS[] = {"AK-47","cigarettes","Holy hand granade","teddy bear", "antimatter teddy bear", "portable mini nuclear fusion reactor","one ring to rule them all","sword of destiny"};
		int TOYS_size = sizeof(TOYS)/sizeof(string);
		string toy = TOYS[rand()%TOYS_size];
		int iq = 2*zoo::probability();
		int agression = zoo::probability();
		return new monkey(name,pBreed,pExtinct,agression,iq,toy);
	}
	if(choice == 1)
	{
	}
	if(choice == 2)
	{
	}
	if(choice == 3)
	{
	}
	if(choice == 4)
	{
	}
	if(choice == 5)
	{
	}	
}
int main()
{
	srand(time(0));
	
	int noAnimals;
	cout<<"hello"<<endl;
	cout<<"how many animals do you want in a zoo? ";
	cin>>noAnimals;
	zoo MyZoo;
	for(int i=0;i<noAnimals;i++)
	{
		MyZoo+=animal_randomizer();
	}
	
	MyZoo.list_animals();
	
	int size_of_zoo = MyZoo.get_size();
	while((size_of_zoo<100)&&size_of_zoo>1)
	{
		//cout<<endl<<"************"<<endl<<"size_of_zoo = "<<size_of_zoo<<endl<<"************"<<endl;
		MyZoo.breed();
		size_of_zoo = MyZoo.get_size();
	}
	return 0;
}
