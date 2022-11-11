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
#include "eagle.h"
*/

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
		string WORDS[] = {"Pneumonoultramicroscopicsilicovolcanoconiosis","Life is miserable, meanigless and ends with unevitable death","Life is wonderfull, meanigless and ends with unevitable death"};
		int WORDS_size = sizeof(WORDS)/sizeof(string);
		string word = WORDS[rand()%WORDS_size];
		int iq = 2*zoo::probability();
		int wings_size = zoo::probability();
		return new parrot(name,pBreed,pExtinct,wings_size,iq,word);
	}
	if(choice == 2)
	{
		string COLORS[] = {"cyan","magneta","yellow","black"};
		int COLORS_size = sizeof(COLORS)/sizeof(string);
		string color = COLORS[rand()%COLORS_size];
		int sight = zoo::probability();
		int wings_size = zoo::probability();
		return new eagle(name,pBreed,pExtinct,wings_size,sight,color);
	}
	if(choice == 3)
	{
		string RACES[] = {"flying rainbow pony","unicorn","white horse of conquer","red horse of war","black horse of famine","pale horse of death"};
		int RACES_size = sizeof(RACES)/sizeof(string);
		string race = RACES[rand()%RACES_size];
		int speed = zoo::probability();
		int agression = zoo::probability();
		return new horse(name,pBreed,pExtinct,agression,speed,race);
	}
	if(choice == 4)
	{
		string COLORS[] = {"cyan","magneta","yellow","black"};
		int COLORS_size = sizeof(COLORS)/sizeof(string);
		string color = COLORS[rand()%COLORS_size];
		int cuteness = zoo::probability();
		int agression = zoo::probability();
		return new panda(name,pBreed,pExtinct,agression,cuteness,color);
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
