#include "zoo.h"
#include "animal.h"
#include "mammal.h"
#include "monkey.h"
#include <bits/stdc++.h>
#include <time.h>

using namespace std;

int zoo::probability()
{
	return rand()%100;
}
void zoo::breed()
{
	static int size = animals.size();
	cout<<"-------------Breeding:----------------";
	for(int i=0;i<size;i++)
	{
		cout<<"-------------------"<<endl;
		cout<<animals.at(i)<<endl;
		animals.at(i)->toString();
		
		int chance_extinct = zoo::probability();
		int chance_breed = zoo::probability(); 
		
		if((chance_breed > *animals.at(i)->pBreed)&&(size>1))
		{
			int index = i;
			int wife_index = rand()%size;
			while(wife_index == index)
			{
				wife_index = rand()%size;
			}
			*this+=animals.at(index)->replicate(animals.at(wife_index));
			*this+=animals.at(wife_index)->replicate(animals.at(index));
			
			cout<<*animals.at(index)->name<<" and "<<*animals.at(wife_index)->name<<" have now children"<<endl;
		}
		
		if(chance_extinct > *animals.at(i)->pExtinct)
		{
			*this-=i;
			size--;
			i--;
		}
	}
}

void zoo::operator+=(animal* animal_to_add)
{
	animals.push_back(animal_to_add);
}

void zoo::operator-=(int index)
{
	cout<<*animals.at(index)->name<<" has just died"<<endl;
	delete animals.at(index);
	animals.erase(animals.begin()+index);
}

void zoo::list_animals()
{
	cout<<"-------------listing:----------------";
	int size = animals.size();
	for(int i=0;i<size;i++)
	{
		cout<<"-------------------"<<endl;
		cout<<animals.at(i)<<endl;
		animals.at(i)->toString();
	}
}
